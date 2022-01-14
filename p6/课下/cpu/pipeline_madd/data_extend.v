`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:48:47 12/02/2021 
// Design Name: 
// Module Name:    data_extend 
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
`define LW 3'b000
`define LBU 3'b001
`define LB 3'b010
`define LHU 3'b011
`define LH 3'b100
module data_extend(
    input [31:0] DMaddr,
    input [2:0] dataop,
    input [31:0] Din,
    output reg [31:0] Dout
    );
	 
	 always @(*) begin
		case (dataop)
			`LW : begin
						Dout = Din;
					end
			`LBU : begin
						case (DMaddr[1:0])
							'd0 : begin
										Dout[7:0] = Din[7:0];
										Dout[31:8] = 0;
								   end
							'd1 : begin
										Dout[7:0] = Din[15:8];
										Dout[31:8] = 0;
								   end
							'd2 : begin
										Dout[7:0] = Din[23:16];
										Dout[31:8] = 0;
								   end
							'd3 : begin
										Dout[7:0] = Din[31:24];
										Dout[31:8] = 0;
								   end
						 endcase
					 end
			`LB : begin
						case (DMaddr[1:0])
							'd0 : begin
										Dout[7:0] = Din[7:0];
										Dout[31:8] = {24{Dout[7]}};
								   end
							'd1 : begin
										Dout[7:0] = Din[15:8];
										Dout[31:8] = {24{Dout[7]}};
								   end
							'd2 : begin
										Dout[7:0] = Din[23:16];
										Dout[31:8] = {24{Dout[7]}};
								   end
							'd3 : begin
										Dout[7:0] = Din[31:24];
										Dout[31:8] = {24{Dout[7]}};
								   end
						 endcase
					 end
			`LHU : begin
						case (DMaddr[1])
							'd0 : begin	
										Dout[15:0] = Din[15:0];
										Dout[31:16] = 0;
									end
							'd1 : begin	
										Dout[15:0] = Din[31:16];
										Dout[31:16] = 0;
									end
						endcase
					end
			`LH : begin
						case (DMaddr[1])
							'd0 : begin	
										Dout[15:0] = Din[15:0];
										Dout[31:16] = {16{Dout[15]}};
									end
							'd1 : begin	
										Dout[15:0] = Din[31:16];
										Dout[31:16] = {16{Dout[15]}};
									end
						endcase
					end
			default : Dout = 0;
		endcase
	end		


endmodule
