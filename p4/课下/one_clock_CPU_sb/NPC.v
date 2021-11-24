`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:49 11/14/2021 
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
    input PCSrc,
    input PCj,
    input jr,
    input [31:0] PC,
	 input [31:0] ScrA,
    output reg [31:0] NPC,
	 output [31:0] PC4,
    input [25:0] instr_index,
    input [31:0] SignImm
    );
	 // 尝试不要PC+4; 结论:还是要的
	 assign PC4 = PC +4;
	 always @(*) begin	
		if (PCSrc) begin	
			NPC = PC + 4 + {SignImm[29:0], 2'b00};
		end
		else if (PCj) begin
			NPC = {PC[31:28], instr_index, 2'b00};
		end
		else if (jr) begin
			NPC = ScrA;
		end
		else begin
			NPC = PC + 4;
		end
	end
endmodule
