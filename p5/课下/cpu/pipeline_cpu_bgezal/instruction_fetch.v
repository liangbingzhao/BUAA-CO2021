`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:53 11/25/2021 
// Design Name: 
// Module Name:    instruction_fetch 
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
module instruction_fetch(
    input clk,
    input reset,
    input en,
    input [31:0] NPC,
	 
    output [31:0] F_instr,
    output [31:0] F_PC
    );
	 
	 
	 PC pc (
    .clk(clk), 
    .reset(reset), 
    .NPC(NPC), 
    .en(en), 
    .PC(F_PC)
    );
	 
	 IM im (
    .PC(F_PC), 
    .Instr(F_instr)
    );


endmodule
