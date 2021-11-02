`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:48:18 10/22/2021 
// Design Name: 
// Module Name:    BlockChecker 
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
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output reg result
    );
	 reg [31:0] num1;
	 reg [31:0] num2;
	 reg [3:0] status;
	 
	 // ≥ı ºªØ
	 initial begin
		result = 1;
		num1 = 0;
		num2 = 0;
		status <= 'd0;
	 end
	 
	 // always
	 always @(posedge clk or posedge reset) begin
		if (reset) begin
			num1 <= 0;
			num2 <= 0;
			status <= 1;
			result = 1;
		end
		else begin
			case (status)
				'd0 : begin
							if (in == " ") begin
								status <= 'd1;
							end
							else begin 
								status <= 'd0;
							end
						end
				'd1 : begin
							
							if ((in == "b") || (in == "B")) begin
								if (num1 < num2) begin 
									status <= 'd10;
								end
								else begin
								status <= 'd2;
								end
							end
							else if ((in == "e") || (in == "E")) begin
								if (num1 < num2) begin 
									status <= 'd10;
								end
								else begin
								status <= 'd7;
								end
							end
							else if (in == " ") begin
								status <= 'd1;
							end
							else begin 
								if (num1 < num2) begin 
									status <= 'd10;
								end
								else begin
								status <= 'd0;
								end
							end
						end
				'd2 : begin
							if ((in == "e") || (in == "E")) begin
								status <= 'd3;
							end
							else begin 
								status <= 'd0;
							end
						end
				'd3 : begin
							if ((in == "g") || (in == "G")) begin
								status <= 'd4;
							end
							else begin 
								status <= 'd0;
							end
						end
				'd4 : begin
							if ((in == "i") || (in == "I")) begin
								status <= 'd5;
							end
							else begin 
								status <= 'd0;
							end
						end
				'd5 : begin
							if ((in == "n") || (in == "N")) begin
								num1 <= num1 + 1;
								if ((num1 + 1) > num2) begin
									result <= 0;
									status <= 'd6;
								end
								else if ((num1 + 1) < num2) begin
									result <= 0;
									status <= 'd6;
								end
								else begin
									result <= 1;
									status <= 'd6;
								end
							end
							else begin 
								status <= 'd0;
							end
						end
				'd6 : begin
							if (in == " ") begin
								status <= 'd1;
							end
							else begin 
								num1 <= num1 - 1;
								if ((num1 - 1) > num2) begin
									result <= 0;
									status <= 'd0;
								end
								else if ((num1 - 1) < num2) begin
									status <= 'd0;
									result <= 0;
								end
								else begin
									result <= 1;
									status <= 'd0;
								end
							end
						end
				'd7 : begin
							if ((in == "n") || (in == "N")) begin
								status <= 'd8;
							end
							else begin 
								status <= 'd0;
							end
						end
				'd8 : begin
							if ((in == "d") || (in == "D")) begin
								num2 <= num2 + 1;
								if ((num2 + 1) < num1) begin
									result <= 0;
									status <= 'd9;
								end
								else if (num1 < (num2 + 1)) begin
									status <= 'd9;
									result <= 0;
								end
								else begin
									result <= 1;
									status <= 'd9;
								end
							end
							else begin 
								status <= 'd0;
							end
						end
				'd9 : begin
							if (in == " ") begin
								status <= 'd1;
							end
							else begin 
								num2 <= num2 - 1;
								if ((num2 - 1) < num1) begin
									result <= 0;
									status <= 'd0;
								end
								else if (num1 < (num2 - 1)) begin
									status <= 'd0;
									result <= 0;
								end
								else begin
									result <= 1;
									status <= 'd0;
								end
							end
						end
				'd10 : begin
							result <= 'd0;
						 end
			endcase
		end
	end

endmodule
