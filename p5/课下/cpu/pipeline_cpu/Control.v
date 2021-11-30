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
`include "macros.v"
module Controller(
    input [31:0] instr,
	 //CMP输出, 辅助判断beq
	 input D_equal,
	 
	 // Decode ctrl
    output sign,
    output PCSrc,
	 output PCj,
    output PCjr,
	 output D_WDsel,		// jal和jalr的WD要选择为PC+8
	 output [4:0] D_A3,
	 
	 // Execute ctrl
	 output [3:0] ALUControl,
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
	 wire addu, subu, jal, j, beq, lw, sw, lui, ori, jalr;
	 
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
	 
	 // D output
	 assign sign = sw || lw || beq;
	 
	 assign PCSrc = (beq & D_equal);
	 
	 assign PCj = j || jal;
	 
	 assign PCjr = jr || jalr;
	 
	 assign D_WDsel = jal || jalr;
	 
	 // A3应该选择哪个
	 assign D_A3 = (jal) ? 5'd31:
						(lui || ori || lw) ? rt:
						(addu || subu || jalr) ? rd:
						0;
	 
	 // E output
	 assign ALUControl = (addu || lw || sw) ? 4'b0000 :
								(subu || beq) ? 4'b0001 :
								// and -> 3'b010
								(ori) ? 4'b0011 :
								(lui) ? 4'b0100 :
								0;
	 assign ALUASel = // sll || srl || sra;
							'd0;		// p5不用
	 assign ALUBSel = ori || lw || sw || lui;			//ALU的B口这几个指令要用符号扩展后的imm
	 assign E_WDSel = // mflo ? 2'b11 :
						   // mfhi ? 2'b10 :		p5不用
							(addu || subu || ori || lui) ? 2'b01 :	// use alu data
							2'b00;	// default use jump data that generate on D-Stage
				
	 // M output
	 assign MemWrite = sw;
	 assign width = //(sb || lb || lbu) ? 2'b10 :
						 //(sh || lh || lhu) ? 2'b01 :
						 2'b00;	// default 32-bits word
	 assign sign_l = //lb || lh;
						  0;
	 assign M_WDSel =  lw;	// 用DM的RD作为WD
	 
	 // stall
	 
	 // D-Use: the RegRead Data is using in the Decode-Stage
	 // D-Use意思就是我现在要GRF的输入,给我转发过来
	 assign D_rs_Tuse = jr || jalr || beq;
	 assign D_rt_Tuse = beq;
	 
	 // E-Use: the RegRead Data is using in the Exe-Stage
	 assign E_rs_Tuse = addu || subu || ori || sw || lw;
	 assign E_rt_Tuse = addu || subu;
	 
	 // M-Use: the RegRead Data is useing in the Mem-Stage
	 //assign M_rt_Tuse = sw;
	 
endmodule