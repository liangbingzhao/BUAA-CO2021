`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:04:01 10/21/2021 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	 initial begin
		Output = 0;
		Overflow = 0;
	 end
	 
	 always @(posedge Clk) begin
		if (Reset == 1) begin
			Output <= 0;
			Overflow <= 0;
		end
		else begin
			if (En == 1) begin
				case (Output)
					'd0 : begin
								Output <= 'd1;
							end
					'd1 : begin
								Output <= 'd3;
							end
					'd2 : begin
								Output <= 'd6;
							end
					'd3 : begin
								Output <= 'd2;
							end
					'd4 : begin
								Output <= 'd0;
								Overflow <= 1;
							end
					'd5 : begin
								Output <= 'd4;
							end
					'd6 : begin
								Output <= 'd7;
							end
					'd7 : begin
								Output <= 'd5;
							end
					default : begin
									Output <= 'd0;
									Overflow <= 0;
							    end
				endcase
			end
			else begin
			end
		end
	end

endmodule
