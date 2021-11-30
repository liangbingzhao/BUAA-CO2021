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
// ������е�ת��������
`include "macros.v"
module hazard(
    input clk,
    input reset,
	 
	 // decode�׶λ᲻�������ĳ�ͻ,����ַ�Ƿ���ͬ
	 
	 // d_popereg knows which Decode to use(ֱ�Ӵ�D_instr����)
	 input [4:0] D_A1,
	 input [4:0] D_A2,
	 
	 
	 // decode�׶β�����ֵ,��ת����һ������
	 input [31:0] D_RD1,
	 input [31:0] D_RD2,
	 
	 // decode�׶ε�AT��, is the instr of Decode-Stage using the GRF?
	 input D_rs_Tuse,
	 input D_rt_Tuse,
	 
	 // execute�׶λ᲻�������ĳ�ͻ(��ַ�ĳ�ͻ)
	 
	 // input addr, ��e_pipereg��������
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
	 
	 // memory �׶� ��ַ��ǰ���Ҫ�Ƚ�, Ҳ��ת��
	 // ��M_pipereg��������
	 input [4:0] M_A2,
	 input [31:0] M_RD2,
	 
	 //  M_pipereg stores the calculated res 	 
	 input [4:0] M_A3,
	 input [31:0] M_WD,
	 
	 // W_pipereg stored the counted vals
	 input [4:0] W_A3,
	 input [31:0] W_WD,
	 
	 // ���ת��ֵ
	 output [31:0] D_Forward1,
	 output [31:0] D_Forward2,
	 output [31:0] E_Forward1,
	 output [31:0] E_Forward2,
	 output [31:0] M_Forward2,
	 
	 // ������������ϴ��
	 output F_en,
	 output D_pipereg_en,
	 output E_pipereg_en,
	 output E_pipereg_flush,
	 output M_pipereg_flush
    );
	 wire D_stall, E_stall;
	 // forward from GRF, because the RD1DE is directly to Execute-Stage
	 // it should be forward
	 // ???ΪʲôҪ����
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
	 // ����Ҫע��,����stallD,���������e��ת��,��ô�Ͳ�����ΪM����������, ������E_WD != 32'd0
							
	 // StallE means Execute-Stage needs the data
	 // instr should be freezed on E-Stage and the stages before it, 
	 // nop would be instered into the D/E, which use flush
	 assign E_stall = (E_rs_Tuse && E_A1 == M_A3 && M_A3 != 0 && M_WD === 32'bz) ||
							(E_rt_Tuse && E_A2 == M_A3 && M_A3 != 0 && M_WD === 32'bz);
	 
	 // output
	 assign F_en = ~(D_stall || E_stall);	// ע����en����涨��, ��enΪ0ʱ, Ϊ����; �������Ҫȡ��.
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
	 
	 
	 // ?????ΪʲôҪ������M_A2
	 assign M_Forward2 = (M_A2 == W_A3 && W_A3 != 0) ? W_WD : M_RD2;
	 
	 
endmodule
