`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:12 11/25/2021 
// Design Name: 
// Module Name:    instruction_decode 
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
`include "macros.v"
module instruction_decode(
    input clk,
    input reset,
	 
	 // D流水线寄存器要传的
    input [31:0] D_PC,
    input [31:0] D_instr,
    input [31:0] F_PC,
	 
	 // 转发
	 input [31:0] D_Forward1,
	 input [31:0] D_Forward2,
	 
	 // W流水线寄存器传回来用来writeback的
	 input [4:0] W_A3,
	 input [31:0] W_PC,
	 input [31:0] W_WD,
	 
	 // 传给E流水线寄存器的
	 output [31:0] D_RD1,
	 output [31:0] D_RD2,
	 output [4:0] D_A3,
	 output [31:0] D_WD,
	 output [31:0] D_signimm,
	 
	 // 给fetch传下一条pc
	 output [31:0] NPC,
	 
	 // 用来判断stall的
	 output D_rs_Tuse,
	 output D_rt_Tuse	 
    );
	 
	 wire [25:0] instr_index;
	 assign instr_index = D_instr[`imm26];
	 
	 wire [15:0] imm;
	 assign imm = D_instr[`imm16];
	 
	 wire [31:0] D_PC8;
	 assign D_PC8 = D_PC + 8;
	 
	 wire [4:0] A1, A2;
	 assign A1 = D_instr[`rs];
	 assign A2 = D_instr[`rt];
	 
	 wire PCSrc, PCj, PCjr, D_equal, sign, D_WDsel, D_equal_0, D_great_0;
	 
	 // jalr和jr的向GRF存入pc+8
	 assign D_WD = (D_WDsel) ? D_PC8 : 32'bz;
	 
	 Controller ctrld (
    .instr(D_instr), 
    .D_equal(D_equal), 
	 .D_equal_0(D_equal_0),
	 .D_great_0(D_great_0),
	 
	 // decode ctrl
    .sign(sign), 
    .PCSrc(PCSrc), 
    .PCj(PCj), 
    .PCjr(PCjr), 
    .D_WDsel(D_WDsel), 
    .D_A3(D_A3), 
	 
	 // Stall
    .D_rs_Tuse(D_rs_Tuse), 
    .D_rt_Tuse(D_rt_Tuse)
    );
	 
	 
	 NPC npc (
    .PCSrc(PCSrc), 
    .PCj(PCj), 
    .PCjr(PCjr), 
    .D_PC(D_PC), 
    .F_PC(F_PC), 
    .Regjr(D_Forward1), 
    .instr_index(instr_index), 
    .NPC(NPC)
    );
	 
	 EXT ext (
    .imm(imm), 
    .sign(sign), 
    .SignImm(D_signimm)
    );
	 
	 GRF grf (
    .clk(clk), 
    .reset(reset), 
    .A1(A1), 
    .A2(A2), 
    .A3(W_A3), 
    .WD(W_WD), 
    .RD1(D_RD1), 
    .RD2(D_RD2), 
    .PC(W_PC)
    );
	 
	 CMP cmp (
    .A(D_Forward1), 
    .B(D_Forward2), 
    .D_equal(D_equal), 
    .D_equal_0(D_equal_0), 
    .D_great_0(D_great_0)
    );

	 


endmodule
