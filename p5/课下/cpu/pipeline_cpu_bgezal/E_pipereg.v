`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:08 11/21/2021 
// Design Name: 
// Module Name:    E_pipereg 
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
module E_pipereg(
    input clk,
    input reset,
    input en,
	 input flush,
	 
    input [31:0] D_PC,
    inout [31:0] D_instr,
    input [31:0] D_signimm,
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [4:0] D_A3,
    input [31:0] D_WD,
	 
    output reg [31:0] E_PC,
    output reg [31:0] E_instr,
    output reg [31:0] E_signimm,
    output reg [31:0] E_RD1,
    output reg [31:0] E_RD2,
    output reg [4:0] E_A3,
    output reg [31:0] E_WD
    );
	 
	 initial begin
		E_PC <= `PC_DEFAULT;
		E_instr <= 0;
		E_RD1 <= 0;
		E_RD2 <= 0;
		E_signimm <= 0;
		E_A3 <= 0;
		E_WD <= 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset || flush) begin	
			E_PC <= `PC_DEFAULT;
			E_instr <= 0;
			E_RD1 <= 0;
			E_RD2 <= 0;
			E_signimm <= 0;
			E_A3 <= 0;
			E_WD <= 0;
		end
		else if (en == 1) begin
			E_PC <= D_PC;
			E_instr <= D_instr;
			E_RD1 <= D_RD1;
			E_RD2 <= D_RD2;
			E_signimm <= D_signimm;
			E_A3 <= D_A3;
			E_WD <= D_WD;
		end
	 end
	 


endmodule
