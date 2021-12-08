`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:12 11/21/2021 
// Design Name: 
// Module Name:    ALU 
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
`define ADDU	3'b000
`define SUBU	3'b001
`define AND		3'b010
`define OR		3'b011
`define LUI	   3'b100
module ALU(
    input [2:0] op,
    input [31:0] inA,
    input [31:0] inB,
    output reg [31:0] ALUResult
    );

	 always @(*) begin	
		case (op)
			`ADDU : begin
							ALUResult = inA + inB;
					  end
			`SUBU : begin
							ALUResult = inA - inB;
					  end
			`AND : begin
						ALUResult = inA & inB;
					 end						
			`OR : begin
						ALUResult = inA | inB;
					end				
			`LUI : begin
						ALUResult = {inB[15:0], 16'h0};
					 end
			default : begin
							ALUResult = 0;
						 end
		endcase
	 end
endmodule
