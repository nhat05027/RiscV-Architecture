// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tbench__DOT__dut__DOT__if_branch_taken = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__if_pc = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__id_pc = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__id_instr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__id_branch_taken = 0U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x2f726f6dU;
    __Vtemp_1[2U] = 0x74657374U;
    __Vtemp_1[3U] = 0x2f30325fU;
    __Vtemp_1[4U] = 0x2e2eU;
    VL_READMEM_N(false, 19, 512, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom)
                 , 0, ~0ULL);
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[1U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[2U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[3U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[4U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[5U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[6U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[7U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[8U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[9U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xaU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xbU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xcU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xdU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xeU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0xfU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x10U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x11U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x12U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x13U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x14U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x15U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x16U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x17U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x18U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x19U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1aU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1bU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1cU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1dU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1eU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[0x1fU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_pc = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_insn_vld = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_branch_taken = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_imm = 3U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_br_un = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_opa_sel = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_opb_sel = 1U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_mem_wren = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_ld_un = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel = 1U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_rd_wren = 1U;
    vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_pc = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_insn_vld = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_ctrl = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_mispred = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_mem_wren = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_branch_taken = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_mem_read = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel = 1U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[1U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[2U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[3U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[4U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[5U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[6U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[7U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[8U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[9U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xaU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xbU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xcU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xdU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xeU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[0xfU] = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x30aaU;
    while ((__Vilp1 <= 0x3fffU)) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___eval_triggers__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_triggers__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__0));
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
