// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP(Vtbench___024root* vlSelf);
VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__0(Vtbench___024root* vlSelf);
VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__1(Vtbench___024root* vlSelf);
VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__2(Vtbench___024root* vlSelf);

void Vtbench___024root___eval_initial(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 
        = vlSelfRef.tbench__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 
        = vlSelfRef.tbench__DOT__i_reset;
}

VL_INLINE_OPT VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "../00_src/../01_bench/tlib.svh", 
                                             5);
        vlSelfRef.tbench__DOT__i_clk = (1U & (~ (IData)(vlSelfRef.tbench__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tsk_reset__1__RESETPERIOD;
    __Vtask_tsk_reset__1__RESETPERIOD = 0;
    // Body
    __Vtask_tsk_reset__1__RESETPERIOD = 0x37U;
    vlSelfRef.tbench__DOT__i_reset = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(__Vtask_tsk_reset__1__RESETPERIOD)), 
                                         nullptr, "../00_src/../01_bench/tlib.svh", 
                                         13);
    vlSelfRef.tbench__DOT__i_reset = 0U;
}

VL_INLINE_OPT VlCoroutine Vtbench___024root___eval_initial__TOP__Vtiming__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tsk_timeout__2__FINISH;
    __Vtask_tsk_timeout__2__FINISH = 0;
    // Body
    __Vtask_tsk_timeout__2__FINISH = 0x989680U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(__Vtask_tsk_timeout__2__FINISH)), 
                                         nullptr, "../00_src/../01_bench/tlib.svh", 
                                         21);
    VL_WRITEF_NX("\nTimeout...\n\n",0);
    VL_FINISH_MT("../00_src/../01_bench/tlib.svh", 22, "");
}

void Vtbench___024root___act_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__2(Vtbench___024root* vlSelf);
void Vtbench___024root___act_comb__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___act_comb__TOP__1(Vtbench___024root* vlSelf);

void Vtbench___024root___eval_act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtbench___024root___act_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_sequent__TOP__0\n"); );
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
    vlSelfRef.tbench__DOT__dut__DOT__id_imm_sel = (7U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                      [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                      >> 0xfU));
    vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_0 
        = (1U & (~ (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                    [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                    >> 0x11U)));
    vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_1 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                 [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                 >> 0x10U));
    vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_2 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                 [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                 >> 0xfU));
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
    vlSelfRef.tbench__DOT__dut__DOT__id_I_type = ((IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_0) 
                                                  & ((IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_1) 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_2)));
    vlSelfRef.tbench__DOT__dut__DOT__pc_stall = (((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rd_wren) 
                                                  & ((((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                           >> 0xfU))) 
                                                      | ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_I_type)) 
                                                         & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                >> 0x14U))))) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr)))) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren) 
                                                     & ((((0x1fU 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr)) 
                                                         | ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_I_type)) 
                                                            & ((0x1fU 
                                                                & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                   >> 0x14U)) 
                                                               == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr)))) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr)))) 
                                                    | ((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren) 
                                                       & ((((0x1fU 
                                                             & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                >> 0xfU)) 
                                                            == (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr)) 
                                                           | ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_I_type)) 
                                                              & ((0x1fU 
                                                                  & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                                                                     >> 0x14U)) 
                                                                 == (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr)))) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr))))));
}

VL_INLINE_OPT void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_sequent__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
        = __Vtemp_1;
    vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data = 
        ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
          ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
              ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
                  ? ((vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                      | (- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op) 
                                          >> 3U))))) 
                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b)
                  : (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                     | vlSelfRef.tbench__DOT__dut__DOT__operand_b))
              : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
                  ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                            | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                           | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                          | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                         | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                        | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                       | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                      | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                      ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                          ? (((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra) 
                              << 0x1fU) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                           >> 1U)) : 
                         ((2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                           ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                               << 0x1eU) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                            >> 2U))
                           : ((3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                               ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                   << 0x1dU) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                >> 3U))
                               : ((4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                   ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                       << 0x1cU) | 
                                      (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                       >> 4U)) : ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 0x1bU) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      >> 5U))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 0x1aU) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       >> 6U))
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 0x19U) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                        >> 7U))
                                                     : 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 0x18U) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                        >> 8U)))))))))
                      : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                                | (0xaU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                               | (0xbU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                              | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                             | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                            | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                           | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                          | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                          ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                              ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                  << 0x17U) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                               >> 9U))
                              : ((0xaU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                  ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                      << 0x16U) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   >> 0xaU))
                                  : ((0xbU == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                      ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                          << 0x15U) 
                                         | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                            >> 0xbU))
                                      : ((0xcU == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                          ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                              << 0x14U) 
                                             | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                >> 0xcU))
                                          : ((0xdU 
                                              == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                              ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0x13U) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    >> 0xdU))
                                              : ((0xeU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0x12U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     >> 0xeU))
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 0x11U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      >> 0xfU))
                                                   : 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 0x10U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      >> 0x10U)))))))))
                          : (((((((((0x11U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                                    | (0x12U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                   | (0x13U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                  | (0x14U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                 | (0x15U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                | (0x16U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                               | (0x17U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                              | (0x18U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                              ? ((0x11U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                  ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                      << 0xfU) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                  >> 0x11U))
                                  : ((0x12U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                      ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                          << 0xeU) 
                                         | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                            >> 0x12U))
                                      : ((0x13U == 
                                          (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                          ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                              << 0xdU) 
                                             | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                >> 0x13U))
                                          : ((0x14U 
                                              == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                              ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    >> 0x14U))
                                              : ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0xbU) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     >> 0x15U))
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 0xaU) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      >> 0x16U))
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 9U) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       >> 0x17U))
                                                    : 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 8U) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       >> 0x18U)))))))))
                              : ((0x19U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                  ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                      << 7U) | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                >> 0x19U))
                                  : ((0x1aU == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                      ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                          << 6U) | 
                                         (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                          >> 0x1aU))
                                      : ((0x1bU == 
                                          (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                          ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                              << 5U) 
                                             | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                >> 0x1bU))
                                          : ((0x1cU 
                                              == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                              ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 4U) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    >> 0x1cU))
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 3U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     >> 0x1dU))
                                                  : 
                                                 ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 2U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      >> 0x1eU))
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 1U) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       >> 0x1fU))
                                                    : vlSelfRef.tbench__DOT__dut__DOT__operand_a))))))))))
                  : (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                     ^ vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
          : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
              ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp, 0x1fU)
                  : (1U & (((vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                             >> 0x1fU) ^ ((~ (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                              >> 0x1fU)) 
                                          & (vlSelfRef.tbench__DOT__dut__DOT__operand_b 
                                             >> 0x1fU))) 
                           ^ ((vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                               >> 0x1fU) & (~ (vlSelfRef.tbench__DOT__dut__DOT__operand_b 
                                               >> 0x1fU))))))
              : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op))
                  ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                            | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                           | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                          | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                         | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                        | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                       | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                      | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                      ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                          ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                             << 1U) : ((2U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                        ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                           << 2U) : 
                                       ((3U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                         ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                            << 3U) : 
                                        ((4U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                          ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                             << 4U)
                                          : ((5U == 
                                              (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                              ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                 << 5U)
                                              : ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                  << 6U)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   << 7U)
                                                   : 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   << 8U))))))))
                      : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                                | (0xaU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                               | (0xbU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                              | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                             | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                            | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                           | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                          | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                          ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                              ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                 << 9U) : ((0xaU == 
                                            (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                            ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                               << 0xaU)
                                            : ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   << 0xbU)
                                                : (
                                                   (0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    << 0xcU)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     << 0xdU)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      << 0xeU)
                                                      : 
                                                     ((0xfU 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                       ? 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       << 0xfU)
                                                       : 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       << 0x10U))))))))
                          : (((((((((0x11U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b)) 
                                    | (0x12U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                   | (0x13U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                  | (0x14U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                 | (0x15U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                                | (0x16U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                               | (0x17U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))) 
                              | (0x18U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b)))
                              ? ((0x11U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                  ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     << 0x11U) : ((0x12U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   << 0x12U)
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    << 0x13U)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     << 0x14U)
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      << 0x15U)
                                                      : 
                                                     ((0x16U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                       ? 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       << 0x16U)
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                        ? 
                                                       (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                        << 0x17U)
                                                        : 
                                                       (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                        << 0x18U))))))))
                              : ((0x19U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                  ? (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                     << 0x19U) : ((0x1aU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                   << 0x1aU)
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                    << 0x1bU)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                     << 0x1cU)
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                      << 0x1dU)
                                                      : 
                                                     ((0x1eU 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                       ? 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                       << 0x1eU)
                                                       : 
                                                      ((0x1fU 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelfRef.tbench__DOT__dut__DOT__operand_b))
                                                        ? 
                                                       (vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                                                        << 0x1fU)
                                                        : vlSelfRef.tbench__DOT__dut__DOT__operand_a))))))))))
                  : ((vlSelfRef.tbench__DOT__dut__DOT__operand_a 
                      + (vlSelfRef.tbench__DOT__dut__DOT__operand_b 
                         ^ (- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op) 
                                             >> 3U)))))) 
                     + (1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op) 
                              >> 3U))))));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtbench__ConstPool__TABLE_h12e66f01_0;

VL_INLINE_OPT void Vtbench___024root___act_sequent__TOP__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_sequent__TOP__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
        = __Vtemp_1;
    __Vtableidx1 = (((IData)((0xffffffffU == (~ vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B))) 
                     << 4U) | ((8U & ((8U & (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                             >> 0x1cU)) 
                                      ^ ((((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_un)) 
                                           & (IData)(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64)) 
                                          << 3U) ^ 
                                         (8U & (((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_un)) 
                                                 << 3U) 
                                                & (((~ 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data 
                                                      >> 0x1fU)) 
                                                    << 3U) 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                                      >> 0x1cU))))))) 
                               | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type)));
    vlSelfRef.tbench__DOT__dut__DOT__ex_br_jmp = Vtbench__ConstPool__TABLE_h12e66f01_0
        [__Vtableidx1];
    vlSelfRef.tbench__DOT__dut__DOT__if_id_flush = 
        (((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_jmp) 
          & (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd)) 
         | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel));
}

VL_INLINE_OPT void Vtbench___024root___act_comb__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_comb__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush = 
        ((IData)(vlSelfRef.tbench__DOT__dut__DOT__pc_stall) 
         | (IData)(vlSelfRef.tbench__DOT__dut__DOT__if_id_flush));
}

VL_INLINE_OPT void Vtbench___024root___act_comb__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_comb__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__pc_next = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__if_id_flush)
                                                 ? vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.tbench__DOT__dut__DOT__if_pc));
}

void Vtbench___024root___nba_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__1(Vtbench___024root* vlSelf);

void Vtbench___024root___eval_nba(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_nba\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vdly__tbench__DOT__scoreboard__DOT__num_cycle;
    __Vdly__tbench__DOT__scoreboard__DOT__num_cycle = 0;
    double __Vdly__tbench__DOT__scoreboard__DOT__num_insn;
    __Vdly__tbench__DOT__scoreboard__DOT__num_insn = 0;
    double __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl;
    __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl = 0;
    double __Vdly__tbench__DOT__scoreboard__DOT__num_mispred;
    __Vdly__tbench__DOT__scoreboard__DOT__num_mispred = 0;
    // Body
    __Vdly__tbench__DOT__scoreboard__DOT__num_cycle 
        = vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle;
    __Vdly__tbench__DOT__scoreboard__DOT__num_insn 
        = vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn;
    __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl 
        = vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl;
    __Vdly__tbench__DOT__scoreboard__DOT__num_mispred 
        = vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred;
    if (vlSelfRef.tbench__DOT__i_reset) {
        __Vdly__tbench__DOT__scoreboard__DOT__num_cycle = 0.0;
        __Vdly__tbench__DOT__scoreboard__DOT__num_insn = 0.0;
        __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl = 0.0;
        __Vdly__tbench__DOT__scoreboard__DOT__num_mispred = 0.0;
    } else {
        __Vdly__tbench__DOT__scoreboard__DOT__num_cycle 
            = (1.0 + vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle);
        __Vdly__tbench__DOT__scoreboard__DOT__num_insn 
            = ((IData)(vlSelfRef.tbench__DOT__o_insn_vld)
                ? (1.0 + vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn)
                : vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn);
        __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl 
            = ((IData)(vlSelfRef.tbench__DOT__o_ctrl)
                ? (1.0 + vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl)
                : vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl);
        __Vdly__tbench__DOT__scoreboard__DOT__num_mispred 
            = ((IData)(vlSelfRef.tbench__DOT__o_mispred)
                ? (1.0 + vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred)
                : vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tbench__DOT__o_insn_vld) 
                      & (0x14U == vlSelfRef.tbench__DOT__o_pc_debug))))) {
        VL_WRITEF_NX("%s",0,8,(0xffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                               [0U]));
    }
    if (VL_UNLIKELY(((0x1cU == vlSelfRef.tbench__DOT__o_pc_debug)))) {
        VL_WRITEF_NX("\nResult\n\nIPC = %1.2f\n",0,
                     64,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn 
                         / vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle));
        if ((0.0 != vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle)) {
            VL_WRITEF_NX("IPC          =  %1.2f\n",0,
                         64,(vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn 
                             / vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle));
        } else {
            VL_WRITEF_NX("IPC          = N/A\n",0);
        }
        if ((0.0 != vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl)) {
            VL_WRITEF_NX("Mispred Rate = %2.2f \n",0,
                         64,(100.0 * (vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred 
                                      / vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl)));
        } else {
            VL_WRITEF_NX("Mispred Rate = N/A\n",0);
        }
        VL_WRITEF_NX("\nEND of ISA tests\n\n",0);
        VL_FINISH_MT("../00_src/../01_bench/scoreboard.sv", 64, "");
    }
    vlSelfRef.tbench__DOT__scoreboard__DOT__num_cycle 
        = __Vdly__tbench__DOT__scoreboard__DOT__num_cycle;
    vlSelfRef.tbench__DOT__scoreboard__DOT__num_insn 
        = __Vdly__tbench__DOT__scoreboard__DOT__num_insn;
    vlSelfRef.tbench__DOT__scoreboard__DOT__num_ctrl 
        = __Vdly__tbench__DOT__scoreboard__DOT__num_ctrl;
    vlSelfRef.tbench__DOT__scoreboard__DOT__num_mispred 
        = __Vdly__tbench__DOT__scoreboard__DOT__num_mispred;
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0;
    __VdlyVal__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0;
    __VdlyDim0__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0;
    __VdlySet__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 = 0;
    IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 = 0;
    SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 = 0;
    SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 = 0;
    CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 = 0;
    IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6;
    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 = 0;
    CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6;
    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 = 0;
    // Body
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 = 0U;
    __VdlySet__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset)))) {
        if (vlSelfRef.tbench__DOT__dut__DOT__mem_mem_wren) {
            if ((0x1000U != (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                             >> 0x10U))) {
                if ((0U == (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                            >> 0x10U))) {
                    if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op))) {
                        if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                            if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 
                                    = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 
                                    = (0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                  >> 2U));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0 = 1U;
                            } else {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 
                                    = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 
                                    = (0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                  >> 2U));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1 = 1U;
                            }
                        } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                            if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 
                                        = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 
                                        = (0x3fffU 
                                           & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                              >> 2U));
                                    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2 = 1U;
                                } else {
                                    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 
                                        = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 
                                        = (0x3fffU 
                                           & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                              >> 2U));
                                    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3 = 1U;
                                }
                            } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 
                                    = (0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                  >> 2U));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4 = 1U;
                            } else {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 
                                    = (0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                  >> 2U));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5 = 1U;
                            }
                        }
                    } else {
                        __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 
                            = vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data;
                        __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 
                            = (0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                          >> 2U));
                        __VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6 = 1U;
                    }
                }
            }
            if ((0x1000U == (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                             >> 0x10U))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op))) {
                    if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 
                                = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                            __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                           >> 0xcU));
                            __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0 = 1U;
                        } else {
                            __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 
                                = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                            __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                           >> 0xcU));
                            __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1 = 1U;
                        }
                    } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 
                                    = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                               >> 0xcU));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2 = 1U;
                            } else {
                                __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                                __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 
                                    = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                               >> 0xcU));
                                __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3 = 1U;
                            }
                        } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                            __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                           >> 0xcU));
                            __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4 = 1U;
                        } else {
                            __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data);
                            __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                           >> 0xcU));
                            __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5 = 1U;
                        }
                    }
                } else {
                    __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 
                        = vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data;
                    __VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 
                        = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                   >> 0xcU));
                    __VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6 = 1U;
                }
            }
        }
        if (vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren) {
            if (((IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren) 
                 & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr)))) {
                __VdlyVal__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 
                    = ((IData)((0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel)))
                        ? vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data
                        : vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data);
                __VdlyDim0__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 
                    = vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr;
                __VdlySet__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0 = 1U;
            }
        }
    }
    vlSelfRef.tbench__DOT__dut__DOT__mem_branch_taken 
        = ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
           && (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_br_jmp));
    if (vlSelfRef.tbench__DOT__i_reset) {
        vlSelfRef.tbench__DOT__dut__DOT__ex_imm = 3U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data = 0U;
        vlSelfRef.tbench__DOT__o_pc_debug = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel = 1U;
        vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_pc = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel = 1U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel = 1U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_pc = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__id_instr = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__id_pc = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__if_pc = 0U;
    } else {
        vlSelfRef.tbench__DOT__o_pc_debug = vlSelfRef.tbench__DOT__dut__DOT__mem_pc;
        vlSelfRef.tbench__DOT__dut__DOT__mem_rs2_data 
            = vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data;
        vlSelfRef.tbench__DOT__dut__DOT__wb_wb_sel 
            = vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel;
        vlSelfRef.tbench__DOT__dut__DOT__wb_wb_addr 
            = vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr;
        vlSelfRef.tbench__DOT__dut__DOT__wb_alu_pc_data 
            = ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel))
                ? vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four
                : vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data);
        if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_mem_wren)))) {
            if ((0x1000U == (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                             >> 0x10U))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op))) {
                    if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                      [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                >> 0xcU))] 
                                      >> 0x10U));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                      [
                                                      (0xfU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 0xcU))] 
                                                      >> 0x1fU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 0x10U));
                        } else {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                      [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                >> 0xcU))]));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                      [
                                                      (0xfU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 0xcU))] 
                                                      >> 0xfU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 0x10U));
                        }
                    } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                                vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                    = ((0xffffff00U 
                                        & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                       | (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                          [(0xfU & 
                                            (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                             >> 0xcU))] 
                                          >> 0x18U));
                                vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                    = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                          [
                                                          (0xfU 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                              >> 0xcU))] 
                                                          >> 0x1fU) 
                                                         & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                          << 8U));
                            } else {
                                vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                    = ((0xffffff00U 
                                        & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                       | (0xffU & (
                                                   vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                   [
                                                   (0xfU 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                       >> 0xcU))] 
                                                   >> 0x10U)));
                                vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                    = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                          [
                                                          (0xfU 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                              >> 0xcU))] 
                                                          >> 0x17U) 
                                                         & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                          << 8U));
                            }
                        } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                               [(0xfU 
                                                 & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                    >> 0xcU))] 
                                               >> 8U)));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                      [
                                                      (0xfU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 0xcU))] 
                                                      >> 0xfU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 8U));
                        } else {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                      [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                >> 0xcU))]));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                                                      [
                                                      (0xfU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 0xcU))] 
                                                      >> 7U) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 8U));
                        }
                    }
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                        = vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                        [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                  >> 0xcU))];
                }
            } else if ((0x1001U == (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                    >> 0x10U))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op))) {
                    if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)
                                ? 0x1234U : 0x5678U);
                    } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)
                                ? ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)
                                    ? 0x12U : 0x34U)
                                : ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)
                                    ? 0x56U : 0x78U));
                    }
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data = 0x12345678U;
                }
            } else if ((0U == (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                               >> 0x10U))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op))) {
                    if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                      [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                   >> 2U))] 
                                      >> 0x10U));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 2U))] 
                                                      >> 0x1fU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 0x10U));
                        } else {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                      [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                   >> 2U))]));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 2U))] 
                                                      >> 0xfU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 0x10U));
                        }
                    } else if ((2U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                        if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                      [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                   >> 2U))] 
                                      >> 0x18U));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 2U))] 
                                                      >> 0x1fU) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 8U));
                        } else {
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                               [(0x3fffU 
                                                 & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                    >> 2U))] 
                                               >> 0x10U)));
                            vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                                = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                          >> 2U))] 
                                                      >> 0x17U) 
                                                     & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                      << 8U));
                        }
                    } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data)) {
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                               | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                           [(0x3fffU 
                                             & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                >> 2U))] 
                                           >> 8U)));
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                               | ((- (IData)((1U & 
                                              ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                [(0x3fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                     >> 2U))] 
                                                >> 0xfU) 
                                               & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                  << 8U));
                    } else {
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                               | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                  [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                               >> 2U))]));
                        vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                            = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data) 
                               | ((- (IData)((1U & 
                                              ((vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                                                [(0x3fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                                     >> 2U))] 
                                                >> 7U) 
                                               & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un)))))) 
                                  << 8U));
                    }
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__wb_ld_data 
                        = vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                        [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
                                     >> 2U))];
                }
            }
        }
        vlSelfRef.tbench__DOT__dut__DOT__mem_pc = vlSelfRef.tbench__DOT__dut__DOT__ex_pc;
        vlSelfRef.tbench__DOT__dut__DOT__mem_wb_addr 
            = vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr;
        vlSelfRef.tbench__DOT__dut__DOT__mem_wb_sel 
            = vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel;
        vlSelfRef.tbench__DOT__dut__DOT__mem_pc_four 
            = ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__ex_pc);
        vlSelfRef.tbench__DOT__dut__DOT__mem_alu_data 
            = vlSelfRef.tbench__DOT__dut__DOT__ex_alu_data;
        vlSelfRef.tbench__DOT__dut__DOT__mem_lsu_op 
            = vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op;
        if (vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush) {
            vlSelfRef.tbench__DOT__dut__DOT__ex_imm = 3U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel = 1U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_pc = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op = 0U;
        } else {
            vlSelfRef.tbench__DOT__dut__DOT__ex_imm 
                = vlSelfRef.tbench__DOT__dut__DOT__id_imm;
            vlSelfRef.tbench__DOT__dut__DOT__ex_alu_op 
                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                           [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                           >> 6U));
            vlSelfRef.tbench__DOT__dut__DOT__ex_branch_type 
                = (7U & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                         >> 0xcU));
            vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                = vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem
                [(0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                           >> 0xfU))];
            vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data 
                = vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem
                [(0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                           >> 0x14U))];
            vlSelfRef.tbench__DOT__dut__DOT__ex_wb_addr 
                = (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                            >> 7U));
            vlSelfRef.tbench__DOT__dut__DOT__ex_wb_sel 
                = (3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                         [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                         >> 3U));
            vlSelfRef.tbench__DOT__dut__DOT__ex_pc 
                = vlSelfRef.tbench__DOT__dut__DOT__id_pc;
            vlSelfRef.tbench__DOT__dut__DOT__ex_lsu_op 
                = (3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                         [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                         >> 1U));
        }
        if (vlSelfRef.tbench__DOT__dut__DOT__if_id_flush) {
            vlSelfRef.tbench__DOT__dut__DOT__id_instr = 0U;
            vlSelfRef.tbench__DOT__dut__DOT__id_pc = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__pc_stall)))) {
            vlSelfRef.tbench__DOT__dut__DOT__id_instr 
                = vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [(0x3fffU & (vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                             >> 2U))];
            vlSelfRef.tbench__DOT__dut__DOT__id_pc 
                = vlSelfRef.tbench__DOT__dut__DOT__if_pc;
        }
        if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__pc_stall)))) {
            vlSelfRef.tbench__DOT__dut__DOT__if_pc 
                = vlSelfRef.tbench__DOT__dut__DOT__pc_next;
        }
    }
    vlSelfRef.tbench__DOT__dut__DOT__ex_br_un = ((1U 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
                                                     && (1U 
                                                         & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                            >> 0xcU))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_opb_sel = ((IData)(vlSelfRef.tbench__DOT__i_reset) 
                                                   || ((IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush) 
                                                       || (1U 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                              [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                              >> 0xaU))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_opa_sel = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                   && ((1U 
                                                        & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
                                                       && (1U 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                              [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                              >> 0xbU))));
    vlSelfRef.tbench__DOT__o_mispred = ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                        && (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_mispred));
    vlSelfRef.tbench__DOT__o_insn_vld = ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                         && (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_insn_vld));
    vlSelfRef.tbench__DOT__o_ctrl = ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                     && (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_ctrl));
    vlSelfRef.tbench__DOT__dut__DOT__wb_rd_wren = ((IData)(vlSelfRef.tbench__DOT__i_reset) 
                                                   || (IData)(vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren));
    vlSelfRef.tbench__DOT__dut__DOT__mem_mispred = 
        ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
         && (IData)(vlSelfRef.tbench__DOT__dut__DOT__if_id_flush));
    vlSelfRef.tbench__DOT__dut__DOT__mem_insn_vld = 
        ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
         && (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_insn_vld));
    vlSelfRef.tbench__DOT__dut__DOT__mem_ctrl = ((1U 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                 && ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd) 
                                                     | (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel)));
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0] 
            = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v0) 
                  << 0x10U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1] 
            = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1]) 
               | (IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v1));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2] 
            = ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v2) 
                  << 0x18U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3] 
            = ((0xff00ffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v3) 
                  << 0x10U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4] 
            = ((0xffff00ffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v4) 
                  << 8U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5] 
            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5]) 
               | (IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v5));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__io_buffer[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6] 
            = __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__io_buffer__v6;
    }
    vlSelfRef.tbench__DOT__dut__DOT__mem_rd_wren = 
        ((IData)(vlSelfRef.tbench__DOT__i_reset) || (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_rd_wren));
    vlSelfRef.tbench__DOT__dut__DOT__mem_ld_un = ((1U 
                                                   & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                  && (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_ld_un));
    vlSelfRef.tbench__DOT__dut__DOT__mem_mem_wren = 
        ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
         && (IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_mem_wren));
    vlSelfRef.tbench__DOT__dut__DOT__ex_insn_vld = 
        ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
         && ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
             && (1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                       >> 0xdU))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_branch_cmd 
        = ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
           && ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
               && ((IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_0) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_1)) 
                      & (IData)(vlSelfRef.tbench__DOT__dut__DOT____VdfgRegularize_hf6e9fc58_2_2)))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_pc_sel = ((1U 
                                                   & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
                                                      && (1U 
                                                          & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                             [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                             >> 0x12U))));
    if (__VdlySet__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__RF__DOT__regfile_mem[__VdlyDim0__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0] 
            = __VdlyVal__tbench__DOT__dut__DOT__RF__DOT__regfile_mem__v0;
    }
    vlSelfRef.tbench__DOT__dut__DOT__operand_b = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_opb_sel)
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__ex_imm
                                                   : vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data);
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B 
        = (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
           ^ vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data);
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64 
        = ((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
               >> 0x1fU)) & (vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data 
                             >> 0x1fU));
    vlSelfRef.tbench__DOT__dut__DOT__ex_rd_wren = ((IData)(vlSelfRef.tbench__DOT__i_reset) 
                                                   || ((IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush) 
                                                       || (1U 
                                                           & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                              [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                              >> 0xeU))));
    vlSelfRef.tbench__DOT__dut__DOT__ex_ld_un = ((1U 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
                                                     && (1U 
                                                         & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                         [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])));
    vlSelfRef.tbench__DOT__dut__DOT__ex_mem_wren = 
        ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset))) 
         && ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__id_ex_flush))) 
             && (1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                       >> 5U))));
    vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B 
        = (((((((IData)(vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64) 
                << 0x1fU) | (0x40000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                                 >> 0x1eU)) 
                                             << 0x1eU) 
                                            & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
              | ((0x20000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                      >> 0x1dU)) << 0x1dU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                 | (0x10000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))) 
             | (((0x8000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                     >> 0x1bU)) << 0x1bU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                 | (0x4000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                | ((0x2000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x1000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                         >> 0x18U)) 
                                     << 0x18U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))))) 
            | ((((0x800000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                    >> 0x17U)) << 0x17U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                 | (0x400000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                | ((0x200000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x100000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                        >> 0x14U)) 
                                    << 0x14U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))) 
               | (((0x80000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x40000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                       >> 0x12U)) << 0x12U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                  | ((0x20000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                       >> 0x11U)) << 0x11U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                     | (0x10000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                         >> 0x10U)) 
                                     << 0x10U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))))) 
           | (((((0x8000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                  >> 0xfU)) << 0xfU) 
                             & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                 | (0x4000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                | ((0x2000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x1000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                      >> 0xcU)) << 0xcU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))) 
               | (((0x800U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x400U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                     >> 0xaU)) << 0xaU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                  | ((0x200U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                     >> 9U)) << 9U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                     | (0x100U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                       >> 8U)) << 8U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))))) 
              | ((((0x80U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                  >> 7U)) << 7U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                   | (0x40U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                    >> 6U)) << 6U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                  | ((0x20U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                    >> 5U)) << 5U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                     | (0x10U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                      >> 4U)) << 4U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))) 
                 | (((8U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                 >> 3U)) << 3U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                     | (4U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                   >> 2U)) << 2U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data))) 
                    | ((2U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data 
                                   >> 1U)) << 1U) & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)) 
                       | (1U & ((~ vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data) 
                                & vlSelfRef.tbench__DOT__dut__DOT__ex_rs2_data)))))));
    vlSelfRef.tbench__DOT__dut__DOT__operand_a = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__ex_opa_sel)
                                                   ? vlSelfRef.tbench__DOT__dut__DOT__ex_pc
                                                   : vlSelfRef.tbench__DOT__dut__DOT__ex_rs1_data);
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0] 
            = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v0) 
                  << 0x10U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1] 
            = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1]) 
               | (IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v1));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2] 
            = ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v2) 
                  << 0x18U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3] 
            = ((0xff00ffffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v3) 
                  << 0x10U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4] 
            = ((0xffff00ffU & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4]) 
               | ((IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v4) 
                  << 8U));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5] 
            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem
                [__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5]) 
               | (IData)(__VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v5));
    }
    if (__VdlySet__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6) {
        vlSelfRef.tbench__DOT__dut__DOT__LS__DOT__d_mem[__VdlyDim0__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6] 
            = __VdlyVal__tbench__DOT__dut__DOT__LS__DOT__d_mem__v6;
    }
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
}

void Vtbench___024root___timing_resume(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___timing_resume\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtbench___024root___eval_triggers__act(Vtbench___024root* vlSelf);

bool Vtbench___024root___eval_phase__act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtbench___024root___timing_resume(vlSelf);
        Vtbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtbench___024root___eval_phase__nba(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__nba\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__nba(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbench___024root___eval(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../00_src/../01_bench/tbench.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../00_src/../01_bench/tbench.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtbench___024root___eval_debug_assertions(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_debug_assertions\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
