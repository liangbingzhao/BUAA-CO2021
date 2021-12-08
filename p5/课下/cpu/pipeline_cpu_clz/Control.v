`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:09:03 11/21/2021 
// Design Name: 
// Module Name:    Control 
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
`include "head.v"
module Controller(
    input [31:0] instr,
	 //CMP���, �����ж�beq
	 input D_equal,
	 input D_equal_0,
	 input D_great_0,
	 
	 // Decode ctrl
    output sign,
    output PCSrc,
	 output PCj,
    output PCjr,
	 output D_WDsel,		// jal��jalr��WDҪѡ��ΪPC+8
	 output [4:0] D_A3,
	 
	 // Execute ctrl
	 output [2:0] ALUControl,
	 output ALUASel,
	 output ALUBSel,
	 output [1:0] E_WDSel,	// res or WriteDate generate on D-Stage
	
	 // Memory ctrl
	 output MemWrite,
	 output [1:0] width,
	 output sign_l,
	 output M_WDSel,
	
	 // stall signals
	 output D_rs_Tuse,
	 output D_rt_Tuse,
	 output E_rs_Tuse,
	 output E_rt_Tuse
	 // output M_rt_Tuse
	 
    );
	 //decode
	 wire [5:0] op = instr[`op],
               func = instr[`func],
					rt = instr[`rt],
					rd = instr[`rd];
	 
	 //signal
	 wire addu, subu, jal, j, beq, lw, sw, lui, ori, jalr, bne, blez, bgtz, bltz, bgez;
	 
	 assign addu = (op == `R)&&(func == `ADDU);
	 assign subu = (op == `R)&&(func == `SUBU);
	
	 assign lui = (op == `LUI);
	 assign ori = (op == `ORI);
	
	 assign lw = (op == `LW);
	 assign sw = (op == `SW);
	 assign beq = (op == `BEQ);
	
	 assign jal = (op == `JAL);
	 assign j = (op == `J);
	 assign jr = (op == `R)&&(func == `JR);
	 assign jalr = (op == `R)&&(func == `JALR);
	 
	 assign bne = (op == `BNE),
			blez = (op == `BLEZ),
			bgtz = (op == `BGTZ),
			bltz = (op == `BLTZ) && (rt == 0),
			bgez = (op == `BGEZ) && (rt == 5'b00001);
			
	 // practice
	 wire clz;
	 assign clz = (op == 6'b011100) && (func == 6'b100000);
	 
	 // D output
	 assign sign = sw || lw || beq || bne || blez || bgtz || bgez || bltz;
	 
	 assign PCSrc = (beq & D_equal) || (bne & (!D_equal)) || (blez & (!D_great_0)) || (bgtz & D_great_0) || 
						 (bltz & (!D_great_0) & (!D_equal_0)) || (bgez & (D_great_0 || D_equal_0));
	 
	 assign PCj = j || jal;
	 
	 assign PCjr = jr || jalr;
	 
	 assign D_WDsel = jal || jalr;
	 
	 // A3Ӧ��ѡ���ĸ�
	 // ���ϵ�����������漰A3, ���ǲ���D���õ�, ��ô�����������һ��, ���������ʱ��D_A3Ϊ5'bz
	 // Ȼ�������Ƕ���Ҫ�����ڸ��������ʱ��, A3����'z,�����Ҫ����
	 assign D_A3 = (jal) ? 5'd31:
						(lui || ori || lw) ? rt:
						(addu || subu || jalr || clz) ? rd:
						0;
	 
	 // E output
	 assign ALUControl = (addu || lw || sw) ? 3'b000 :
								(subu) ? 3'b001 :
								// and -> 3'b010
								(ori) ? 3'b011 :
								(lui) ? 3'b100 :
								(clz) ? 3'b101 :
								0;
	 assign ALUASel = // sll || srl || sra;
							'd0;		// p5����
	 assign ALUBSel = ori || lw || sw || lui;			//ALU��B���⼸��ָ��Ҫ�÷�����չ���imm
	 assign E_WDSel = // mflo ? 2'b11 :
						   // mfhi ? 2'b10 :		p5����
							(addu || subu || ori || lui || clz) ? 2'b01 :	// use alu data
							2'b00;	// default use jump data that generate on D-Stage
				
	 // M output
	 assign MemWrite = sw;
	 assign width = //(sb || lb || lbu) ? 2'b10 :
						 //(sh || lh || lhu) ? 2'b01 :
						 2'b00;	// default 32-bits word
	 assign sign_l = //lb || lh;
						  0;
	 assign M_WDSel =  lw;	// ��DM��RD��ΪWD
	 
	 // stall
	 
	 // D-Use: the RegRead Data is using in the Decode-Stage
	 // D-Use��˼����������ҪGRF������,����ת������
	 // RTL�������漰GRF[rs]��GRF[rt]�ľ�Ҫ���������useΪ1
	 assign D_rs_Tuse = jr || jalr || beq || bne || blez || bgtz || bltz || bgez;
	 assign D_rt_Tuse = beq || bne;
	 
	 // E-Use: the RegRead Data is using in the Exe-Stage
	 assign E_rs_Tuse = addu || subu || ori || sw || lw || clz;
	 assign E_rt_Tuse = addu || subu;
	 
	 // M-Use: the RegRead Data is useing in the Mem-Stage
	 //assign M_rt_Tuse = sw;
	 
endmodule