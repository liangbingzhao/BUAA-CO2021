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
	 
	 // judge1�ж��ǲ������ֻ���ĸ, judge2�ж��ǲ��Ƿ���
	 // cnt��¼�Ƿ���ֵȺ�,�еȺŲſ��������Ϊ1
	 // status��Ϊ����,s0��ʼ״̬,����ո���ԭ��,�������ֻ���ĸ����״̬1(���cntΪ1,�����1),����Ⱥ�Ҳ��ԭ��(�Ⱥ���������˾ͽ���s3),���ַ���Ҳ����s3
	 // s1,��ĸ����̬:����ո���ԭ��,�������ֻ���ĸ����s3,������Ž���s2,����ո�(���cntΪ1,����s3;�����Ϊ1,��Ϊ0,�����s0)
	 // s2,����̬:����ո���ԭ��, �������ֻص�s1(���cntΪ1,�����1),��������s3ȥ
	 // s3,����̬: ���ֻ����0
	 
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
