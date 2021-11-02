`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:23:20 11/01/2021 
// Design Name: 
// Module Name:    qiou 
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
module qiou(
    input [31:0] in,
    output reg [31:0] out,
    input judge
    );
	 integer i;
	 reg [7:0] num;
	 integer judge1;
	 integer out_pre;
	 
	 always @* begin
		for (i = 0; i < 31; i = i + 1)
			num = num + in[i];
		judge1 = num % 2;
		if (judge1 == 1) begin
			if (judge == 1) begin
				out_pre = 0;
			end
			else begin
				out_pre = 1;
			end
		end
		else begin
			if (judge == 1) begin
				out_pre = 1;
			end
			else begin
				out_pre = 0;
			end
		end
		out <= {out_pre, in[30:0]};
	end
			
	
endmodule
