`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:04 11/21/2021 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	 input [31:0] A,
	 input [31:0] B,
	 output D_equal,
	 output D_equal_0,	// 等于0
	 output D_great_0		// 大于0。   淦, 以为后两个不用加的, 结果p6还是要加的, 555555555555
    );
	 assign D_equal = (A == B);
	 assign D_equal_0 = (A == 0);
	 assign D_great_0 = (~A[31]) & (!D_equal_0);		// 妙的哦, 只用看最高位的哦
endmodule
