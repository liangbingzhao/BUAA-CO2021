`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:35:53 10/21/2021
// Design Name:   string
// Module Name:   E:/Verilog_tool/p1/P1_L0_expression_fsm/test.v
// Project Name:  P1_L0_expression_fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
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
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 1;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clr = 0;
		#20;
		in = "1";
		#10;
		in = "1";
		#10;
		in = "+";
		#10;
		in = "*";
		#10;
		in = "0";
		#10;
		in = "-";
		#10;
		in = "9";
		#10;
		in = "1";
		#10;
		in = "-";
		#10;
		in = "*";
		#10;
		in = "1";
		#10;
		in = "1";
        
		  
		$stop;
		// Add stimulus here

	end
      
	always #5 clk = ~clk;
endmodule

