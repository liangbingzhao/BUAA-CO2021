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
`define ADDU	4'b0000
`define SUBU	4'b0001
`define AND		4'b0010
`define OR		4'b0011
`define LUI		4'b0100
`define SLL		4'b0101	// shift left logically
`define SRL		4'b0110	// shift right logical
`define NOR		4'b0111
`define XOR		4'b1000
`define SRA		4'b1001	// shift right arithmetic
`define SLT		4'b1010	// set less than
`define SLTU	4'b1011	// set less than unsigned
module ALU(
    input [3:0] op,
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
			`SLL : begin
						ALUResult = inB << inA[4:0];
					 end
			`SRL : begin
						ALUResult = inB >> inA[4:0];
					 end
			`NOR : begin
						ALUResult = ~(inA | inB);
					 end
			`XOR : begin
						ALUResult = inA ^ inB;
					 end
			`SRA : begin
						ALUResult = $signed(inB) >>> inA[4:0];
					 end
			`SLT : begin
						ALUResult = ($signed(inA) < $signed(inB));
					 end
			`SLTU : begin
						ALUResult = (inA < inB);
					  end
			default : begin
							ALUResult = 0;
						 end
		endcase
	 end
endmodule
