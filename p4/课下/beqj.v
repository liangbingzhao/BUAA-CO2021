`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:04 11/14/2021 
// Design Name: 
// Module Name:    beqj 
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
module beqj(
    input Branch,
    input Zero,
    output PCSrc
    );
	 assign PCSrc = Branch && Zero;
endmodule
