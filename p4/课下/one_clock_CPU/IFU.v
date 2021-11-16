`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:00:55 11/13/2021 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input clk,
    input reset,
    input [31:0] PC_in,
    output [31:0] Instr,
    output [31:0] PC4,
    output [31:0] PC
    );
	 PC pc (
    .clk(clk), 
    .reset(reset), 
    .PC_in(PC_in), 
    .PC(PC)
    );
	 IM im (
    .PC(PC), 
    .Instr(Instr)
    );
	 assign PC4 = PC + 4;


endmodule
