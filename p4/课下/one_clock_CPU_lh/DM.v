`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:59 11/13/2021 
// Design Name: 
// Module Name:    DM 
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
`define RAM_WIDTH 32
`define RAM_ADDR_BITS 10
module DM(
    input clk,
    input reset,
    input [31:0] WD,
    input WE,
    output reg [31:0] RD,
    input [31:0] ALUResult,
	 input [31:0] PC,	// p4需求,实际上不需要设置这个输入
	 input lh_byte,
	 input lh
    );
	 reg [`RAM_WIDTH-1:0] RAM [(2**`RAM_ADDR_BITS)-1:0];
	 integer i;
	
	 initial begin
		for (i = 0; i < 1024; i = i + 1)
			RAM[i] = 0;

	 end
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			for (i = 0; i < 1024; i = i + 1)
				RAM[i] = 0;
		end
		else begin
			if (WE == 1) begin
				RAM[ALUResult[11:2]] = WD;
				$display("@%h: *%h <= %h", PC, ALUResult, WD);
			end
		end
	end
	
	always @(*) begin
		if(lh == 1) begin	
			case (lh_byte)
				'd0 : begin
							RD[15:0] = RAM[ALUResult[11:2]][15:0];
						end
				'd1 : begin
							RD[15:0] = RAM[ALUResult[11:2]][31:16];
						end
			endcase 
			RD[31:16] = {16{RD[15]}};
		end
	end
endmodule
