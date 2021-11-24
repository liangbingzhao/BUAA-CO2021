`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:25:28 11/13/2021 
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
`define ROM_ADDR_BITS 10
module IM(
    input [31:0] PC,
    output [31:0] Instr
    );
	 reg [`ROM_WIDTH-1:0] ROM [(2**`ROM_ADDR_BITS)-1:0];
	 integer i;
	 initial begin
		for (i = 0; i < 2**`ROM_ADDR_BITS; i = i + 1) begin
			ROM[i] = 32'h0;
		end
		$readmemh("code.txt", ROM);
	 end
	   
	 assign Instr = ROM[PC[11:2]];	// 这里的11:2一共10位,是因为我这儿ROM设置存储1024(2的10次方)条指令,如果只存32条指令,这里便改回和logisim一样6:2
endmodule
