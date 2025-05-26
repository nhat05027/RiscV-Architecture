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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren));
        bufp->chgCData(oldp+1,(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel),2);
        bufp->chgCData(oldp+2,(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr),5);
        bufp->chgBit(oldp+3,(vlSelfRef.tbench__DOT__dut__DOT__wb_mem_read));
        bufp->chgIData(oldp+4,(vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data),32);
        bufp->chgBit(oldp+6,(vlSelfRef.tbench__DOT__dut__DOT__temp_rd_wren));
        bufp->chgCData(oldp+7,(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr),5);
        bufp->chgIData(oldp+8,(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_data),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+9,(vlSelfRef.tbench__DOT__o_pc_debug),32);
        bufp->chgBit(oldp+10,(vlSelfRef.tbench__DOT__o_insn_vld));
        bufp->chgBit(oldp+11,(vlSelfRef.tbench__DOT__o_mispred));
        bufp->chgBit(oldp+12,(vlSelfRef.tbench__DOT__o_ctrl));
        bufp->chgIData(oldp+13,(vlSelfRef.tbench__DOT__dut__DOT__if_instr),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+15,(vlSelfRef.tbench__DOT__dut__DOT__id_imm),32);
        bufp->chgCData(oldp+16,(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel),3);
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+21,((0xfU & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                         [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                         >> 6U))),4);
        bufp->chgBit(oldp+22,((1U & ((~ (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                         [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                         >> 0x11U)) 
                                     & ((~ (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                            >> 0x10U)) 
                                        & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                           [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                           >> 0xfU))))));
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 5U))));
        bufp->chgCData(oldp+24,((3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+25,((1U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                               [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])));
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                     [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                     >> 0xeU))));
        bufp->chgCData(oldp+27,((3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                       >> 3U))),2);
        bufp->chgSData(oldp+28,(vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+29,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem
                                [(0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem
                                [(0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tbench__DOT__dut__DOT__id_instr),32);
        bufp->chgCData(oldp+32,((7U & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+34,(vlSelfRef.tbench__DOT__dut__DOT__operand_b),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tbench__DOT__dut__DOT__ex_imm),32);
        bufp->chgBit(oldp+38,(vlSelfRef.tbench__DOT__dut__DOT__ex_br_un));
        bufp->chgBit(oldp+39,(vlSelfRef.tbench__DOT__dut__DOT__ex_opa_sel));
        bufp->chgBit(oldp+40,(vlSelfRef.tbench__DOT__dut__DOT__ex_opb_sel));
        bufp->chgCData(oldp+41,(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op),4);
        bufp->chgCData(oldp+42,(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type),3);
        bufp->chgCData(oldp+43,(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_a),2);
        bufp->chgCData(oldp+44,(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_b),2);
        bufp->chgCData(oldp+45,(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr),5);
        bufp->chgCData(oldp+46,(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr),5);
        bufp->chgBit(oldp+47,(vlSelfRef.tbench__DOT__dut__DOT__ex_mem_wren));
        bufp->chgCData(oldp+48,(vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op),2);
        bufp->chgBit(oldp+49,(vlSelfRef.tbench__DOT__dut__DOT__ex_ld_un));
        bufp->chgBit(oldp+50,(vlSelfRef.tbench__DOT__dut__DOT__ex_rd_wren));
        bufp->chgCData(oldp+51,(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel),2);
        bufp->chgCData(oldp+52,(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr),5);
        bufp->chgBit(oldp+53,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel)))))));
        bufp->chgIData(oldp+54,(vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tbench__DOT__dut__DOT__mem_alu_pc_data),32);
        bufp->chgBit(oldp+58,(vlSelfRef.tbench__DOT__dut__DOT__mem_mem_wren));
        bufp->chgCData(oldp+59,(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op),2);
        bufp->chgBit(oldp+60,(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un));
        bufp->chgBit(oldp+61,(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren));
        bufp->chgCData(oldp+62,(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel),2);
        bufp->chgCData(oldp+63,(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr),5);
        bufp->chgBit(oldp+64,(vlSelfRef.tbench__DOT__dut__DOT__mem_mem_read));
        bufp->chgIData(oldp+65,(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_data),32);
        bufp->chgBit(oldp+66,(vlSelfRef.tbench__DOT__dut__DOT__mem_branch_taken));
        bufp->chgBit(oldp+67,(vlSelfRef.tbench__DOT__dut__DOT__id_branch_taken));
        bufp->chgBit(oldp+68,(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_taken));
        bufp->chgIData(oldp+69,(vlSelfRef.tbench__DOT__dut__DOT__fw_a),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tbench__DOT__dut__DOT__fw_b),32);
        bufp->chgIData(oldp+71,((vlSelfRef.tbench__DOT__dut__DOT__operand_b 
                                 ^ (- (IData)((1U & 
                                               ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op) 
                                                >> 3U)))))),32);
        bufp->chgBit(oldp+72,((0xffffffffU == (~ vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B))));
        bufp->chgIData(oldp+73,(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B),32);
        bufp->chgIData(oldp+75,((vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+78,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[1]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[2]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[3]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[4]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[5]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[6]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[7]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[8]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[9]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[10]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[11]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[12]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[13]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[14]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[15]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[16]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[17]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[18]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[19]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[20]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[21]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[22]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[23]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[24]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[25]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[26]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[27]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[28]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[29]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[30]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgDouble(oldp+110,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle));
        bufp->chgDouble(oldp+112,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn));
        bufp->chgDouble(oldp+114,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl));
        bufp->chgDouble(oldp+116,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+118,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                 [0U]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                 [1U]),32);
        bufp->chgCData(oldp+120,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                  [2U])),7);
        bufp->chgCData(oldp+121,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [2U] >> 8U))),7);
        bufp->chgCData(oldp+122,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [2U] >> 0x10U))),7);
        bufp->chgCData(oldp+123,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [2U] >> 0x18U))),7);
        bufp->chgCData(oldp+124,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                  [3U])),7);
        bufp->chgCData(oldp+125,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [3U] >> 8U))),7);
        bufp->chgCData(oldp+126,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [3U] >> 0x10U))),7);
        bufp->chgCData(oldp+127,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                           [3U] >> 0x18U))),7);
        bufp->chgIData(oldp+128,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                 [4U]),32);
        bufp->chgBit(oldp+129,(vlSelfRef.tbench__DOT__dut__DOT__pc_stall));
        bufp->chgIData(oldp+130,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__if_pc)),32);
        bufp->chgIData(oldp+131,(vlSelfRef.tbench__DOT__dut__DOT__if_pc),32);
        bufp->chgIData(oldp+132,(vlSelfRef.tbench__DOT__dut__DOT__id_pc),32);
        bufp->chgIData(oldp+133,(vlSelfRef.tbench__DOT__dut__DOT__operand_a),32);
        bufp->chgIData(oldp+134,(vlSelfRef.tbench__DOT__dut__DOT__ex_pc),32);
        bufp->chgBit(oldp+135,(vlSelfRef.tbench__DOT__dut__DOT__ex_insn_vld));
        bufp->chgBit(oldp+136,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd) 
                                | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel))));
        bufp->chgBit(oldp+137,(vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel));
        bufp->chgBit(oldp+138,(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd));
        bufp->chgBit(oldp+139,(vlSelfRef.tbench__DOT__dut__DOT__ex_jmp));
        bufp->chgIData(oldp+140,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__ex_pc)),32);
        bufp->chgIData(oldp+141,(vlSelfRef.tbench__DOT__dut__DOT__mem_pc),32);
        bufp->chgBit(oldp+142,(vlSelfRef.tbench__DOT__dut__DOT__mem_insn_vld));
        bufp->chgBit(oldp+143,(vlSelfRef.tbench__DOT__dut__DOT__mem_ctrl));
        bufp->chgBit(oldp+144,(vlSelfRef.tbench__DOT__dut__DOT__mem_mispred));
        bufp->chgBit(oldp+145,(vlSelfRef.tbench__DOT__dut__DOT__if_branch_taken));
        bufp->chgIData(oldp+146,(vlSelfRef.tbench__DOT__dut__DOT__if_branch_pc),32);
        bufp->chgBit(oldp+147,(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra));
        bufp->chgIData(oldp+148,(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B),32);
        bufp->chgIData(oldp+149,(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B),32);
        bufp->chgIData(oldp+150,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[1]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[2]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[3]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[4]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[5]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[6]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[7]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[8]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[9]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[10]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[11]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[12]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[13]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[14]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[15]),32);
        bufp->chgSData(oldp+166,((0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                                             >> 2U))),14);
        bufp->chgSData(oldp+167,((0x3ffU & (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                                            >> 2U))),10);
        bufp->chgSData(oldp+168,((0x3ffU & (vlSelfRef.tbench__DOT__dut__DOT__ex_pc 
                                            >> 2U))),10);
    }
    bufp->chgBit(oldp+169,(vlSelfRef.tbench__DOT__i_clk));
    bufp->chgBit(oldp+170,(vlSelfRef.tbench__DOT__i_reset));
    bufp->chgBit(oldp+171,(vlSelfRef.tbench__DOT__dut__DOT__if_id_flush));
    bufp->chgIData(oldp+172,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_jmp)
                               ? vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data
                               : ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_mispred)
                                   ? ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_jmp)
                                       ? vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data
                                       : ((IData)(4U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__ex_pc))
                                   : ((IData)(vlSelfRef.tbench__DOT__dut__DOT__if_branch_taken)
                                       ? vlSelfRef.tbench__DOT__dut__DOT__if_branch_pc
                                       : ((IData)(4U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__if_pc))))),32);
    bufp->chgIData(oldp+173,(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data),32);
    bufp->chgBit(oldp+174,(vlSelfRef.tbench__DOT__dut__DOT__ex_br_jmp));
    bufp->chgBit(oldp+175,(vlSelfRef.tbench__DOT__dut__DOT__ex_br_mispred));
    bufp->chgBit(oldp+176,((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                            >> 0x1fU)));
    bufp->chgIData(oldp+177,(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp),32);
    bufp->chgBit(oldp+178,((1U & ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                   >> 0x1fU) ^ (((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_un)) 
                                                 & (IData)(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64)) 
                                                ^ (
                                                   (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_un)) 
                                                   & ((~ 
                                                       (vlSelfRef.tbench__DOT__dut__DOT__fw_b 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                                         >> 0x1fU))))))));
    bufp->chgIData(oldp+179,(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp),32);
    bufp->chgBit(oldp+180,((1U & (vlSelfRef.tbench__DOT__dut__DOT__brpc__DOT__predictor__DOT__counter
                                  [(0x3ffU & (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                                              >> 2U))] 
                                  >> 1U))));
    bufp->chgBit(oldp+181,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_mispred) 
                            | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_jmp))));
    bufp->chgBit(oldp+182,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_jmp) 
                            | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_mispred))));
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
}
