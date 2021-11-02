`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:38 10/21/2021 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
	 initial begin
		ext = 0;
	 end
	 always @*
		 case (EOp)
			2'b00 : begin
						  if (imm[15] == 1) begin
							  ext[31:16] = 'hffff;
							  ext[15:0] = imm;
						  end
						  else begin
							  ext[15:0] = imm;
						  end
					  end
			2'b01 : begin
						  ext[31:16] = 'd0;
						  ext[15:0] = imm;
					  end
			2'b10 : begin
						  ext[31:16] = imm;
						  ext[15:0] = 0;
					  end
			2'b11 : begin
						  ext[31:16] = 'hffff;
						  ext[17:2] = imm;
						  ext[15:0] = 0;
					  end
			default : begin
							 ext = 'd0;
						 end
		 endcase 
 

endmodule
