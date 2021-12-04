`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:01 11/21/2021 
// Design Name: 
// Module Name:    D_pipereg 
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
`define PC_DEFAULT	32'h0000_3000
module D_pipereg(
    input clk,
    input reset,
    input en,		// �����õ�
	 
	 // ��Fetch������
    input [31:0] F_PC,
    input [31:0] F_instr,
	 
	 // Ҫ����Decode��
    output reg [31:0] D_PC,
    output reg [31:0] D_instr
    );
	 
	 initial begin
		D_instr = 0;
		D_PC = `PC_DEFAULT;
	 end
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			D_PC <= `PC_DEFAULT;
			D_instr <= 0;
		end
		else if (en == 1) begin
			D_PC <= F_PC;
			D_instr <= F_instr;
		end
	end
	
endmodule
