`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:54 11/20/2021 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input PCSrc,		// branch
    input PCj,
    input PCjr,
    input [31:0] D_PC,		// 贯彻命名风格,流水级_str
	 input [31:0] F_PC,
	 input [31:0] Regjr,
    input [25:0] instr_index,
	 output reg [31:0] NPC
    );
	 // wire [31:0] D_PC4;
	 // assign D_PC4 = D_PC +4;
	 always @(*) begin	
		if (PCSrc) begin	
			NPC = D_PC + 4 + {{14{instr_index[15]}}, instr_index[15:0], 2'b00};
		end
		else if (PCj) begin
			NPC = {D_PC[31:28], instr_index, 2'b00};		// GitHub那人用的DPC4,我先试试DPC行不行
		end
		else if (PCjr) begin
			NPC = Regjr;
		end
		else begin
			NPC = F_PC + 4;
		end
	end
endmodule