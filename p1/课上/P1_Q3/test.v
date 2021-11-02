`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:58:51 11/02/2021
// Design Name:   pipei_fsm
// Module Name:   E:/Verilog_tool/p1/P1_Q3/test.v
// Project Name:  P1_Q3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipei_fsm
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
	reg [7:0] in;
	reg clk;
	reg clr;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	pipei_fsm uut (
		.in(in), 
		.clk(clk), 
		.clr(clr), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		clr = 1;

		// Wait 100 ns for global reset to finish
		#100;
		clr = 0;
		in = " ";
		#10 in = " ";
		#10 in = "+";
		#10 in = " ";
		#10 in = "0";
		#10 in = "=";
		#10 in = "c";
		#10 in = "/";
		#10 in = "A";
		#10 in = "=";
		
        
		// Add stimulus here
		
	end
	always #5 clk = ~clk;
endmodule

