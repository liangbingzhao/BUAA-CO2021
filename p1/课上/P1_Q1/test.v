`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:45:27 11/01/2021
// Design Name:   qiou
// Module Name:   E:/Verilog_tool/p1/P1_Q1/test.v
// Project Name:  P1_Q1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: qiou
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [31:0] in;
	reg judge;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	qiou uut (
		.in(in), 
		.out(out), 
		.judge(judge)
	);

	initial begin
		// Initialize Inputs
		in = 32'h8fffffff;
		judge = 1;

		// Wait 100 ns for global reset to finish
		#100;
		judge = 0;
        
		// Add stimulus here

	end
      
endmodule

