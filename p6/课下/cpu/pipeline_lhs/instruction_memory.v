module instruction_memory(
    input clk,
    input reset,
	
    input [31:0] M_PC,
    input [31:0] M_instr,
	
	input [4:0] M_A3,
    input [31:0] M_WD,	
	input [31:0] M_ALUResult,
    input [31:0] M_Forward2,
	
	
	output [4:0] M_A3_W,
    output [31:0] M_WD_W,
    input [31:0] m_data_rdata,
	output [31:0] m_inst_addr,
	output [31:0] m_data_addr,  
    output [31:0] m_data_wdata,
    output [3:0] m_data_byteen
    );

    wire [2:0] dataop;
    wire [1:0] width;
    wire MemWrite, M_WDSel;
    wire [31:0] M_RD;

     assign m_inst_addr = M_PC;
	 assign m_data_addr = M_ALUResult;

     assign M_WD_W = (M_WDSel) ? M_RD : M_WD;
	 assign M_A3_W = (lhs & (!A3_lhs)) ? 0 :
						  M_A3;	// ��ָ������ʱ��, �������A3��DM������� ��ô���������z�Ƚ�
	 
	 wire lhs, A3_lhs;
	 assign lhs = (op == 6'b011011);
	 assign A3_lhs = lhs & ((M_ALUResult[1:0]==0) || (M_ALUResult[1:0]==2));
    
	 Controller ctrlm (
    .instr(M_instr), 
    .MemWrite(MemWrite),
	 .width(width),
	 .dataop(dataop),
    .M_WDSel(M_WDSel)
    );
	 
	 // storeϵ���õ�
	 en_byte en_byte (
    .reset(reset), 
    .Din(M_Forward2), 
    .WE(MemWrite), 
    .DMaddr(M_ALUResult), 
    .Dout(m_data_wdata), 
    .width(width), 
    .m_data_byteen(m_data_byteen)
    );
	 
	 // load���õ�
	 data_extend de (
    .DMaddr(M_ALUResult), 
    .dataop(dataop), 
    .Din(m_data_rdata), 
    .Dout(M_RD)
    );
endmodule 
	 