`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:07 12/02/2021 
// Design Name: 
// Module Name:    MD 
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
`define MULTU 3'b000
`define MULT 3'b001
`define DIVU 3'b010
`define DIV 3'b011
`define MADD 3'b100
module MD(
    input clk,
    input reset,
    input start,
    input [31:0] A,
    input [31:0] B,
	 input [2:0] MDop,
	 input HIwrite,
	 input LOwrite,
    output Busy,
    output reg [31:0] HI,
    output reg [31:0] LO
    );
	 
	 reg [4:0] cnt;
	 reg [31:0] HItmp, LOtmp;
	 
	 always @(posedge clk) begin
		if (reset) begin
			HItmp <= 0;
			LOtmp <= 0;
			cnt <= 0;
			HI <= 0;
			LO <= 0;
		end
		else if (start) begin
			case (MDop)
				`MULTU : begin
							{HItmp, LOtmp} <= A * B;
							cnt <= 5;
						  end
				`MULT : begin
							{HItmp, LOtmp} <= $signed(A) * $signed(B);
							cnt <= 5;
						  end
				`DIVU : begin
							HItmp <= A % B;
							LOtmp <= A / B;
							cnt <= 10;
						  end
				`DIV : begin
							HItmp <= $signed(A) % $signed(B);
							LOtmp <= $signed(A) / $signed(B);
							cnt <= 10;
						 end
				`MADD : begin
							{HItmp, LOtmp} <= $signed($signed(A) * $signed(B) + $signed({HI, LO}));
//							{HItmp, LOtmp} <= {HI, LO} + $signed($signed(64'd0) + $signed(A) * $signed(B));
							cnt <= 5;
						  end
				default : begin
							 end
			endcase
		end
		else if (HIwrite) HI <= A;
		else if (LOwrite) LO <= A;
		else if (reset == 0 && start == 0 && cnt) cnt = cnt -1;
	 end
	 
	 assign Busy = (cnt != 0);
	 always @(negedge Busy) begin
		HI <= HItmp;
		LO <= LOtmp;
	 end		


endmodule
