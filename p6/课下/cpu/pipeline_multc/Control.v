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
	 input D_equal_0,
	 input D_great_0,
	 
	 // Decode ctrl
    output sign,
    output PCSrc,
	 output PCj,
    output PCjr,
	 output D_WDsel,		// jal和jalr的WD要选择为PC+8
	 output [4:0] D_A3,
	 output MD_yes,
	 
	 // Execute ctrl
	 output [3:0] ALUControl,
	 output ALUASel,
	 output ALUBSel,
	 output [1:0] E_WDSel,	// res or WriteDate generate on D-Stage
	 output start,
	 output [2:0] MDop,
	 output HIwrite,
	 output LOwrite,
	
	 // Memory ctrl
	 output MemWrite,
	 output [1:0] width,
	 output [2:0] dataop,
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
	 
	 // p6
	 wire lb, lbu, lh, lhu, sh, sb, add, sub, mult, multu, div, divu, sll, srl, sllv, srlv, srav;
	 wire andw, orw, xorw, norw, addi, addiu, andi, xori, slt, slti, sltiu, sltu, mfhi, mflo, mthi, mtlo;
	 
	 wire multc;
	 assign multc =(op == 6'b011010);
	 
	 assign nop= (op == `R)&(func == 0),
	
	/////// R type op and funct
			add = (op == `R) && (func == `ADD),
			sub = (op == `R) && (func == `SUB),
			
			// Bitwise
			andw = (op == `R) && (func == `AND),	// "and" is key word
			orw = (op == `R) && (func == `OR),		// "or" is key word
			xorw = (op == `R) && (func == `XOR),
			norw = (op == `R) && (func == `NOR),
			
			// shift operation
			sll = (op == `R) && (func == `SLL),
			srl = (op == `R) && (func == `SRL),
			sra = (op == `R) && (func == `SRA),
			sllv = (op == `R) && (func == `SLLV),
			srlv = (op == `R) && (func == `SRLV),
			srav = (op == `R) && (func == `SRAV),
			
			// set less than
			slt = (op == `R) && (func == `SLT),
			sltu = (op == `R) && (func == `SLTU),
			
			// mult and div
			mult = (op == `R) && (func == `MULT),
			multu = (op == `R) && (func == `MULTU),
			div = (op == `R) && (func == `DIV),
			divu = (op == `R) && (func == `DIVU),
			
			
			// HI/LO
			mfhi = (op == `R) && (func == `MFHI),
			mflo = (op == `R) && (func == `MFLO),
			mthi = (op == `R) && (func == `MTHI),
			mtlo = (op == `R) && (func == `MTLO),
			
/////// I type only the op
			
			addi = (op == `ADDI),
			addiu = (op == `ADDIU),
			
			andi = (op == `ANDI),
			xori = (op == `XORI),
			
			slti = (op == `SLTI),
			sltiu = (op == `SLTIU),


////// MEM only op
			lb = (op == `LB),
			lbu = (op == `LBU),
			lh = (op == `LH),
			lhu = (op == `LHU),
			sb = (op == `SB),
			sh = (op == `SH);	 
	 
	 
	 
	 // D output
	 assign sign = lw | lb | lbu| lh | lhu | sb | sh | sw | addi | addiu | 
						slti | sltiu | beq | bne | blez | bgtz | bgez;
	 
	 assign PCSrc = (beq & D_equal) || (bne & (!D_equal)) || (blez & (!D_great_0)) || (bgtz & D_great_0) || 
						 (bltz & (!D_great_0 & !D_equal_0)) || (bgez & (D_great_0 | D_equal_0));
	 
	 assign PCj = j || jal;
	 
	 assign PCjr = jr || jalr;
	 
	 assign D_WDsel = jal || jalr;
	 
	 assign D_A3 = (jal) ? 5'd31:									// A3应该选择哪个
						(lui | andi | ori| xori | addi | addiu |
						slti | sltiu | lw | lb | lbu | lh | lhu) ? rt:
						(addu | subu | add | sub | jalr | andw | orw | xorw | norw |
						sll | srl | sra | sllv | srlv | srav | slt | sltu | mfhi | mflo) ? rd:
						//5'bz;
						0;
	 
	 assign MD_yes = mult || multu || div || divu || mfhi || mflo || mthi || mtlo;
	 
	 
	 
	 // E output
	 assign ALUControl = (addu | addi | add | addiu)?  4'b0000 :
								(subu | sub)?	4'b0001 :
								(andi | andw)?	4'b0010 :
								(ori | orw)?	4'b0011 :
								(lui)?			4'b0100 :
								(norw)?			4'b0101 :
								(xorw | xori)?	4'b0110 :
								(sll | sllv)?	4'b0111 :
								(srl | srlv)?	4'b1000 :
								(sra | srav)?	4'b1001 :
								(slt | slti)?	4'b1010 :
								(sltu | sltiu)?	4'b1011 :
								0;	// lw, sw等load类指令
								
	 assign ALUASel =  sll || srl || sra;	// ALU的A口这几个指令用shamt位
	 
	 assign ALUBSel = andi | ori | xori | lui | lw | lb | lbu | lh | 
							lhu | sw | sb | sh |	addi | addiu |
							slti | sltiu;		//ALU的B口这几个指令要用符号扩展后的imm
							
	 assign E_WDSel = mflo ? 2'b11 :
						   mfhi ? 2'b10 :		
							(addu | subu | add | sub | andi | ori | xori | lui |	
							andw | orw | xorw | norw | sll | srl | sra | sllv | srlv | srav | 
							addi | addiu | slt | slti | sltiu | sltu) ? 2'b01 :	// 用ALUResult作为WD流水
							2'b00;	// default use jump data that generate on D-Stage
							
	 ///// MD乘除模块的控制信号		
	 assign start = mult | multu | div | divu | multc;
	 
	 assign MDop =	multu ? 3'b000 :
						(mult | multc) ? 3'b001 :
						divu ? 3'b010 :
						div ?	3'b011 :
						0;
	 	
	 assign HIwrite = mthi;
	 assign LOwrite = mtlo;				
						
						
						
	 // M output
	 assign MemWrite = sw || sh || sb;
	 assign width =	(sb || lb || lbu) ? 2'b10 :
					(sh || lh || lhu) ? 2'b01 :
					2'b00;	// default 32-bits word
						 
	 assign dataop = (lh) ? 3'b100 :
						  (lhu) ? 3'b011 :
						  (lb) ? 3'b010 :
						  (lbu) ? 3'b001 :
						  3'b000;		// 符号扩展DM输出
						  
	 assign M_WDSel = lw || lb || lbu || lh || lhu;	// 用DM的RD作为WD
	 
	 
	 
	 // stall
	 
	 // D-Use: the RegRead Data is using in the Decode-Stage
	 // D-Use意思就是我现在要GRF的输入,给我转发过来
	 // RTL里面, 在decode阶段有涉及GRF[rs]、GRF[rt]的就要搞过来设置use为1
	 assign D_rs_Tuse = jr || jalr || beq || bne || blez || bgtz || bltz || bgez;
	 assign D_rt_Tuse = beq || bne;
	 
	 // E-Use: the RegRead Data is using in the Exe-Stage
	 // RTL里面, 在execute阶段有涉及GRF[rs]、GRF[rt]的就要搞过来设置use为1
	 assign E_rs_Tuse = add | addu | sub | subu | ori | andi | xori |
							  andw | orw | xorw | norw | addi | addiu |
							  lw | lb | lbu | lh | lhu | sw | sb | sh |
							  sllv | srlv | srav | slt | slti | sltu | sltiu |
							  mult | multu | div | divu | mthi | mtlo | multc;
	 assign E_rt_Tuse = add | sub | addu | subu | orw | andw | xorw | norw |
							  sll | srl | sra | sllv | srlv | srav |
							  slt | sltu | mult | multu | div | divu | multc;
	 
	 // M-Use: the RegRead Data is useing in the Mem-Stage
	 //assign M_rt_Tuse = sw;
	 
endmodule