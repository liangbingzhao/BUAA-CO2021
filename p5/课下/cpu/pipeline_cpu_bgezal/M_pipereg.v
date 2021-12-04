`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:18 11/21/2021 
// Design Name: 
// Module Name:    M_pipereg 
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
module M_pipereg(
    input clk,
    input reset,
	 input flush,

    input [31:0] E_PC,
    input [31:0] E_instr,
    input [4:0] E_A3,
    input [31:0] E_WD,
    input [31:0] E_ALUResult,
    input [31:0] E_RD2,
	 
    output reg [31:0] M_PC,
    output reg [31:0] M_instr,
    output reg [4:0] M_A3,
    output reg [31:0] M_WD,
    output reg [31:0] M_ALUResult,
    output reg [31:0] M_RD2
    );
	 initial begin
		M_PC = `PC_DEFAULT;
		M_instr = 0;
		M_A3 = 0;
		M_WD = 0;
		M_ALUResult = 0;
		M_RD2 = 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset || flush) begin
			M_PC <= `PC_DEFAULT;
			M_instr <= 0;
			M_A3 <= 0;
			M_WD <= 0;
			M_ALUResult <= 0;
			M_RD2 <= 0;
		end
		else begin
			M_PC <= E_PC;
			M_instr <= E_instr;
			M_A3 <= E_A3;
			M_WD <= E_WD;
			M_ALUResult <= E_ALUResult;
			M_RD2 <= E_RD2;
		end
	 end

endmodule
