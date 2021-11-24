`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:43:51 11/13/2021 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input clk,
    input reset,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input WE,
    output [31:0] RD1,
    output [31:0] RD2,
    input [31:0] PC
    );
	 reg [31:0] RF [31:0];	// 定义寄存器
	 integer i;
	
	 initial begin
		for (i = 0; i < 32; i = i + 1)
			RF[i] = 0;
	 end
	 
	 assign RD1 = RF[A1];
	 assign RD2 = RF[A2];
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			for (i = 0; i < 32; i = i + 1)
				RF[i] <= 0;
		end
		else begin
			if (WE == 1) begin
				RF[A3] <= WD;
				RF[0] <= 0;		//为什么要加这一句啊
				$display("@%h: $%d <= %h", PC, A3, WD);
			end
		end
	end
endmodule
