`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:34:56 11/14/2021 
// Design Name: 
// Module Name:    instr_splitter 
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
module instr_splitter(
    input [31:0] Instr,
    output [5:0] op,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [4:0] shamt,
    output [5:0] func,
    output [25:0] instr_index,
    output [15:0] imm
    );
	 assign op = Instr[31:26];
	 assign rs = Instr[25:21];
	 assign rt = Instr[20:16];
	 assign rd = Instr[15:11];
	 assign shamt = Instr[10:6];
	 assign func = Instr[5:0];
	 assign instr_index = Instr[25:0];
	 assign imm = Instr[15:0];
endmodule
