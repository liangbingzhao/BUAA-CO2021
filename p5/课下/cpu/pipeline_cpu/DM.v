`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:37 11/21/2021 
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
`define RAM_CONTAIN_BITS 4096
`define WORD 2'd0
`define HALF_WORD 2'd1
`define BYTE 2'd2
module DM(
    input clk,
    input reset,
    input [31:0] WD,
    input WE,
    input [31:0] DMaddr,
	 
	 output reg [31:0] RD,
	 input [31:0] PC,	// p5测试需求,实际上不需要设置这个输入
	 
	 // 为了半字和字节的写入和读取
	 input [1:0] width,
	 input sign_l	// 字节和半字的load会要符号扩展
    );
	 reg [`RAM_WIDTH-1:0] RAM [`RAM_CONTAIN_BITS-1:0];
	 integer i;
	
	 initial begin
		for (i = 0; i < `RAM_CONTAIN_BITS; i = i + 1)
			RAM[i] = 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset == 1) begin
			for (i = 0; i < `RAM_CONTAIN_BITS; i = i + 1)
				RAM[i] <= 0;
		end
		else begin
			if (WE == 1) begin
				case (width)
					`WORD : begin
								RAM[DMaddr[13:2]] <= WD;
								$display("%d@%h: *%h <= %h", $time, PC, DMaddr, WD);
							  end
					`HALF_WORD : begin
										if (DMaddr[1]) begin
											RAM[DMaddr[13:2]][31:16] <= WD[15:0];
											$display("%d@%h: *%h <= %h", $time, PC, {DMaddr[31:2],2'b0}, RAM[DMaddr[13:2]]);
										end
										else begin	
											RAM[DMaddr[13:2]][15:0] <= WD[15:0];
											$display("%d@%h: *%h <= %h", $time, PC, {DMaddr[31:2],2'b0}, RAM[DMaddr[13:2]]);
										end
									end
					`BYTE : begin	
									case (DMaddr[1:0])
										'd0 : begin
													RAM[DMaddr[13:2]][7:0] <= WD[7:0];
												end
										'd1 : begin
													RAM[DMaddr[13:2]][15:8] <= WD[7:0];
												end
										'd2 : begin
													RAM[DMaddr[13:2]][23:16] <= WD[7:0];
												end
										'd3 : begin
													RAM[DMaddr[13:2]][31:24] <= WD[7:0];
												end
									endcase
									$display("%d@%h: *%h <= %h", $time, PC, {DMaddr[31:2],2'b0}, RAM[DMaddr[13:2]]);
								end
				endcase
			end
		end		
	end
	
	always @(*) begin
		case (width)
			`WORD : begin
							RD = RAM[DMaddr[13:2]];
						end
			`HALF_WORD : begin
								case (DMaddr[1])
									'd0 : RD[15:0] = RAM[DMaddr[13:2]][15:0];
									'd1 : RD[15:0] = RAM[DMaddr[13:2]][31:16];
								endcase
								case (sign_l)
									'd0 : RD[31:16] = 16'd0;
									'd1 : RD[31:16] = {16{RD[15]}};
								endcase
							 end
			`BYTE : begin
							case (DMaddr[1:0])
								'd0 : RD[7:0] = RAM[DMaddr[13:2]][7:0];
								'd1 : RD[7:0] = RAM[DMaddr[13:2]][15:8];
								'd2 : RD[7:0] = RAM[DMaddr[13:2]][23:16];
								'd3 : RD[7:0] = RAM[DMaddr[13:2]][31:24];
							endcase
							case (sign_l)
								'd0 : RD[31:8] = 24'd0;
								'd1 : RD[31:8] = {24{RD[7]}};
							endcase
						end
			default : RD = 32'd0;
		endcase
	end	

endmodule
