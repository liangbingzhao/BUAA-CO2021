`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:47 10/21/2021 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
    );
	 
	 wire judge;
	 reg [1:0] status;
	 
	 initial begin
		out = 0;
		status = 'd0;
	 end
	 
	 assign judge = ((in >= "0") && (in <= "9")) ? 'd1 : 'd0;  
	 
	 always @(posedge clk or posedge clr) begin
		if (clr == 1) begin
			out <= 0;
			status <= 'd0;
		end
		else begin
			case (status) 
				'd0 : begin
						   if (judge) begin
								status <= 'd1;
								out <= 'd1;
							end
							else begin
								status <= 'd3;
								out <= 'd0;
							end
						end
				'd1 : begin
							if (judge) begin
								status <= 'd3;
								out <= 'd0;
							end
							else begin
								status <= 'd2;
								out <= 'd0;
							end
						end
				'd2 : begin
							if (judge) begin
								status <= 'd1;
								out <= 'd1;
							end
							else begin
								status <= 'd3;
								out <= 'd0;
							end
						end
				'd3 : begin
							out <= 'd0;
						end
				default : begin
								status <= 'd0;
								out <= 'd0;
							 end			 
			endcase
		end
	end

endmodule
