`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:41:15 11/01/2021
// Design Name:   awful_fsm
// Module Name:   E:/Verilog_tool/p1/P1_Q2/rwar.v
// Project Name:  P1_Q2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: awful_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rwar;

	// Inputs
	reg clk;
	reg [1:0] in;
	reg clr;

	// Outputs
	wire [2:0] out;

	// Instantiate the Unit Under Test (UUT)
	awful_fsm uut (
		.clk(clk), 
		.in(in), 
		.out(out), 
		.clr(clr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		in = 0;
		clr = 1;

		// Wait 100 ns for global reset to finish
		#100;
		clr = 0;
		in = 'd0;
		#10;
		in = 'd1;
		#20;
		in = 'd2;
		#50;
		in = 'd0;
		#10;
		in = 'd3;
		
        
		// Add stimulus here

	end
	
	always #5 clk = ~clk;
      
endmodule

