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
	 reg [31:0] RF [31:0];	// ����Ĵ���
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
			//	�������WE,ֻʹ��A3���ж�,ȸ�Ϻܷ�������,ԭ��:
			//	Ĭ��A3��ָ��0�Ĵ�����,ֻ�е�A3��ָ��0��,�ͱ���Ҫд��������,�Ż�д��
				RF[A3] <= WD;
				//$display("%d@%h: $%d <= %h", $time, PC, A3, WD);		// ��������
			end
		end
	end
	
	// GRF�ڲ�ת��
	assign RD1 = (A1 == A3 && A1 != 0) ? WD : RF[A1];
	assign RD2 = (A2 == A3 && A2 != 0) ? WD : RF[A2];
	
endmodule