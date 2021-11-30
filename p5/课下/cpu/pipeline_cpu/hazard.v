`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:05 11/27/2021 
// Design Name: 
// Module Name:    hazard 
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
// 完成所有的转发和阻塞
`include "macros.v"
module hazard(
    input clk,
    input reset,
	 
	 // decode阶段会不会给后面的冲突,即地址是否相同
	 
	 // d_popereg knows which Decode to use(直接从D_instr得来)
	 input [4:0] D_A1,
	 input [4:0] D_A2,
	 
	 
	 // decode阶段产生的值,是转发的一个输入
	 input [31:0] D_RD1,
	 input [31:0] D_RD2,
	 
	 // decode阶段的AT法, is the instr of Decode-Stage using the GRF?
	 input D_rs_Tuse,
	 input D_rt_Tuse,
	 
	 // execute阶段会不会跟后面的冲突(地址的冲突)
	 
	 // input addr, 由e_pipereg传下来的
	 input [4:0] E_A1,
	 input [4:0] E_A2,
	 
	 // for forward from D_pipereg
	 input [31:0] E_RD1,
	 input [31:0] E_RD2,
	 
	 // for forward from e
	 input [4:0] E_A3,
	 input [31:0] E_WD,
	 
	 // execute Tuse, is the instr of Execute-Stage using the GRF?
	 input E_rs_Tuse,
	 input E_rt_Tuse,
	 
	 // memory 阶段 地址跟前面的要比较, 也有转发
	 // 从M_pipereg传下来的
	 input [4:0] M_A2,
	 input [31:0] M_RD2,
	 
	 //  M_pipereg stores the calculated res 	 
	 input [4:0] M_A3,
	 input [31:0] M_WD,
	 
	 // W_pipereg stored the counted vals
	 input [4:0] W_A3,
	 input [31:0] W_WD,
	 
	 // 输出转发值
	 output [31:0] D_Forward1,
	 output [31:0] D_Forward2,
	 output [31:0] E_Forward1,
	 output [31:0] E_Forward2,
	 output [31:0] M_Forward2,
	 
	 // 用于阻塞和清洗的
	 output F_en,
	 output D_pipereg_en,
	 output E_pipereg_en,
	 output E_pipereg_flush,
	 output M_pipereg_flush
    );
	 wire D_stall, E_stall;
	 // forward from GRF, because the RD1DE is directly to Execute-Stage
	 // it should be forward
	 // ???为什么要存在
	 //reg [4:0] A3_GRF;
	 //reg [31:0] WD_GRF;
	 //initial begin
	//	A3_GRF = 0;
	//	WD_GRF = 0;
	 //end
	
	 //always@(posedge clk) begin
		//if(reset) begin
	//		A3_GRF <= 0;
	//		WD_GRF <= 0;
		//end
		//else if(W_A3 != 0) begin
		//	A3_GRF <= W_A3;
		//	WD_GRF <= W_WD;
		//end
	 //end
	 
	 ///////////////////////////////////////stall///////////////////////////////////////////////
	 // StallD means Decode-Stage needs the data
	 // instr should be freezed on D-Stage and the stages before it, 
	 // nop would be instered into the D/E, which use flush
	 assign D_stall = (((D_rs_Tuse && D_A1 == E_A3 && E_A3 != 0 && E_WD === 32'bz) || 
							(D_rs_Tuse && D_A1 == M_A3 && M_A3 != 0 && M_WD === 32'bz && !(D_A1 == E_A3 && E_A3 != 0 && E_WD !== 32'bz))) ||
							((D_rt_Tuse && D_A2 == E_A3 && E_A3 != 0 && E_WD === 32'bz) ||
							(D_rt_Tuse && D_A2 == M_A3 && M_A3 != 0 && M_WD === 32'bz && !(D_A2 == E_A3 && E_A3 != 0 && E_WD !== 32'bz))))
							&& !E_stall;
	 // 这里要注意,对于stallD,如果有来自e的转发,那么就不会因为M而进行阻塞, 所以是E_WD != 32'd0
							
	 // StallE means Execute-Stage needs the data
	 // instr should be freezed on E-Stage and the stages before it, 
	 // nop would be instered into the D/E, which use flush
	 assign E_stall = (E_rs_Tuse && E_A1 == M_A3 && M_A3 != 0 && M_WD === 32'bz) ||
							(E_rt_Tuse && E_A2 == M_A3 && M_A3 != 0 && M_WD === 32'bz);
	 
	 // output
	 assign F_en = ~(D_stall || E_stall);	// 注意在en那里规定了, 当en为0时, 为阻塞; 所以这儿要取反.
	 assign D_pipereg_en = ~(D_stall || E_stall);
	 assign E_pipereg_en = ~E_stall;
	 assign E_pipereg_flush = D_stall;
	 assign M_pipereg_flush = E_stall;
	 
	 ///////////////////////////////////////Forward//////////////////////////////////////////////////////////////
	 assign D_Forward1 = (D_A1 == E_A3 && E_A3 != 0) ? E_WD :
								(D_A1 == M_A3 && M_A3 != 0) ? M_WD :
								D_RD1;
	
	 assign D_Forward2 = (D_A2 == E_A3 && E_A3 != 0) ? E_WD :
								(D_A2 == M_A3 && M_A3 != 0) ? M_WD :
								D_RD2;
								
	 assign E_Forward1 = (E_A1 == M_A3 && M_A3 != 0) ? M_WD :
								(E_A1 == W_A3 && W_A3 != 0) ? W_WD :
								//(E_A1 == A3_GRF && A3_GRF != 0) ? WD_GRF :
								E_RD1;
	 
	 assign E_Forward2 = (E_A2 == M_A3 && M_A3 != 0) ? M_WD :
								(E_A2 == W_A3 && W_A3 != 0) ? W_WD :
								//(E_A2 == A3_GRF && A3_GRF != 0) ? WD_GRF :
								E_RD2;
	 
	 
	 // ?????为什么要传下来M_A2
	 assign M_Forward2 = (M_A2 == W_A3 && W_A3 != 0) ? W_WD : M_RD2;
	 
	 
endmodule
