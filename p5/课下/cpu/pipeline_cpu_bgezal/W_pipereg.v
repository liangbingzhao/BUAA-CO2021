`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:43 11/21/2021 
// Design Name: 
// Module Name:    W_pipereg 
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
`define PC_DEFAULT	32'h0000_3000
module W_pipereg(
	 input clk,
	 input reset,
	 
	 input [31:0] M_PC,
	 input [31:0] M_instr,
	 input [4:0] M_A3,
	 input [31:0] M_WD,
	 
	 output reg [31:0] W_PC,
	 output reg [31:0] W_instr,
	 output reg [4:0] W_A3,
	 output reg [31:0] W_WD
    );
	 
	 initial begin
		W_PC <= `PC_DEFAULT;
		W_instr <= 0;
		W_A3 <= 0;
		W_WD <= 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			W_PC <= `PC_DEFAULT;
			W_instr <= 0;
			W_A3 <= 0;
			W_WD <= 0;
		end
		else begin
			W_PC <= M_PC;
			W_instr <= M_instr;
			W_A3 <= M_A3;
			W_WD <= M_WD;
		end
	 end
	 

endmodule
