`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:32:10 11/14/2021 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	 input clk,
	 input reset,
    output [5:0] op,
    output [5:0] func,
	 output [4:0] rt,
    input sign,
    input Branch,
    input MemWrite,
    input RegWrite,
    input MemtoReg,
    input ALUsrc,
    input RegDst,
    input [2:0] ALUControl,
    input PCj,
    input jalsave,
    input jr,
	 input BNEZALC
    );
	 wire [31:0] ScrA, ScrB, ALUResult, PC1, ReadData;
	 wire [31:0] RD2, SignImm, WD3, Instr, NPC;
	 wire [31:0] WD3_a, PC4;
	 wire [15:0] imm;
	 wire [25:0] instr_index;
	 wire [4:0] rs, rd, A3, A3_a, shamt;
	 wire Zero;
	 
	 //practice
	 wire BNEZALC1,BNEZALC_r;
	 assign BNEZALC1 = (ScrA != 0);
	 assign BNEZALC_r = BNEZALC1 & BNEZALC;
	 
	 
	 
	 ALU alu (
    .op(ALUControl), 
    .inA(ScrA), 
    .inB(ScrB), 
    .Zero(Zero), 
    .ALUResult(ALUResult)
    );
	 
	 DM dm (
    .clk(clk), 
    .reset(reset), 
    .WD(RD2), 
    .WE(MemWrite), 
    .RD(ReadData), 
    .ALUResult(ALUResult), 
    .PC(PC1)
    );
	 
	 EXT ext (
    .imm(imm), 
    .sign(sign), 
    .SignImm(SignImm)
    );
	 
	 GRF grf (
    .clk(clk), 
    .reset(reset), 
    .A1(rs), 
    .A2(rt), 
    .A3(A3), 
    .WD(WD3), 
    .WE(RegWrite || BNEZALC_r), 
    .RD1(ScrA), 
    .RD2(RD2), 
    .PC(PC1)
    );
	 
	 IM im (
    .PC(PC1), 
    .Instr(Instr)
    );
	 
	 PC pc (
    .clk(clk), 
    .reset(reset), 
    .PC_in(NPC), 
    .PC(PC1)
    );
	 
	 NPC npc (
    .PCSrc(PCSrc || BNEZALC_r), 
    .PCj(PCj), 
    .jr(jr), 
    .PC(PC1), 
    .ScrA(ScrA), 
    .NPC(NPC), 
    .PC4(PC4), 
    .instr_index(instr_index), 
    .SignImm(SignImm)
    );

	 
	 MUX2_32 WD_3 (
    .in1(WD3_a), 
    .in2(PC4), 
    .op(jalsave || BNEZALC_r), 
    .out(WD3)
    );
	 
	 MUX2_32 WD_3_1 (
    .in1(ALUResult), 
    .in2(ReadData), 
    .op(MemtoReg), 
    .out(WD3_a)
    );
	 
	 MUX2_32 generate_scrb (
    .in1(RD2), 
    .in2(SignImm), 
    .op(ALUsrc), 
    .out(ScrB)
    );
	 
	 MUX2_5 A_3_1 (
    .in1(rt), 
    .in2(rd), 
    .op(RegDst), 
    .out(A3_a)
    );
	 
	 MUX2_5 A_3 (
    .in1(A3_a), 
    .in2(5'h1f), 
    .op(jalsave || BNEZALC_r), 
    .out(A3)
    );
	 
	 beqj generate_pcsrc (
    .Branch(Branch), 
    .Zero(Zero), 
    .PCSrc(PCSrc)
    );
	 
	 instr_splitter instr_split (
    .Instr(Instr), 
    .op(op), 
    .rs(rs), 
    .rt(rt), 
    .rd(rd), 
    .shamt(shamt), 
    .func(func), 
    .instr_index(instr_index), 
    .imm(imm)
    );

endmodule
