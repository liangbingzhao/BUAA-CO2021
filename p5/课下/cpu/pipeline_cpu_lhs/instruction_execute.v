`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:43:39 11/27/2021 
// Design Name: 
// Module Name:    instruction_execute 
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
module instruction_execute(
    input clk,
    input reset,
	 
	 // E��ˮ�߼Ĵ�����������
    input [31:0] E_instr,
    input [31:0] E_signimm,
    input [31:0] E_WD,
	 input [4:0] E_A3,
	 
	 // ת��
	 input [31:0] E_Forward1,
	 input [31:0] E_Forward2,
	 
	 // ����M��ˮ�߼Ĵ�����
    output [31:0] E_WD_M,
    output [31:0] E_ALUResult,
    output [31:0] E_RD2_M,
	 output [4:0] E_A3_M,
	 
	 // stall
	 output E_rs_Tuse,
	 output E_rt_Tuse
    );
	 wire [2:0] ALUControl;
	 wire ALUASel, ALUBSel;
	 wire [1:0] E_WDSel;
	 wire [31:0] inA, inB, ALUResult;
	 
	 // ALU input
	 assign inA = E_Forward1;
	 assign inB = (ALUBSel) ? E_signimm : E_Forward2;
	 
	 // output to M_pipereg
	 assign E_WD_M =  // p6
							(E_WDSel == 2'b01) ? ALUResult :
							E_WD;
	 assign E_ALUResult = ALUResult;
	 assign E_RD2_M = E_Forward2;
	 assign E_A3_M = E_A3;
	 
	 ALU alu (
    .op(ALUControl), 
    .inA(inA), 
    .inB(inB), 
    .ALUResult(ALUResult)
    );
	 
	 Controller ctrle (
    .instr(E_instr), 
    .ALUControl(ALUControl), 
    .ALUASel(ALUASel), 
    .ALUBSel(ALUBSel), 
    .E_WDSel(E_WDSel), 
    .E_rs_Tuse(E_rs_Tuse), 
    .E_rt_Tuse(E_rt_Tuse)
    );
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 


endmodule
