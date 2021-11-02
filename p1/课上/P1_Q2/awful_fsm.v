`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:16 11/01/2021 
// Design Name: 
// Module Name:    awful_fsm 
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
module awful_fsm(
    input clk,
    input [1:0] in,
    output reg [2:0] out,
    input clr
    );
	 
	 reg [5:0] cnt1;
	 reg [5:0] cnt2;
	 reg [5:0] cnt3;
	 initial begin
		cnt1 <= 'd0;
		cnt2 <= 'd0;
		cnt3 <= 'd0;
		out <= 'd0;
	 end
	 
	 always @(posedge clk or posedge clr) begin
		if (clr == 1) begin
			out <= 'd0;
			cnt1 <= 'd0;
			cnt2 <= 'd0;
			cnt3 <= 'd0;
		end
		else begin
			case (out)
				'd0 : begin
							if (in == 'd0) begin 
								out <= 'd1;
								cnt1 <= 1;
							end
							else begin
								out <= 'd0;
							end
						end
				'd1 : begin
							if (in == 'd2) begin
								out <= 'd2;
								cnt1 <= 0;
								cnt2 <= 1;
							end
							else if (in == 'd3) begin
								out <= 'd4;
								cnt1 <= 0;
							end
							else begin
								if (cnt1 == 'd3) begin
									out <= 'd0;
									cnt1 <= 0;
								end
								else begin
									cnt1 <= cnt1 + 1;
									out <= 'd1;
								end
							end
						end
				'd2 : begin
							if (cnt2 == 2) begin
								out <= 'd3;
								cnt2 <= 0;
								cnt3 <= 1;
							end
							else begin
								out <= 'd2;
								cnt2 <= cnt2 + 1;
							end							
						end
				'd3 : begin
							if (in == 'd1) begin 
								out <= 'd1;
								cnt1 <= 1;
								cnt3 <= 0;
							end
							else begin
								if (cnt3 == 3) begin
									out <= 'd0;
									cnt3 <= 0;
								end
								else begin
									out <= 'd3;
									cnt3 <= cnt3 + 1;
								end
							end
						end
				'd4 : begin
							out <= 'd4;
						end
				default : begin
								out <= 'd0;
								cnt1 <= 'd0;
								cnt2 <= 'd0;
								cnt3 <= 'd0;
							 end
			endcase						
		end
	end

endmodule
