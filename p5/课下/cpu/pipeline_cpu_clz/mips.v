`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:42 11/20/2021 
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
`include "head.v"
module mips(
    input clk,
    input reset
    );
	 
	 // stall & forward
	 wire [31:0] D_Forward1, D_Forward2, E_Forward1, E_Forward2, M_Forward2;
	 wire F_en, D_pipereg_en, E_pipereg_en, E_pipereg_flush, M_pipereg_flush;
	 wire D_rs_Tuse, D_rt_Tuse, E_rs_Tuse, E_rt_Tuse;
	 
	 // 流水线上流动的PC和instr
	 wire [31:0] NPC, F_PC, D_PC, E_PC, M_PC, W_PC, F_instr, D_instr, E_instr, M_instr, W_instr;
	 wire [31:0] D_signimm, E_signimm;
	 
	 // 流水线上其他值
	 wire [31:0] W_WD, D_WD, E_WD, E_WD_M, M_WD, M_WD_W;
	 wire [4:0] W_A3, D_A3, E_A3, M_A3, E_A3_M, M_A3_W;
	 wire [31:0] D_RD1, D_RD2, E_RD1, E_RD2, E_RD2_M, M_RD2;
	 wire [31:0] E_ALUResult, M_ALUResult;
	 
	 
	 
	 
	 ////////////////////////Fetch/////////////////////////////////////////////
	 instruction_fetch fetch (
    .clk(clk), 
    .reset(reset), 
    .en(F_en), 
    .NPC(NPC), 
    .F_instr(F_instr), 
    .F_PC(F_PC)
    );
	 
	 /////////////////////////D流水线寄存器///////////////////////////////////////
	 D_pipereg d_pipereg (
    .clk(clk), 
    .reset(reset), 
    .en(D_pipereg_en), 
    .F_PC(F_PC), 
    .F_instr(F_instr), 
    .D_PC(D_PC), 
    .D_instr(D_instr)
    );
	 
	 //////////////////////Decode/////////////////////////////////////////////
	 instruction_decode decode (
    .clk(clk), 
    .reset(reset), 
    .D_PC(D_PC), 
    .D_instr(D_instr), 
    .F_PC(F_PC), 
    .D_Forward1(D_Forward1), 
    .D_Forward2(D_Forward2), 
    .W_A3(W_A3), 
    .W_PC(W_PC), 
    .W_WD(W_WD), 
    .D_RD1(D_RD1), 
    .D_RD2(D_RD2), 
    .D_A3(D_A3), 
    .D_WD(D_WD), 
    .D_signimm(D_signimm), 
    .NPC(NPC), 
    .D_rs_Tuse(D_rs_Tuse), 
    .D_rt_Tuse(D_rt_Tuse)
    );
	 
	 /////////////////////E流水线寄存器//////////////////////////////////////////
	 E_pipereg e_pipereg (
    .clk(clk), 
    .reset(reset), 
    .en(E_pipereg_en), 
    .flush(E_pipereg_flush), 
    .D_PC(D_PC), 
    .D_instr(D_instr), 
    .D_signimm(D_signimm), 
    .D_RD1(D_RD1), 
    .D_RD2(D_RD2), 
    .D_A3(D_A3), 
    .D_WD(D_WD), 
    .E_PC(E_PC), 
    .E_instr(E_instr), 
    .E_signimm(E_signimm), 
    .E_RD1(E_RD1), 
    .E_RD2(E_RD2), 
    .E_A3(E_A3), 
    .E_WD(E_WD)
    );
	 
	 ///////////////////////Execute///////////////////////////////////////////
	 instruction_execute execute (
    .clk(clk), 
    .reset(reset), 
    .E_instr(E_instr), 
    .E_signimm(E_signimm), 
    .E_WD(E_WD), 
	 .E_A3(E_A3),
    .E_Forward1(E_Forward1), 
    .E_Forward2(E_Forward2), 
    .E_WD_M(E_WD_M), 
    .E_ALUResult(E_ALUResult), 
    .E_RD2_M(E_RD2_M), 
	 .E_A3_M(E_A3_M),
    .E_rs_Tuse(E_rs_Tuse), 
    .E_rt_Tuse(E_rt_Tuse)
    );
	 
	 ////////////////////M流水线寄存器///////////////////////////////////////
	 M_pipereg m_pipereg (
    .clk(clk), 
    .reset(reset), 
    .flush(M_pipereg_flush), 
    .E_PC(E_PC), 
    .E_instr(E_instr), 
    .E_A3(E_A3_M), 
    .E_WD(E_WD_M), 
    .E_ALUResult(E_ALUResult), 
    .E_RD2(E_RD2_M), 
    .M_PC(M_PC), 
    .M_instr(M_instr), 
    .M_A3(M_A3), 
    .M_WD(M_WD), 
    .M_ALUResult(M_ALUResult), 
    .M_RD2(M_RD2)
    );
	 
	 //////////////////////////Memory////////////////////////////////////
	 instruction_memory memory (
    .clk(clk), 
    .reset(reset), 
    .M_PC(M_PC), 
    .M_instr(M_instr), 
    .M_WD(M_WD), 
    .M_ALUResult(M_ALUResult), 
	 .M_A3(M_A3),
    .M_Forward2(M_Forward2), 
    .M_WD_W(M_WD_W),
	 .M_A3_W(M_A3_W)
    );
	 
	 //////////////////////////W流水线寄存器///////////////////////////////
	 W_pipereg w_pipereg (
    .clk(clk), 
    .reset(reset), 
    .M_PC(M_PC), 
    .M_instr(M_instr), 
    .M_A3(M_A3_W), 
    .M_WD(M_WD_W), 
    .W_PC(W_PC), 
    .W_instr(W_instr), 
    .W_A3(W_A3), 
    .W_WD(W_WD)
    );
	 
	 /////////////////////////hazard////////////////////////////////////	 
	 hazard hd (
    .clk(clk), 
    .reset(reset), 
	 
	 // D流水线寄存器
    .D_A1(D_instr[`rs]), 
    .D_A2(D_instr[`rt]), 
	 
	 // decode
    .D_RD1(D_RD1), 
    .D_RD2(D_RD2), 
    .D_rs_Tuse(D_rs_Tuse), 
    .D_rt_Tuse(D_rt_Tuse), 
	 
	 // E流水线寄存器
    .E_A1(E_instr[`rs]), 
    .E_A2(E_instr[`rt]), 
    .E_RD1(E_RD1), 
    .E_RD2(E_RD2), 
    .E_A3(E_A3), 
    .E_WD(E_WD), 
	 
	 // execute
    .E_rs_Tuse(E_rs_Tuse), 
    .E_rt_Tuse(E_rt_Tuse), 
	 
	 // M流水线寄存器
    .M_A2(M_instr[`rt]), 
    .M_RD2(M_RD2), 
    .M_A3(M_A3), 
    .M_WD(M_WD), 
	 
	 // W流水线寄存器
    .W_A3(W_A3), 
    .W_WD(W_WD), 
	 
	 // 转发
    .D_Forward1(D_Forward1), 
    .D_Forward2(D_Forward2), 
    .E_Forward1(E_Forward1), 
    .E_Forward2(E_Forward2), 
    .M_Forward2(M_Forward2), 
	 
	 //阻塞
    .F_en(F_en), 
    .D_pipereg_en(D_pipereg_en), 
    .E_pipereg_en(E_pipereg_en), 
    .E_pipereg_flush(E_pipereg_flush), 
    .M_pipereg_flush(M_pipereg_flush)
    );
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 


endmodule
