`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:54 11/27/2021 
// Design Name: 
// Module Name:    instruction_memory 
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
module instruction_memory(
    input clk,
    input reset,
	 
	 // M流水线寄存器传进来的
	 input [31:0] M_PC,
    input [31:0] M_instr,
    input [31:0] M_WD,
    input [31:0] M_ALUResult,
	 input [4:0] M_A3,
	 
	 // 转发
	 input [31:0] M_Forward2,
	 
	 // 传给W流水线寄存器的
	 output [31:0] M_WD_W,
	 output [4:0] M_A3_W
    );
	 wire MemWrite, sign_l;
	 wire [1:0] width;
	 wire [31:0] M_RD;
	 
	 assign M_WD_W = (M_WDSel) ? M_RD : M_WD;
	 assign M_A3_W = M_A3;
	 
	 DM dm (
    .clk(clk), 
    .reset(reset), 
    .WD(M_Forward2), 
    .WE(MemWrite), 
    .DMaddr(M_ALUResult), 
    .RD(M_RD), 
    .PC(M_PC), 
    .width(width), 
    .sign_l(sign_l)
    );
	 
	 Controller ctrlm (
    .instr(M_instr), 
    .MemWrite(MemWrite), 
    .width(width), 
    .sign_l(sign_l), 
    .M_WDSel(M_WDSel)
    );
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 


endmodule
