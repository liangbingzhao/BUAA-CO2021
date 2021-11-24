`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:59 11/13/2021 
// Design Name: 
// Module Name:    DM 
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
`define RAM_WIDTH 32
`define RAM_ADDR_BITS 10
module DM(
    input clk,
    input reset,
    input [31:0] WD,
    input WE,
    output [31:0] RD,
    input [31:0] ALUResult,
	 input [31:0] PC	// p4需求,实际上不需要设置这个输入
    );
	 reg [`RAM_WIDTH-1:0] RAM [(2**`RAM_ADDR_BITS)-1:0];
	 integer i;
	
	 initial begin
		for (i = 0; i < 1024; i = i + 1)
			RAM[i] = 0;
	 end
	 
	 assign RD = RAM[ALUResult[11:2]];
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			for (i = 0; i < 1024; i = i + 1)
				RAM[i] = 0;
		end
		else begin
			if (WE == 1) begin
				RAM[ALUResult[11:2]] = WD;
				$display("@%h: *%h <= %h", PC, ALUResult, WD);
			end
		end
	end
endmodule
