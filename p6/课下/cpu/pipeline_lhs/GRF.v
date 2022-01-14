`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:15 11/20/2021 
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
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			for (i = 0; i < 32; i = i + 1)
				RF[i] <= 0;
		end
		else begin
			if (A3 != 0) begin
			//	这里放弃WE,只使用A3来判断,雀氏很方便来着,原理:
			//	默认A3是指向0寄存器的,只有当A3不指向0了,就表明要写入数据了,才会写入
				RF[A3] <= WD;
				//$display("%d@%h: $%d <= %h", $time, PC, A3, WD);		// 测试需求
			end
		end
	end
	
	// GRF内部转发
	assign RD1 = (A1 == A3 && A1 != 0) ? WD : RF[A1];
	assign RD2 = (A2 == A3 && A2 != 0) ? WD : RF[A2];
	
endmodule