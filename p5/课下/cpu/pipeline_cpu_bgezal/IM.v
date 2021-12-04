`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:46 11/20/2021 
// Design Name: 
// Module Name:    IM 
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
`define ROM_WIDTH 32
`define ROM_ADDR_BITS 12
`define PC_DEFAULT	32'h0000_3000
module IM(
    input [31:0] PC,
    output [31:0] Instr
    );
	 reg [`ROM_WIDTH-1:0] ROM [(2**`ROM_ADDR_BITS)-1:0];
	 integer i;
	 wire [31:0] addr;
	 assign addr = PC - `PC_DEFAULT;
	 initial begin
		for (i = 0; i < 2**`ROM_ADDR_BITS; i = i + 1) begin
			ROM[i] = 32'h0;
		end
		$readmemh("code.txt", ROM);
	 end
	    
	 assign Instr = ROM[addr[13:2]];	
endmodule