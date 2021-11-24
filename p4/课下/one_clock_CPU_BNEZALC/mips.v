`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:17 11/11/2021 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 wire sign, Branch, MemWrite, RegWrite, MemtoReg, ALUsrc, RegDst, PCj, jalsave, jr, BNEZALC;
	 wire [5:0] op, func;
	 wire [2:0] ALUControl;
	 wire [4:0] rt;
	 
	 datapath dp (
    .clk(clk), 
    .reset(reset), 
    .op(op), 
    .func(func), 
	 .rt(rt),
    .sign(sign), 
    .Branch(Branch), 
    .MemWrite(MemWrite), 
    .RegWrite(RegWrite), 
    .MemtoReg(MemtoReg), 
    .ALUsrc(ALUsrc), 
    .RegDst(RegDst), 
    .ALUControl(ALUControl), 
    .PCj(PCj), 
    .jalsave(jalsave), 
    .jr(jr),
	 .BNEZALC(BNEZALC)
    );
	 
	 Controller ctrl (
    .op(op), 
    .func(func), 
	 .rt(rt),
    .sign(sign), 
    .Branch(Branch), 
    .MemWrite(MemWrite), 
    .RegWrite(RegWrite), 
    .MemtoReg(MemtoReg), 
    .ALUsrc(ALUsrc), 
    .RegDst(RegDst), 
    .ALUControl(ALUControl), 
    .PCj(PCj), 
    .jalsave(jalsave), 
    .jr(jr),
	 .BNEZALC(BNEZALC)
    );


endmodule
