`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:38:12 11/14/2021 
// Design Name: 
// Module Name:    MUX 
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
module MUX2_32(
    input [31:0] in1,
    input [31:0] in2,
    input op,
    output [31:0] out
    );
	 assign out = (op) ? in2 : in1;
endmodule

module MUX2_5(
	input [4:0] in1,
	input [4:0] in2,
	input op,
	output [4:0] out
	);
	assign out = (op) ? in2 : in1;
endmodule


























