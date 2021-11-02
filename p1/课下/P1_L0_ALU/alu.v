`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:08:05 10/21/2021 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output reg [31:0] C
    );
	 //assign C = (ALUOp == 'b000) ? (A + B):
		//			(ALUOp == 'b001) ? (A - B):
		//			(ALUOp == 'b010) ? (A & B):
		//			(ALUOp == 'b011) ? (A | B):
		//			(ALUOp == 'b100) ? (A >> B):
		//			(ALUOp == 'b101) ? $signed($signed(A) >>> B):
		//			'd0;
	
	always @* 
		case (ALUOp)
			'd0 : begin 
						C = A + B;
					end
			'd1 : begin
						C = A - B;
					end
			'd2 : begin
						C = A & B;
					end
			'd3 : begin
						C = A | B;
					end
			'd4 : begin
						C = A >> B;
					end
			'd5 : begin
						C = $signed($signed(A) >>> B);
					end
			default : begin 
							C = 'd0;
						 end
		endcase

endmodule
