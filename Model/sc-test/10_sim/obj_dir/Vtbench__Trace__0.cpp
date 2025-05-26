// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtbench__Syms.h"


void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer),32);
        bufp->chgBit(oldp+2,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.tbench__DOT__o_insn_vld));
        bufp->chgIData(oldp+4,(vlSelfRef.tbench__DOT__o_pc_debug),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[1]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[2]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[3]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[4]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[5]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[6]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[7]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[8]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[9]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[10]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[11]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[12]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[13]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[14]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[15]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[16]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[17]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[18]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[19]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[20]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[21]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[22]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[23]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[24]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[25]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[26]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[27]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[28]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[29]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[30]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+37,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                [0U]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                [1U]),32);
        bufp->chgCData(oldp+39,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                 [2U])),7);
        bufp->chgCData(oldp+40,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [2U] >> 8U))),7);
        bufp->chgCData(oldp+41,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [2U] >> 0x10U))),7);
        bufp->chgCData(oldp+42,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [2U] >> 0x18U))),7);
        bufp->chgCData(oldp+43,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                 [3U])),7);
        bufp->chgCData(oldp+44,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [3U] >> 8U))),7);
        bufp->chgCData(oldp+45,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [3U] >> 0x10U))),7);
        bufp->chgCData(oldp+46,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                          [3U] >> 0x18U))),7);
        bufp->chgIData(oldp+47,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                [4U]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[0]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[1]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[2]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[3]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[4]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[5]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[6]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[7]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[8]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[9]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[10]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[11]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[12]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[13]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[14]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[15]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+69,((3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                       >> 3U))),2);
        bufp->chgSData(oldp+70,(vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr),11);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+71,(vlSelfRef.tbench__DOT__dut__DOT__instr),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr),25);
        bufp->chgCData(oldp+73,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr),5);
        bufp->chgCData(oldp+74,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+75,(vlSelfRef.tbench__DOT__dut__DOT__imm_sel),3);
        bufp->chgBit(oldp+76,(vlSelfRef.tbench__DOT__dut__DOT__rd_wren));
        bufp->chgCData(oldp+77,(vlSelfRef.tbench__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+78,(vlSelfRef.tbench__DOT__dut__DOT__mem_wren));
        bufp->chgCData(oldp+79,(vlSelfRef.tbench__DOT__dut__DOT__lsu_op),2);
        bufp->chgBit(oldp+80,(vlSelfRef.tbench__DOT__dut__DOT__ld_un));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+81,(vlSelfRef.tbench__DOT__dut__DOT__br_equal));
        bufp->chgIData(oldp+82,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+84,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b),32);
        bufp->chgBit(oldp+87,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra));
        bufp->chgIData(oldp+88,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B),32);
    }
    bufp->chgBit(oldp+90,(vlSelfRef.tbench__DOT__i_clk));
    bufp->chgBit(oldp+91,(vlSelfRef.tbench__DOT__i_reset));
    bufp->chgBit(oldp+92,(vlSelfRef.tbench__DOT__dut__DOT__br_less));
    bufp->chgIData(oldp+93,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc),32);
    bufp->chgIData(oldp+94,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc_next),32);
    bufp->chgIData(oldp+95,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc)),32);
    bufp->chgIData(oldp+96,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data),32);
    bufp->chgIData(oldp+97,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                            [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr]),32);
    bufp->chgIData(oldp+98,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                            [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr]),32);
    bufp->chgIData(oldp+99,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                            [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr]),32);
    bufp->chgIData(oldp+100,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__wb_data),32);
    bufp->chgIData(oldp+101,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data),32);
    bufp->chgIData(oldp+102,((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                              ^ (- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0))))),32);
    bufp->chgBit(oldp+103,((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                            >> 0x1fU)));
    bufp->chgIData(oldp+104,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp),32);
    bufp->chgIData(oldp+105,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp),32);
    bufp->chgSData(oldp+106,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr),14);
    bufp->chgCData(oldp+107,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                       [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
                                       >> 7U))),5);
    bufp->chgCData(oldp+108,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer),5);
    bufp->chgIData(oldp+109,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer),32);
}

void Vtbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_cleanup\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
