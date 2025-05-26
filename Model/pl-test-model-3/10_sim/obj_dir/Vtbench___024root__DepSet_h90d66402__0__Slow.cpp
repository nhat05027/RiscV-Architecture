// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_static(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_static\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__0(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__1(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__2(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__3(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__4(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    Vtbench___024root___eval_initial__TOP__0(vlSelf);
    Vtbench___024root____Vm_traceActivitySetAll(vlSelf);
    Vtbench___024root___eval_initial__TOP__1(vlSelf);
    Vtbench___024root___eval_initial__TOP__2(vlSelf);
    Vtbench___024root___eval_initial__TOP__3(vlSelf);
    Vtbench___024root___eval_initial__TOP__4(vlSelf);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x2f697361U;
    __Vtemp_1[2U] = 0x74657374U;
    __Vtemp_1[3U] = 0x2f30325fU;
    __Vtemp_1[4U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem)
                 , 0, ~0ULL);
    vlSelfRef.tbench__DOT__dut__DOT__if_instr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data = 0U;
    vlSelfRef.tbench__DOT__o_pc_debug = 0U;
    vlSelfRef.tbench__DOT__o_insn_vld = 0U;
    vlSelfRef.tbench__DOT__o_ctrl = 0U;
    vlSelfRef.tbench__DOT__o_mispred = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_mem_read = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel = 1U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__temp_rd_wren = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__temp_wb_data = 0U;
    VL_WRITEF_NX("\nPIPELINE - ISA tests\n\n",0);
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x210aU;
    while ((__Vilp1 <= 0x30a9U)) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x116aU;
    while ((__Vilp1 <= 0x2109U)) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__3(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__3\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x1caU;
    while ((__Vilp1 <= 0x1169U)) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__4(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__4\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x1c9U)) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_final(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_final\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_settle(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_settle\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../00_src/../01_bench/tbench.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tbench.dut.AL.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tbench.dut.BRC.branchcompare.lt_temp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__2(Vtbench___024root* vlSelf);
void Vtbench___024root___act_comb__TOP__0(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___stl_sequent__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr 
        = ((IData)(vlSelfRef.tbench__DOT__i_reset) ? 0U
            : ((0x100U & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                          >> 0x16U)) | ((0xe0U & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                  >> 7U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                            >> 2U)))));
    vlSelfRef.tbench__DOT__dut__DOT__pc_stall = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_mem_read) 
                                                 & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren) 
                                                    & ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr) 
                                                         == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr)) 
                                                        | ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr) 
                                                           == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr))) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr)))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_jmp = ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_taken)) 
                                               & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel));
    vlSelfRef.tbench__DOT__dut__DOT__if_instr = vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
        [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                     >> 2U))];
    vlSelfRef.tbench__DOT__dut__DOT__ex_forward_b = 
        ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren) 
           & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr))) 
          & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr) 
             == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr)))
          ? 2U : ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren) 
                    & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr))) 
                   & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr) 
                      == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr)))
                   ? 1U : ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_rd_wren) 
                             & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr))) 
                            & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr) 
                               == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_addr)))
                            ? 3U : 0U)));
    vlSelfRef.tbench__DOT__dut__DOT__ex_forward_a = 
        ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren) 
           & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr))) 
          & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr) 
             == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr)))
          ? 2U : ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren) 
                    & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr))) 
                   & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr) 
                      == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr)))
                   ? 1U : ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_rd_wren) 
                             & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr))) 
                            & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__temp_wb_addr) 
                               == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_addr)))
                            ? 3U : 0U)));
    vlSelfRef.tbench__DOT__dut__DOT__wb_wb_data = ((IData)(
                                                           (0U 
                                                            != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel)))
                                                    ? vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data
                                                    : vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data);
    vlSelfRef.tbench__DOT__dut__DOT__mem_alu_pc_data 
        = ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel))
            ? vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four
            : vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data);
    vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel = (7U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                      [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                      >> 0xfU));
    vlSelfRef.tbench__DOT__dut__DOT__if_branch_taken 
        = ((0x1bU == (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                               >> 2U))) || (0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                >> 2U))));
    vlSelfRef.tbench__DOT__dut__DOT__if_branch_pc = 
        ((0x1bU == (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                             >> 2U))) ? (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                                         + (((- (IData)(
                                                        (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__if_instr) 
                                                | (0x800U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                      >> 9U))) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                        >> 0x14U))))))
          : ((0x18U == (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                 >> 2U))) ? (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                                             + (((- (IData)(
                                                            (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.tbench__DOT__dut__DOT__if_instr 
                                                            >> 7U))))))
              : 0U));
    vlSelfRef.tbench__DOT__dut__DOT__fw_b = ((IData)(
                                                     (3U 
                                                      == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_b)))
                                              ? vlSelfRef.tbench__DOT__dut__DOT__temp_wb_data
                                              : ((IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_b)))
                                                  ? vlSelfRef.tbench__DOT__dut__DOT__mem_alu_pc_data
                                                  : 
                                                 ((IData)(
                                                          (1U 
                                                           == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_b)))
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__wb_wb_data
                                                   : vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)));
    vlSelfRef.tbench__DOT__dut__DOT__fw_a = ((IData)(
                                                     (3U 
                                                      == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_a)))
                                              ? vlSelfRef.tbench__DOT__dut__DOT__temp_wb_data
                                              : ((IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_a)))
                                                  ? vlSelfRef.tbench__DOT__dut__DOT__mem_alu_pc_data
                                                  : 
                                                 ((IData)(
                                                          (1U 
                                                           == (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_forward_a)))
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__wb_wb_data
                                                   : vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data)));
    if ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel))) {
            if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel)))) {
                vlSelfRef.tbench__DOT__dut__DOT__id_imm 
                    = (0xfffff000U & vlSelfRef.tbench__DOT__dut__DOT__id_instr);
            }
        }
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__id_imm = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | (((0xff000U 
                                                          & vlSelfRef.tbench__DOT__dut__DOT__id_instr) 
                                                         | (0x800U 
                                                            & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                               >> 9U))) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                 >> 0x14U))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                 >> 7U)))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                              >> 7U))))));
    }
    vlSelfRef.tbench__DOT__dut__DOT__operand_b = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_opb_sel)
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__ex_imm
                                                   : vlSelfRef.tbench__DOT__dut__DOT__fw_b);
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
        = (vlSelfRef.tbench__DOT__dut__DOT__fw_a ^ vlSelfRef.tbench__DOT__dut__DOT__fw_b);
    vlSelfRef.tbench__DOT__dut__DOT__operand_a = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_opa_sel)
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__ex_pc
                                                   : vlSelfRef.tbench__DOT__dut__DOT__fw_a);
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64 
        = ((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
               >> 0x1fU)) & (vlSelfRef.tbench__DOT__dut__DOT__fw_b 
                             >> 0x1fU));
    vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra 
        = ((vlSelfRef.tbench__DOT__dut__DOT__operand_a 
            >> 0x1fU) & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op) 
                         >> 3U));
    vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
        = (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
           ^ vlSelfRef.tbench__DOT__dut__DOT__operand_b);
    vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
        = ((((((0x80000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 0x1fU)) << 0x1fU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
               | (0x40000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 0x1eU)) << 0x1eU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
              | ((0x20000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 0x1dU)) << 0x1dU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                 | (0x10000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))) 
             | (((0x8000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     >> 0x1bU)) << 0x1bU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                 | (0x4000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                | ((0x2000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x1000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                         >> 0x18U)) 
                                     << 0x18U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b))))) 
            | ((((0x800000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 0x17U)) << 0x17U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                 | (0x400000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                | ((0x200000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x100000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                        >> 0x14U)) 
                                    << 0x14U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))) 
               | (((0x80000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x40000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 0x12U)) << 0x12U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                  | ((0x20000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 0x11U)) << 0x11U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                     | (0x10000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                         >> 0x10U)) 
                                     << 0x10U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))))) 
           | (((((0x8000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                  >> 0xfU)) << 0xfU) 
                             & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                 | (0x4000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                | ((0x2000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x1000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 0xcU)) << 0xcU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))) 
               | (((0x800U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x400U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     >> 0xaU)) << 0xaU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                  | ((0x200U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     >> 9U)) << 9U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                     | (0x100U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 8U)) << 8U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))))) 
              | ((((0x80U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                  >> 7U)) << 7U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                   | (0x40U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 6U)) << 6U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                  | ((0x20U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                    >> 5U)) << 5U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                     | (0x10U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                      >> 4U)) << 4U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))) 
                 | (((8U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                 >> 3U)) << 3U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                     | (4U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                   >> 2U)) << 2U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                    | ((2U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                   >> 1U)) << 1U) & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                       | (1U & ((~ vlSelfRef.tbench__DOT__dut__DOT__operand_a) 
                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))))));
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
        = (((((((IData)(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64) 
                << 0x1fU) | (0x40000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                                 >> 0x1eU)) 
                                             << 0x1eU) 
                                            & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
              | ((0x20000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                      >> 0x1dU)) << 0x1dU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                 | (0x10000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))) 
             | (((0x8000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                     >> 0x1bU)) << 0x1bU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                 | (0x4000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                | ((0x2000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x1000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                         >> 0x18U)) 
                                     << 0x18U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b))))) 
            | ((((0x800000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                    >> 0x17U)) << 0x17U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                 | (0x400000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                | ((0x200000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x100000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                        >> 0x14U)) 
                                    << 0x14U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))) 
               | (((0x80000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x40000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                       >> 0x12U)) << 0x12U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                  | ((0x20000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                       >> 0x11U)) << 0x11U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                     | (0x10000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                         >> 0x10U)) 
                                     << 0x10U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))))) 
           | (((((0x8000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                  >> 0xfU)) << 0xfU) 
                             & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                 | (0x4000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                | ((0x2000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x1000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                      >> 0xcU)) << 0xcU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))) 
               | (((0x800U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x400U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                     >> 0xaU)) << 0xaU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                  | ((0x200U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                     >> 9U)) << 9U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                     | (0x100U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                       >> 8U)) << 8U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__fw_b))))) 
              | ((((0x80U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                  >> 7U)) << 7U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                   | (0x40U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                    >> 6U)) << 6U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                  | ((0x20U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                    >> 5U)) << 5U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                     | (0x10U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                      >> 4U)) << 4U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))) 
                 | (((8U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                 >> 3U)) << 3U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                     | (4U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                   >> 2U)) << 2U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b))) 
                    | ((2U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__fw_a 
                                   >> 1U)) << 1U) & vlSelfRef.tbench__DOT__dut__DOT__fw_b)) 
                       | (1U & ((~ vlSelfRef.tbench__DOT__dut__DOT__fw_a) 
                                & vlSelfRef.tbench__DOT__dut__DOT__fw_b)))))));
}

VL_ATTR_COLD void Vtbench___024root___eval_triggers__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tbench.dut.AL.lt_temp)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tbench.dut.BRC.branchcompare.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tbench.i_reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__nba(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__nba\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tbench.dut.AL.lt_temp)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tbench.dut.BRC.branchcompare.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tbench.i_reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root____Vm_traceActivitySetAll\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtbench___024root___ctor_var_reset(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___ctor_var_reset\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tbench__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__i_reset = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__o_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_mispred = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_ctrl = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__pc_stall = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__if_instr = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__id_instr = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__id_imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__dut__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ex_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_br_un = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_opa_sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_opb_sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__ex_branch_cmd = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_branch_type = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__dut__DOT__ex_forward_a = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__ex_forward_b = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__ex_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__ex_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__ex_mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_lsu_op = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__ex_ld_un = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__ex_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__ex_jmp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_br_jmp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_ctrl = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_mispred = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_pc_four = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_alu_pc_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_lsu_op = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__mem_ld_un = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__mem_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__mem_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__mem_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__wb_rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__wb_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__wb_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__wb_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__wb_alu_pc_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__wb_ld_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__wb_wb_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__temp_rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__temp_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__temp_wb_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__mem_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__if_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__id_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__ex_br_mispred = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__if_branch_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__fw_a = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__fw_b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__CU__DOT__crom[__Vi0] = VL_RAND_RESET_I(19);
    }
    vlSelf->tbench__DOT__dut__DOT__CU__DOT__romAddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__RF__DOT__regfile_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__AL__DOT__A_xor_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__AL__DOT__not_A_and_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__AL__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__LS__DOT__d_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__LS__DOT__io_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__scoreboard__DOT__num_cycle = 0;
    vlSelf->tbench__DOT__scoreboard__DOT__num_insn = 0;
    vlSelf->tbench__DOT__scoreboard__DOT__num_ctrl = 0;
    vlSelf->tbench__DOT__scoreboard__DOT__num_mispred = 0;
    vlSelf->tbench__DOT__scoreboard__DOT__ipc = 0;
    vlSelf->tbench__DOT__scoreboard__DOT__misprd_rate = 0;
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
