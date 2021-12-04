`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:59:51 11/20/2021 
// Design Name: 
// Module Name:    PC 
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
`define PC_DEFAULT	32'h0000_3000
module PC(
    input clk,
    input reset,
    input [31:0] NPC,
    input en, 		// 阻塞用的(如果为0,就是阻塞)
    output reg [31:0] PC
    );
	 initial begin
		PC = `PC_DEFAULT;
	 end
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			PC <= `PC_DEFAULT;
		end
		else if (en) begin	
			PC <= NPC;
		end
	end


endmodule
