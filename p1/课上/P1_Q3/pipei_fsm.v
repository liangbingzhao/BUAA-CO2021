`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:25 11/01/2021 
// Design Name: 
// Module Name:    pipei_fsm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pipei_fsm(
    input [7:0] in,
    input clk,
    input clr,
    output reg out
    );
	 
	 // judge1判断是不是数字或字母, judge2判断是不是符号
	 // cnt记录是否出现等号,有等号才可能令输出为1
	 // status分为四类,s0初始状态,输入空格在原地,输入数字或字母进入状态1(如果cnt为1,则输出1),输入等号也在原地(等号如果出现了就进入s3),出现符号也进入s3
	 // s1,字母数字态:输入空格在原地,输入数字或字母进入s3,输入符号进入s2,输入空格(如果cnt为1,进入s3;如果不为1,即为0,则进入s0)
	 // s2,符号态:输入空格在原地, 输入数字回到s1(如果cnt为1,就输出1),其他都到s3去
	 // s3,错误态: 输出只会是0
	 
	 wire judge1;
	 wire judge2;
	 reg [1:0] status;
	 reg cnt;
	 
	 initial begin
		status <= 'd0;
		cnt <= 0;
		out <= 0;
	 end
	 
	 assign judge2 = ((in == "+") || (in == "-") || (in == "*") || (in == "/")) ? 1 : 0;
	 assign judge1 = (((in >= "0") && (in <= "9")) || ((in >= "a") && (in <= "z")) || ((in >= "A") && (in <= "Z"))) ? 1 : 0;
	 
	 always @(posedge clk or posedge clr) begin
		if (clr == 1) begin
			status <= 'd0;
			cnt <= 0;
			out <= 0;
		end
		else begin	
			case (status) 
				'd0 : begin
							if (in == " ") begin
								status <= 'd0;
							end
							else if (in == "=") begin
								if (cnt == 1) begin
									status <= 'd3;
									out <= 'd0;
									cnt <= 'd0;
								end
								else begin
									cnt <= 1;
									status <= 'd0;
									out <= 'd0;
								end
							end
							else if (judge1) begin
								status <= 'd1;
								if (cnt == 1) begin
									out <= 1;
								end
								else begin
								end
							end
							else begin
								status <= 'd3;
								out <= 0;
							end
						end
				'd1 : begin	
							if (in == " ") begin
								status <= 'd1;
							end
							else if (judge1) begin
								status <= 'd3;
								out <= 0;
							end
							else if (judge2) begin
								status <= 'd2;
								out <= 0;
							end
							else if (in == "=") begin
								if (cnt == 1) begin
									status <= 'd3;
									out <= 0;
									cnt <= 0;
								end
								else begin
									cnt <= 1;
									status <= 'd0;
								end
							end
							else begin
								status <= 'd3;
								out <= 0;
							end
						end
				'd2 : begin
							if (in == " ") begin
								status <= 'd2;
							end
							else if (judge1) begin
								status <= 'd1;
								if (cnt == 1) begin 
									out <= 1;
								end
								else begin
									out <= 0;
								end 
							end
							else begin
								status <= 'd3;
								out <= 0;
							end
						end
				'd3 : begin	
							out <= 'd0;
						end
			endcase
		end
	end
	
endmodule
