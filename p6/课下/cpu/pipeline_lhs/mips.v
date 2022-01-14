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
`include "macros.v"
module mips(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,		// i_inst_addr ¶ÔÓ¦µÄ 32 Î»Ö¸Áî  ------------->  IM
    input [31:0] m_data_rdata,		// m_data_addr ¶ÔÓ¦µÄ 32 Î»Êý¾Ý ---------------------> DM
    output [31:0] i_inst_addr,		// ÐèÒª½øÐÐÈ¡Ö¸²Ù×÷µÄÁ÷Ë®¼¶ PC£¨Ò»°ãÎª F ¼¶£© -----> IM
    output [31:0] m_data_addr,		// Êý¾Ý´æ´¢Æ÷´ýÐ´ÈëµØÖ· ---------------> DM
    output [31:0] m_data_wdata,		// Êý¾Ý´æ´¢Æ÷´ýÐ´ÈëÊý¾Ý ---------------------> DM
    output [3 :0] m_data_byteen,		// ×Ö½ÚÊ¹ÄÜÐÅºÅ -------------------------------> DM
    output [31:0] m_inst_addr,		// M ¼¶ PC ----------------------------------> DM
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);
	 
	 // stall & forward
	 wire [31:0] D_Forward1, D_Forward2, E_Forward1, E_Forward2, M_Forward2;
	 wire F_en, D_pipereg_en, E_pipereg_en, E_pipereg_flush, M_pipereg_flush;
	 wire D_rs_Tuse, D_rt_Tuse, E_rs_Tuse, E_rt_Tuse, MD_yes, Busy, start;
	 
	 
	 // ï¿½ï¿½Ë®ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½PCï¿½ï¿½instr
	 wire [31:0] NPC,  D_PC, E_PC, M_PC, W_PC, D_instr, E_instr, M_instr, W_instr, F_PC, F_instr;
	 wire [31:0] D_signimm, E_signimm;
	 
	 // ï¿½ï¿½Ë®ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Öµ
	 wire [31:0] W_WD, D_WD, E_WD, E_WD_M, M_WD, M_WD_W;
	 wire [4:0] W_A3, D_A3, E_A3, M_A3, E_A3_M, M_A3_W;
	 wire [31:0] D_RD1, D_RD2, E_RD1, E_RD2, E_RD2_M, M_RD2, M_RD;
	 wire [31:0] E_ALUResult, M_ALUResult;
	 
	 
	 
	 
	 ////////////////////////Fetch/////////////////////////////////////////////
	 PC pc (
    .clk(clk), 
    .reset(reset), 
    .NPC(NPC), 
    .en(F_en), 
    .PC(F_PC)
    );
	 
	 assign i_inst_addr = F_PC;
	 
	 /////////////////////////Dï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½///////////////////////////////////////
	 D_pipereg d_pipereg (
    .clk(clk), 
    .reset(reset), 
    .en(D_pipereg_en), 
    .F_PC(F_PC), 
    .F_instr(i_inst_rdata), 
    .D_PC(D_PC), 
    .D_instr(D_instr)
    );
	 
	 //assign F_instr = i_inst_rdata;
	 
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
	 .MD_yes(MD_yes),
    .D_rs_Tuse(D_rs_Tuse), 
    .D_rt_Tuse(D_rt_Tuse),
    .w_grf_we(w_grf_we),
    .w_grf_addr(w_grf_addr),
    .w_grf_wdata(w_grf_wdata),
    .w_inst_addr(w_inst_addr)
    );
	 
	 /////////////////////Eï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½//////////////////////////////////////////
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
	 .start(start),
	 .Busy(Busy),
    .E_rs_Tuse(E_rs_Tuse), 
    .E_rt_Tuse(E_rt_Tuse)
    );
	 
	 ////////////////////Mï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½///////////////////////////////////////
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
    .M_A3(M_A3),
    .M_WD(M_WD), 
    .M_ALUResult(M_ALUResult), 
    .M_Forward2(M_Forward2), 
    .M_A3_W(M_A3_W),
    .M_WD_W(M_WD_W),
	.m_data_rdata(m_data_rdata),
    .m_inst_addr(m_inst_addr),
    .m_data_addr(m_data_addr),
    .m_data_wdata(m_data_wdata),
    .m_data_byteen(m_data_byteen)
    );
	 
	 //////////////////////////Wï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½///////////////////////////////
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
	 
	 // Dï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½
    .D_A1(D_instr[`rs]), 
    .D_A2(D_instr[`rt]), 
	 
	 // decode
    .D_RD1(D_RD1), 
    .D_RD2(D_RD2), 
    .D_rs_Tuse(D_rs_Tuse), 
    .D_rt_Tuse(D_rt_Tuse), 
	 .MD_yes(MD_yes),
	 
	 // Eï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½
    .E_A1(E_instr[`rs]), 
    .E_A2(E_instr[`rt]), 
    .E_RD1(E_RD1), 
    .E_RD2(E_RD2), 
    .E_A3(E_A3), 
    .E_WD(E_WD), 
	 
	 // execute
	 .start(start),
	 .Busy(Busy),
    .E_rs_Tuse(E_rs_Tuse), 
    .E_rt_Tuse(E_rt_Tuse), 
	 
	 // Mï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½
    .M_A2(M_instr[`rt]), 
    .M_RD2(M_RD2), 
    .M_A3(M_A3), 
    .M_WD(M_WD), 
	 
	 // Wï¿½ï¿½Ë®ï¿½ß¼Ä´ï¿½ï¿½ï¿½
    .W_A3(W_A3), 
    .W_WD(W_WD), 
	 
	 // ×ªï¿½ï¿½
    .D_Forward1(D_Forward1), 
    .D_Forward2(D_Forward2), 
    .E_Forward1(E_Forward1), 
    .E_Forward2(E_Forward2), 
    .M_Forward2(M_Forward2), 
	 
	 //ï¿½ï¿½ï¿½ï¿½
    .F_en(F_en), 
    .D_pipereg_en(D_pipereg_en), 
    .E_pipereg_en(E_pipereg_en), 
    .E_pipereg_flush(E_pipereg_flush), 
    .M_pipereg_flush(M_pipereg_flush)
    );
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 


endmodule
