`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:04:21 11/21/2021 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm,
    input sign,
    output reg [31:0] SignImm
    );
	 always @(*) begin
		case (sign)
			'd0 : begin
						SignImm = {16'd0, imm};
					end
			'd1 : begin
						SignImm = {{16{imm[15]}}, imm};
					end
			default : begin
							SignImm = 0;
						 end
		endcase
	 end
endmodule
