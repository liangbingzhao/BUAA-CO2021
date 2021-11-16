`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:29 11/13/2021 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [5:0] op,
    input [5:0] func,
    output sign,
    output Branch,
    output MemWrite,
    output RegWrite,
    output MemtoReg,
    output ALUsrc,
    output RegDst,
    output [2:0] ALUControl,
    output PCj,
    output jalsave,
    output jr
    );
	 wire addu, subu, jal, j, beq, lw, sw, lui, nop, ori;
	 
	 assign addu = (op == 6'b000000)&(func == 6'b100001);
	 assign subu = (op == 6'b000000)&(func == 6'b100011);
	
	 assign lui = (op == 6'b001111);
	 assign ori = (op == 6'b001101);
	
	 assign lw = (op == 6'b100011);
	 assign sw = (op == 6'b101011);
	 assign beq = (op == 6'b000100);
	
	 assign jal = (op == 6'b000011);
	 assign j = (op == 6'h000010);
	 assign jr = (op == 6'b000000)&(func == 6'b001000);
	 
	 assign nop= (op == 6'b000000)&(func == 6'b000000);
	 
	 assign sign = sw || lw || beq;
	 assign Branch = beq;
	 assign MemWrite = sw;
	 assign RegWrite = jal || lui || lw || ori || subu || addu;
	 assign MemtoReg = lw;
	 assign ALUsrc = lui || sw || lw || ori;
	 assign RegDst = addu || subu;
	 assign PCj = j || jal;
	 assign jalsave = jal;
	 
	 assign ALUControl = (addu || lw || sw) ? 3'b000 :
								(subu || beq) ? 3'b001 :
								// and -> 3'b010
								(ori) ? 3'b011 :
								(lui) ? 3'b100 :
								0;
endmodule
