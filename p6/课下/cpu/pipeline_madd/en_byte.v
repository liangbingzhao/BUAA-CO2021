`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:51 12/02/2021 
// Design Name: 
// Module Name:    en_byte 
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
`define WORD	2'b00
`define HALF	2'b01
`define BYTE	2'b10
module en_byte(
	 input reset,
    input [31:0] Din,
    input WE,
    input [31:0] DMaddr,
	 
	 output reg [31:0] Dout,
	 
	 // Ϊ�˰��ֺ��ֽڵ�д��Ͷ�ȡ
	 input [1:0] width,
	 output reg [3:0] m_data_byteen
    );
	 
	 initial begin
		m_data_byteen = 4'b0000;
		Dout = 0;
	 end
	 
	 always @(*) begin
		if (reset == 1) begin
			m_data_byteen = 4'b0000;
			Dout = 0;
		end
		else begin
			if (WE) begin
				case (width)
					`WORD : begin
									Dout = Din;
									m_data_byteen = 4'b1111;
							  end
					`HALF : begin
									case(DMaddr[1])
										0 : begin
												m_data_byteen = 4'b0011;
												Dout = Din;
											 end
										1 : begin
												m_data_byteen = 4'b1100; 
												Dout = Din << 16;
											 end
									endcase
							  end
					`BYTE : begin
									case(DMaddr[1:0])
										0 : begin
												m_data_byteen = 4'b0001;
												Dout = Din;
											 end
										1 : begin
												m_data_byteen = 4'b0010;
												Dout = Din << 8;
											 end
										2 : begin
												m_data_byteen = 4'b0100;
												Dout = Din << 16;
											 end
										3 : begin
												m_data_byteen = 4'b1000;
												Dout = Din << 24;
											 end
									endcase
							  end
					default : begin
									m_data_byteen = 4'b0000;
									Dout = 0;
								 end
				endcase
			end
			else begin
				m_data_byteen = 4'b0000;
				Dout = 0;
			end
		end
	end 


endmodule
