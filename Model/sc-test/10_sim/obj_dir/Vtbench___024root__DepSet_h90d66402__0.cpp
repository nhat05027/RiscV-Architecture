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
    Vtbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 
        = vlSelfRef.tbench__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 
        = vlSelfRef.tbench__DOT__i_reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_equal__0 
        = vlSelfRef.tbench__DOT__dut__DOT__br_equal;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_less__0 
        = vlSelfRef.tbench__DOT__dut__DOT__br_less;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__instr__0 
        = vlSelfRef.tbench__DOT__dut__DOT__instr;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__pc__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__alu_data__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__ld_un__0 
        = vlSelfRef.tbench__DOT__dut__DOT__ld_un;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__lsu_op__0 
        = vlSelfRef.tbench__DOT__dut__DOT__lsu_op;
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
    __Vtask_tsk_timeout__2__FINISH = 0x3b9aca05U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(__Vtask_tsk_timeout__2__FINISH)), 
                                         nullptr, "../00_src/../01_bench/tlib.svh", 
                                         21);
    VL_WRITEF_NX("\nTimeout...\n\nDUT is considered\tP A S S E D\n\n",0);
    VL_FINISH_MT("../00_src/../01_bench/tlib.svh", 22, "");
}

void Vtbench___024root___act_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf);

void Vtbench___024root___eval_act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtbench___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtbench___024root___act_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_sequent__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
        = __Vtemp_1;
    vlSelfRef.tbench__DOT__dut__DOT__br_less = (1U 
                                                & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (((~ 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                       >> 0xcU)) 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64)) 
                                                    ^ 
                                                    ((~ 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                       >> 0xcU)) 
                                                     & ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63)) 
                                                        & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62))))));
}

VL_INLINE_OPT void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___act_sequent__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
        = __Vtemp_1;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
        = ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
            ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                        | (- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op) 
                                            >> 3U))))) 
                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)
                    : (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                       | vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                              | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                           | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                          | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                         | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                        | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                        ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                            ? (((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra) 
                                << 0x1fU) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                             >> 1U))
                            : ((2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                    << 0x1eU) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 >> 2U))
                                : ((3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0x1dU) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 3U)) : (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 0x1cU) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                       >> 4U))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 0x1bU) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                        >> 5U))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                       << 0x1aU) 
                                                      | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                         >> 6U))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                       ? 
                                                      (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                        << 0x19U) 
                                                       | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                          >> 7U))
                                                       : 
                                                      (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                        << 0x18U) 
                                                       | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                          >> 8U)))))))))
                        : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                  | (0xaU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0xbU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                               | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                              | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                            ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                    << 0x17U) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 >> 9U))
                                : ((0xaU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0x16U) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0xaU)) : 
                                   ((0xbU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                         << 0x15U) 
                                        | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                           >> 0xbU))
                                     : ((0xcU == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                         ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                             << 0x14U) 
                                            | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                               >> 0xcU))
                                         : ((0xdU == 
                                             (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                             ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                 << 0x13U) 
                                                | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   >> 0xdU))
                                             : ((0xeU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                 ? 
                                                (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0x12U) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    >> 0xeU))
                                                 : 
                                                ((0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0x11U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0xfU))
                                                  : 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0x10U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0x10U)))))))))
                            : (((((((((0x11U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                      | (0x12U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                     | (0x13U == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                    | (0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                   | (0x15U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                  | (0x16U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0x17U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0x18U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                                ? ((0x11U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0xfU) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0x11U)) : 
                                   ((0x12U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                         << 0xeU) | 
                                        (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         >> 0x12U))
                                     : ((0x13U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                         ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                             << 0xdU) 
                                            | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                               >> 0x13U))
                                         : ((0x14U 
                                             == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                             ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   >> 0x14U))
                                             : ((0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                 ? 
                                                (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0xbU) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    >> 0x15U))
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0xaU) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0x16U))
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 9U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x17U))
                                                   : 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 8U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x18U)))))))))
                                : ((0x19U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 7U) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  >> 0x19U))
                                    : ((0x1aU == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                        ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                            << 6U) 
                                           | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              >> 0x1aU))
                                        : ((0x1bU == 
                                            (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                            ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                << 5U) 
                                               | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  >> 0x1bU))
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                ? (
                                                   ((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 4U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x1cU))
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 3U) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                       >> 0x1dU))
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 2U) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                        >> 0x1eU))
                                                     : 
                                                    ((0x1fU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                       << 1U) 
                                                      | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                         >> 0x1fU))
                                                      : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a))))))))))
                    : (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                       ^ vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
            : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp, 0x1fU)
                    : (1U & (((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                               >> 0x1fU) ^ ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                >> 0x1fU)) 
                                            & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                                               >> 0x1fU))) 
                             ^ ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                                                 >> 0x1fU))))))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                              | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                           | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                          | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                         | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                        | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                        ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                            ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                               << 1U) : ((2U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                          ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                             << 2U)
                                          : ((3U == 
                                              (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                              ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 << 3U)
                                              : ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 4U)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 5U)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    << 6U)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 7U)
                                                     : 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 8U))))))))
                        : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                  | (0xaU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0xbU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                               | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                              | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                            ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                   << 9U) : ((0xaU 
                                              == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                              ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 << 0xaU)
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0xbU)
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0xcU)
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    << 0xdU)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 0xeU)
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      << 0xfU)
                                                      : 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      << 0x10U))))))))
                            : (((((((((0x11U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                      | (0x12U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                     | (0x13U == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                    | (0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                   | (0x15U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                  | (0x16U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0x17U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0x18U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                                ? ((0x11U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       << 0x11U) : 
                                   ((0x12U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        << 0x12U) : 
                                    ((0x13U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                      ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         << 0x13U) : 
                                     ((0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                       ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                          << 0x14U)
                                       : ((0x15U == 
                                           (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                           ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              << 0x15U)
                                           : ((0x16U 
                                               == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                               ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0x16U)
                                               : ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x17U)
                                                   : 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x18U))))))))
                                : ((0x19U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       << 0x19U) : 
                                   ((0x1aU == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        << 0x1aU) : 
                                    ((0x1bU == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                      ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         << 0x1bU) : 
                                     ((0x1cU == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                       ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                          << 0x1cU)
                                       : ((0x1dU == 
                                           (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                           ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              << 0x1dU)
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                               ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0x1eU)
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x1fU)
                                                   : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a))))))))))
                    : ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                        + (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                           ^ (- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0))))) 
                       + (1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op) 
                                >> 3U))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc_next 
        = ((0x40000U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data
            : ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__wb_data 
        = ((0x10U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc)
            : ((8U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
                ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data
                : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data));
}

void Vtbench___024root___nba_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__1(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__2(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__3(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__4(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__6(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__7(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__8(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__9(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_sequent__TOP__10(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__1(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__2(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__3(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__4(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__5(Vtbench___024root* vlSelf);
void Vtbench___024root___nba_comb__TOP__6(Vtbench___024root* vlSelf);

void Vtbench___024root___eval_nba(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_nba\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0xe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x70ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x104ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x7cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_sequent__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x10cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x17cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x10eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x17dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x17eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xf7dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtbench___024root___nba_comb__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0x14U == vlSelfRef.tbench__DOT__o_pc_debug)))) {
        VL_WRITEF_NX("%s",0,8,(0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                               [0U]));
    }
    if (VL_UNLIKELY(((0x1cU == vlSelfRef.tbench__DOT__o_pc_debug)))) {
        VL_WRITEF_NX("\nEND of ISA test\n\n",0);
        VL_FINISH_MT("../00_src/../01_bench/scoreboard.sv", 27, "");
    }
    if (vlSelfRef.tbench__DOT__dut__DOT__mem_wren) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer = 1U;
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
            = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data;
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer 
            = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
            [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr];
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer = 0U;
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 = 0U;
    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 = 0U;
    if (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer) {
        if ((0x1000U == (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                         >> 0x10U))) {
            if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op))) {
                if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                    if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                        vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 
                            = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                        vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 
                            = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                       >> 0xcU));
                        vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 = 1U;
                    } else {
                        vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 
                            = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                        vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 
                            = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                       >> 0xcU));
                        vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 = 1U;
                    }
                } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                    if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                        if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                           >> 0xcU));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 = 1U;
                        } else {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 
                                = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                           >> 0xcU));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 = 1U;
                        }
                    } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                        vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 
                            = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                        vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 
                            = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                       >> 0xcU));
                        vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 = 1U;
                    } else {
                        vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 
                            = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                        vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 
                            = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                       >> 0xcU));
                        vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 = 1U;
                    }
                }
            } else {
                vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 
                    = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer;
                vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 
                    = (0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                               >> 0xcU));
                vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 = 1U;
            }
        }
        if ((0x1000U != (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                         >> 0x10U))) {
            if ((0U == (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                        >> 0x10U))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op))) {
                    if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 
                                = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 
                                = (0x2000U | (0x1fffU 
                                              & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                 >> 2U)));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 = 1U;
                        } else {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 
                                = (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 
                                = (0x2000U | (0x1fffU 
                                              & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                 >> 2U)));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 = 1U;
                        }
                    } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                        if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                            if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                                vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                                vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 
                                    = (0x2000U | (0x1fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                     >> 2U)));
                                vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 = 1U;
                            } else {
                                vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 
                                    = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                                vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 
                                    = (0x2000U | (0x1fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                     >> 2U)));
                                vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 = 1U;
                            }
                        } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer)) {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 
                                = (0x2000U | (0x1fffU 
                                              & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                 >> 2U)));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 = 1U;
                        } else {
                            vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 
                                = (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer);
                            vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 
                                = (0x2000U | (0x1fffU 
                                              & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                 >> 2U)));
                            vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 = 1U;
                        }
                    }
                } else {
                    vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 
                        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer;
                    vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 
                        = (0x2000U | (0x1fffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer 
                                                 >> 2U)));
                    vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0;
    __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0;
    __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0;
    __VdlySet__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 = 0;
    // Body
    __VdlySet__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__i_reset)))) {
        if (((IData)(vlSelfRef.tbench__DOT__dut__DOT__rd_wren) 
             & (0U != (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer)))) {
            __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 
                = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer;
            __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 
                = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer;
            __VdlySet__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0 = 1U;
        }
        vlSelfRef.tbench__DOT__o_insn_vld = (1U & (
                                                   vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                   [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                   >> 0xdU));
        vlSelfRef.tbench__DOT__o_pc_debug = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc;
    }
    if (__VdlySet__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0] 
            = __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem__v0;
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__3(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__3\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tbench__DOT__i_reset) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data = 0U;
    }
    if ((0x1000U == (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                     >> 0x10U))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op))) {
            if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                              [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                        >> 0xcU))] 
                              >> 0x10U));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                 [(0xfU 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                      >> 0xcU))] 
                                                 >> 0x1fU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 0x10U));
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                              [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                        >> 0xcU))]));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                 [(0xfU 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                      >> 0xcU))] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 0x10U));
                }
            } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                    if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                               | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                  [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                            >> 0xcU))] 
                                  >> 0x18U));
                        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                            = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                               | ((- (IData)((1U & 
                                              ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                [(0xfU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                     >> 0xcU))] 
                                                >> 0x1fU) 
                                               & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                                  << 8U));
                    } else {
                        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                               | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                           [(0xfU & 
                                             (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                              >> 0xcU))] 
                                           >> 0x10U)));
                        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                            = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                               | ((- (IData)((1U & 
                                              ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                [(0xfU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                     >> 0xcU))] 
                                                >> 0x17U) 
                                               & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                                  << 8U));
                    }
                } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                 >> 0xcU))] 
                                       >> 8U)));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                 [(0xfU 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                      >> 0xcU))] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 8U));
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                              [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                        >> 0xcU))]));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                                 [(0xfU 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                      >> 0xcU))] 
                                                 >> 7U) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 8U));
                }
            }
        } else {
            vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [(0xfU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                          >> 0xcU))];
        }
    } else if ((0x1001U == (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                            >> 0x10U))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op))) {
            if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)
                        ? 0x1234U : 0x5678U);
            } else if ((IData)((3U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)
                        ? ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)
                            ? 0x12U : 0x34U) : ((1U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)
                                                 ? 0x56U
                                                 : 0x78U));
            }
        } else {
            vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data = 0x12345678U;
        }
    } else if ((0U == (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                       >> 0x10U))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op))) {
            if ((IData)((2U == (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsu_op)))) {
                if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                              [(0x2000U | (0x1fffU 
                                           & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                              >> 2U)))] 
                              >> 0x10U));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                                 [(0x2000U 
                                                   | (0x1fffU 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                         >> 2U)))] 
                                                 >> 0x1fU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 0x10U));
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                              [(0x2000U | (0x1fffU 
                                           & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                              >> 2U)))]));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                                 [(0x2000U 
                                                   | (0x1fffU 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                         >> 2U)))] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 0x10U));
                }
            } else if ((2U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                              [(0x2000U | (0x1fffU 
                                           & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                              >> 2U)))] 
                              >> 0x18U));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                                 [(0x2000U 
                                                   | (0x1fffU 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                         >> 2U)))] 
                                                 >> 0x1fU) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 8U));
                } else {
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                       [(0x2000U | 
                                         (0x1fffU & 
                                          (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                           >> 2U)))] 
                                       >> 0x10U)));
                    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                        = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                           | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                                 [(0x2000U 
                                                   | (0x1fffU 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                         >> 2U)))] 
                                                 >> 0x17U) 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                              << 8U));
                }
            } else if ((1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data)) {
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                       | (0xffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                   [(0x2000U | (0x1fffU 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                   >> 2U)))] 
                                   >> 8U)));
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                       | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                             [(0x2000U 
                                               | (0x1fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                     >> 2U)))] 
                                             >> 0xfU) 
                                            & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                          << 8U));
            } else {
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                       | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                          [(0x2000U | (0x1fffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                  >> 2U)))]));
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                    = ((0xffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data) 
                       | ((- (IData)((1U & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                             [(0x2000U 
                                               | (0x1fffU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                                     >> 2U)))] 
                                             >> 7U) 
                                            & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__ld_un)))))) 
                          << 8U));
            }
        } else {
            vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data 
                = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [(0x2000U | (0x1fffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
                                        >> 2U)))];
        }
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__4(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__4\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tbench__DOT__dut__DOT__rd_wren) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer 
            = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__wb_data;
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer 
            = (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                        [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
                        >> 7U));
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__6(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__6\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0] 
            = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1] 
            = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1]) 
               | (IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2] 
            = ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3] 
            = ((0xff00ffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4] 
            = ((0xffff00ffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5] 
            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5]) 
               | (IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6] 
            = vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6;
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0] 
            = ((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1] 
            = ((0xffff0000U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1]) 
               | (IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2] 
            = ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3] 
            = ((0xff00ffffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4] 
            = ((0xffff00ffU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5] 
            = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                [vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5]) 
               | (IData)(vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5));
    }
    if (vlSelfRef.__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[vlSelfRef.__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6] 
            = vlSelfRef.__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6;
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__7(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__7\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr 
        = (0x1fffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc 
                      >> 2U));
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__8(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__8\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tbench__DOT__i_reset) {
        vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr = 0U;
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc = 0U;
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc 
            = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc_next;
    }
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__9(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__9\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr 
        = (((0x400U & (vlSelfRef.tbench__DOT__dut__DOT__instr 
                       >> 0x14U)) | (0x380U & (vlSelfRef.tbench__DOT__dut__DOT__instr 
                                               >> 5U))) 
           | ((0x7cU & vlSelfRef.tbench__DOT__dut__DOT__instr) 
              | (((IData)(vlSelfRef.tbench__DOT__dut__DOT__br_less) 
                  << 1U) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__br_equal))));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
        = (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
           >> 7U);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr 
        = (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                    [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
                    >> 0x14U));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr 
        = (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                    [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
                    >> 0xfU));
    vlSelfRef.tbench__DOT__dut__DOT__instr = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
        [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr];
}

VL_INLINE_OPT void Vtbench___024root___nba_sequent__TOP__10(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_sequent__TOP__10\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__rd_wren = (1U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                   [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                   >> 0xeU));
    vlSelfRef.tbench__DOT__dut__DOT__mem_wren = (1U 
                                                 & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                    [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                    >> 5U));
    vlSelfRef.tbench__DOT__dut__DOT__lsu_op = (3U & 
                                               (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                >> 1U));
    vlSelfRef.tbench__DOT__dut__DOT__ld_un = (1U & 
                                              vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                              [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr]);
    vlSelfRef.tbench__DOT__dut__DOT__alu_op = (0xfU 
                                               & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                  >> 6U));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                 [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                 >> 9U));
    vlSelfRef.tbench__DOT__dut__DOT__imm_sel = (7U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                   [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                   >> 0xfU));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_0;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_0 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_1;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_1 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_2;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_2 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_3;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_3 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_4;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_4 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_5;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_5 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_6;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_6 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_7;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_7 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_8;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_8 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_9;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_9 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_10;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_10 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_11;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_11 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_12;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_12 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_13;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_13 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_14;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_14 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_15;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_15 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_16;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_16 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_17;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_17 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_18;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_18 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_19;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_19 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_20;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_20 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_21;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_21 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_22;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_22 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_23;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_23 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_24;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_24 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_25;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_25 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_26;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_26 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_27;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_27 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_28;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_28 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_29;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_29 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_30;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_30 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_31;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_31 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_32;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_32 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_33;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_33 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_34;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_34 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_35;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_35 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_36;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_36 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_37;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_37 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_38;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_38 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_39;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_39 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_40;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_40 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_41;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_41 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_42;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_42 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_43;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_43 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_44;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_44 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_45;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_45 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_46;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_46 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_47;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_47 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_48;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_48 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_49;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_49 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_50;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_50 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_51;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_51 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_52;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_52 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_53;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_53 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_54;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_54 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_55;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_55 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_56;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_56 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_57;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_57 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_58;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_58 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_59;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_59 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_60;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_60 = 0;
    CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_61;
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_61 = 0;
    // Body
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_61 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x1eU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_59 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x1dU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_57 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x1cU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_55 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x1bU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_53 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x1aU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_51 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x19U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_49 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x18U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_47 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x17U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_45 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x16U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_43 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x15U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_41 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x14U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_39 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x13U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_37 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x12U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_35 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x11U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_33 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0x10U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_31 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xfU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_29 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xeU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_27 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xdU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_25 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xcU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_23 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xbU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_21 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 0xaU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_19 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 9U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_17 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 8U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_15 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 7U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_13 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 6U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_11 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 5U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_9 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 4U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_7 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 3U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_5 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 2U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_3 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
                 >> 1U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_1 
        = (1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr]);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63 
        = (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr] 
           >> 0x1fU);
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_60 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x1eU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_58 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x1dU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_56 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x1cU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_54 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x1bU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_52 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x1aU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_50 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x19U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_48 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x18U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_46 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x17U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_44 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x16U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_42 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x15U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_40 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x14U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_38 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x13U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_36 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x12U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_34 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x11U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_32 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0x10U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_30 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xfU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_28 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xeU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_26 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xdU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_24 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xcU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_22 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xbU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_20 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 0xaU));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_18 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 9U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_16 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 8U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_14 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 7U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_12 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 6U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_10 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 5U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_8 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 4U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_6 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 3U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_4 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 2U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_2 
        = (1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                 [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
                 >> 1U));
    tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_0 
        = (1U & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr]);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62 
        = (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr] 
           >> 0x1fU);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
        = ((((((((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62) 
                 ^ (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63)) 
                << 0x1fU) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_60) 
                              ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_61)) 
                             << 0x1eU)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_58) 
                                             ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_59)) 
                                            << 0x1dU) 
                                           | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_56) 
                                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_57)) 
                                              << 0x1cU))) 
             | (((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_54) 
                   ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_55)) 
                  << 0x1bU) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_52) 
                                ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_53)) 
                               << 0x1aU)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_50) 
                                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_51)) 
                                              << 0x19U) 
                                             | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_48) 
                                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_49)) 
                                                << 0x18U)))) 
            | ((((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_46) 
                   ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_47)) 
                  << 0x17U) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_44) 
                                ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_45)) 
                               << 0x16U)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_42) 
                                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_43)) 
                                              << 0x15U) 
                                             | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_40) 
                                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_41)) 
                                                << 0x14U))) 
               | (((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_38) 
                     ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_39)) 
                    << 0x13U) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_36) 
                                  ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_37)) 
                                 << 0x12U)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_34) 
                                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_35)) 
                                                << 0x11U) 
                                               | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_32) 
                                                   ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_33)) 
                                                  << 0x10U))))) 
           | (((((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_30) 
                   ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_31)) 
                  << 0xfU) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_28) 
                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_29)) 
                              << 0xeU)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_26) 
                                             ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_27)) 
                                            << 0xdU) 
                                           | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_24) 
                                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_25)) 
                                              << 0xcU))) 
               | (((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_22) 
                     ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_23)) 
                    << 0xbU) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_20) 
                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_21)) 
                                << 0xaU)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_18) 
                                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_19)) 
                                              << 9U) 
                                             | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_16) 
                                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_17)) 
                                                << 8U)))) 
              | ((((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_14) 
                     ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_15)) 
                    << 7U) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_12) 
                               ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_13)) 
                              << 6U)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_10) 
                                           ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_11)) 
                                          << 5U) | 
                                         (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_8) 
                                           ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_9)) 
                                          << 4U))) 
                 | (((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_6) 
                       ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_7)) 
                      << 3U) | (((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_4) 
                                 ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_5)) 
                                << 2U)) | ((((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_2) 
                                             ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_3)) 
                                            << 1U) 
                                           | ((IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                                              ^ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_1)))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64 
        = ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62)) 
           & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63));
    vlSelfRef.tbench__DOT__dut__DOT__br_equal = (0xffffffffU 
                                                 == 
                                                 (~ vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
        = (((((((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64) 
                << 0x1fU) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_60)) 
                              & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_61)) 
                             << 0x1eU)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_58)) 
                                             & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_59)) 
                                            << 0x1dU) 
                                           | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_56)) 
                                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_57)) 
                                              << 0x1cU))) 
             | (((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_54)) 
                   & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_55)) 
                  << 0x1bU) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_52)) 
                                & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_53)) 
                               << 0x1aU)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_50)) 
                                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_51)) 
                                              << 0x19U) 
                                             | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_48)) 
                                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_49)) 
                                                << 0x18U)))) 
            | ((((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_46)) 
                   & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_47)) 
                  << 0x17U) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_44)) 
                                & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_45)) 
                               << 0x16U)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_42)) 
                                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_43)) 
                                              << 0x15U) 
                                             | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_40)) 
                                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_41)) 
                                                << 0x14U))) 
               | (((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_38)) 
                     & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_39)) 
                    << 0x13U) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_36)) 
                                  & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_37)) 
                                 << 0x12U)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_34)) 
                                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_35)) 
                                                << 0x11U) 
                                               | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_32)) 
                                                   & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_33)) 
                                                  << 0x10U))))) 
           | (((((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_30)) 
                   & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_31)) 
                  << 0xfU) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_28)) 
                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_29)) 
                              << 0xeU)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_26)) 
                                             & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_27)) 
                                            << 0xdU) 
                                           | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_24)) 
                                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_25)) 
                                              << 0xcU))) 
               | (((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_22)) 
                     & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_23)) 
                    << 0xbU) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_20)) 
                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_21)) 
                                << 0xaU)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_18)) 
                                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_19)) 
                                              << 9U) 
                                             | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_16)) 
                                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_17)) 
                                                << 8U)))) 
              | ((((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_14)) 
                     & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_15)) 
                    << 7U) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_12)) 
                               & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_13)) 
                              << 6U)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_10)) 
                                           & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_11)) 
                                          << 5U) | 
                                         (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_8)) 
                                           & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_9)) 
                                          << 4U))) 
                 | (((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_6)) 
                       & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_7)) 
                      << 3U) | (((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_4)) 
                                 & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_5)) 
                                << 2U)) | ((((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_2)) 
                                             & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_3)) 
                                            << 1U) 
                                           | ((~ (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_0)) 
                                              & (IData)(tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_1)))))));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
        = ((0x800U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc
            : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr]);
    if ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel))) {
            if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel)))) {
                vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm 
                    = (0xfffff000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                      << 7U));
            }
        }
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm 
            = ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                          >> 0x18U)))) 
                        << 0xcU) | (0xfffU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                              >> 0xdU)))
                    : (((- (IData)((1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                          >> 0x18U)))) 
                        << 0x14U) | (((0xff000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                                   << 7U)) 
                                      | (0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                                   >> 2U))) 
                                     | ((0x7e0U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                                   >> 0xdU)) 
                                        | (0x1eU & 
                                           (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                            >> 0xdU))))))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                               << 0xbU)) 
                                    | ((0x7e0U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                                  >> 0xdU)) 
                                       | (0x1eU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr))))
                    : (((- (IData)((1U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr 
                                               >> 0xdU)) 
                                    | (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr)))));
    }
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra 
        = ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
            >> 0x1fU) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
        = ((0x400U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm
            : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr]);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
        = (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
           ^ vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
        = ((((((0x80000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 0x1fU)) << 0x1fU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
               | (0x40000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 0x1eU)) << 0x1eU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
              | ((0x20000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 0x1dU)) << 0x1dU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                 | (0x10000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))) 
             | (((0x8000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                     >> 0x1bU)) << 0x1bU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                 | (0x4000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                | ((0x2000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x1000000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         >> 0x18U)) 
                                     << 0x18U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))))) 
            | ((((0x800000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 0x17U)) << 0x17U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                 | (0x400000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                | ((0x200000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x100000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0x14U)) 
                                    << 0x14U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))) 
               | (((0x80000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x40000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       >> 0x12U)) << 0x12U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                  | ((0x20000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       >> 0x11U)) << 0x11U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                     | (0x10000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         >> 0x10U)) 
                                     << 0x10U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))))) 
           | (((((0x8000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                  >> 0xfU)) << 0xfU) 
                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                 | (0x4000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                | ((0x2000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x1000U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 0xcU)) << 0xcU) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))) 
               | (((0x800U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x400U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                     >> 0xaU)) << 0xaU) 
                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                  | ((0x200U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                     >> 9U)) << 9U) 
                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                     | (0x100U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       >> 8U)) << 8U) 
                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))))) 
              | ((((0x80U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                  >> 7U)) << 7U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                   | (0x40U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 6U)) << 6U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                  | ((0x20U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                    >> 5U)) << 5U) 
                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                     | (0x10U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                      >> 4U)) << 4U) 
                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))) 
                 | (((8U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                 >> 3U)) << 3U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                     | (4U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                   >> 2U)) << 2U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                    | ((2U & (((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                   >> 1U)) << 1U) & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                       | (1U & ((~ vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a) 
                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))))));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__3(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__3\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__4(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__4\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x80000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))) 
                     | (0x40000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x1eU)) 
                                           << 0x1eU))))) 
                    | ((0x20000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x1dU)) 
                                           << 0x1dU)))) 
                       | (0x10000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0x1cU)) 
                                               << 0x1cU)))))) 
                   | (((0x8000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0x1bU)) 
                                          << 0x1bU)))) 
                       | (0x4000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x1aU)) 
                                              << 0x1aU))))) 
                      | ((0x2000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x19U)) 
                                              << 0x19U)))) 
                         | (0x1000000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x18U)) 
                                                << 0x18U))))))) 
                  | ((((0x800000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0x17U)) 
                                                   << 0x17U)))) 
                       | (0x400000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x16U)) 
                                           << 0x16U))))) 
                      | ((0x200000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0x15U)) 
                                           << 0x15U)))) 
                         | (0x100000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                         | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                             << 1U) 
                                            & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0x14U)) 
                                               << 0x14U)))))) 
                     | (((0x80000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0x13U)) 
                                          << 0x13U)))) 
                         | (0x40000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x12U)) 
                                              << 0x12U))))) 
                        | ((0x20000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x11U)) 
                                              << 0x11U)))) 
                           | (0x10000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                          | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                              << 1U) 
                                             & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 0x10U)) 
                                                << 0x10U)))))))) 
                 | (((((0x8000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 0xfU)) 
                                                 << 0xfU)))) 
                       | (0x4000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0xeU)) 
                                                   << 0xeU))))) 
                      | ((0x2000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 0xdU)) 
                                                   << 0xdU)))) 
                         | (0x1000U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 0xcU)) 
                                           << 0xcU)))))) 
                     | (((0x800U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                    >> 0xbU)) 
                                                  << 0xbU)))) 
                         | (0x400U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 0xaU)) 
                                          << 0xaU))))) 
                        | ((0x200U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                          << 1U) & 
                                         ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 9U)) 
                                          << 9U)))) 
                           | (0x100U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                        | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                            << 1U) 
                                           & ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 8U)) 
                                              << 8U))))))) 
                    | ((((0x80U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                       << 1U) & ((~ 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                   >> 7U)) 
                                                 << 7U)))) 
                         | (0x40U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 6U)) 
                                                   << 6U))))) 
                        | ((0x20U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                     | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                         << 1U) & (
                                                   (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                     >> 5U)) 
                                                   << 5U)))) 
                           | (0x10U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                       | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                           << 1U) & 
                                          ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                               >> 4U)) 
                                           << 4U)))))) 
                       | (((8U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                      << 1U) & ((~ 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                  >> 3U)) 
                                                << 3U)))) 
                           | (4U & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        << 1U) & ((~ 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                                    >> 2U)) 
                                                  << 2U))))) 
                          | ((2U & ((0xfffffffeU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B) 
                                    | ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                        & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B 
                                              >> 1U))) 
                                       << 1U))) | (1U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
        = __Vtemp_1;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data 
        = ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
            ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                        | (- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op) 
                                            >> 3U))))) 
                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)
                    : (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                       | vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                              | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                           | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                          | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                         | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                        | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                        ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                            ? (((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra) 
                                << 0x1fU) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                             >> 1U))
                            : ((2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                    << 0x1eU) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 >> 2U))
                                : ((3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0x1dU) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 3U)) : (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 0x1cU) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                       >> 4U))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 0x1bU) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                        >> 5U))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                       << 0x1aU) 
                                                      | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                         >> 6U))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                       ? 
                                                      (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                        << 0x19U) 
                                                       | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                          >> 7U))
                                                       : 
                                                      (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                        << 0x18U) 
                                                       | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                          >> 8U)))))))))
                        : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                  | (0xaU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0xbU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                               | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                              | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                            ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                    << 0x17U) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 >> 9U))
                                : ((0xaU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0x16U) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0xaU)) : 
                                   ((0xbU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                         << 0x15U) 
                                        | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                           >> 0xbU))
                                     : ((0xcU == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                         ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                             << 0x14U) 
                                            | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                               >> 0xcU))
                                         : ((0xdU == 
                                             (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                             ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                 << 0x13U) 
                                                | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   >> 0xdU))
                                             : ((0xeU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                 ? 
                                                (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0x12U) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    >> 0xeU))
                                                 : 
                                                ((0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0x11U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0xfU))
                                                  : 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0x10U) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0x10U)))))))))
                            : (((((((((0x11U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                      | (0x12U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                     | (0x13U == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                    | (0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                   | (0x15U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                  | (0x16U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0x17U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0x18U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                                ? ((0x11U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 0xfU) | 
                                       (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        >> 0x11U)) : 
                                   ((0x12U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                         << 0xeU) | 
                                        (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         >> 0x12U))
                                     : ((0x13U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                         ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                             << 0xdU) 
                                            | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                               >> 0x13U))
                                         : ((0x14U 
                                             == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                             ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   >> 0x14U))
                                             : ((0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                 ? 
                                                (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                  << 0xbU) 
                                                 | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    >> 0x15U))
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                   << 0xaU) 
                                                  | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     >> 0x16U))
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 9U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x17U))
                                                   : 
                                                  (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 8U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x18U)))))))))
                                : ((0x19U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                        << 7U) | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  >> 0x19U))
                                    : ((0x1aU == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                        ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                            << 6U) 
                                           | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              >> 0x1aU))
                                        : ((0x1bU == 
                                            (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                            ? (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                << 5U) 
                                               | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  >> 0x1bU))
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                ? (
                                                   ((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                    << 4U) 
                                                   | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      >> 0x1cU))
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                     << 3U) 
                                                    | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                       >> 0x1dU))
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                      << 2U) 
                                                     | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                        >> 0x1eU))
                                                     : 
                                                    ((0x1fU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra))) 
                                                       << 1U) 
                                                      | (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                         >> 0x1fU))
                                                      : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a))))))))))
                    : (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                       ^ vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
            : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp, 0x1fU)
                    : (1U & (((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                               >> 0x1fU) ^ ((~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                >> 0x1fU)) 
                                            & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                                               >> 0x1fU))) 
                             ^ ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                                                 >> 0x1fU))))))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op))
                    ? (((((((((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                              | (2U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (3U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (4U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                           | (5U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                          | (6U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                         | (7U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                        | (8U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                        ? ((1U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                            ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                               << 1U) : ((2U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                          ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                             << 2U)
                                          : ((3U == 
                                              (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                              ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 << 3U)
                                              : ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 4U)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 5U)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    << 6U)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 7U)
                                                     : 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 8U))))))))
                        : (((((((((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                  | (0xaU == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0xbU == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0xcU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                               | (0xdU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                              | (0xeU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                             | (0xfU == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                            | (0x10U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                            ? ((9U == (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                   << 9U) : ((0xaU 
                                              == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                              ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                 << 0xaU)
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0xbU)
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0xcU)
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                    << 0xdU)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                     << 0xeU)
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      << 0xfU)
                                                      : 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                      << 0x10U))))))))
                            : (((((((((0x11U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)) 
                                      | (0x12U == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                     | (0x13U == (0x1fU 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                    | (0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                   | (0x15U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                  | (0x16U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                 | (0x17U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))) 
                                | (0x18U == (0x1fU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b)))
                                ? ((0x11U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       << 0x11U) : 
                                   ((0x12U == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        << 0x12U) : 
                                    ((0x13U == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                      ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         << 0x13U) : 
                                     ((0x14U == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                       ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                          << 0x14U)
                                       : ((0x15U == 
                                           (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                           ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              << 0x15U)
                                           : ((0x16U 
                                               == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                               ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0x16U)
                                               : ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x17U)
                                                   : 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x18U))))))))
                                : ((0x19U == (0x1fU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                    ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                       << 0x19U) : 
                                   ((0x1aU == (0x1fU 
                                               & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                     ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                        << 0x1aU) : 
                                    ((0x1bU == (0x1fU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                      ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                         << 0x1bU) : 
                                     ((0x1cU == (0x1fU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                       ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                          << 0x1cU)
                                       : ((0x1dU == 
                                           (0x1fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                           ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                              << 0x1dU)
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                               ? (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                  << 0x1eU)
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b))
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                                                   << 0x1fU)
                                                   : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a))))))))))
                    : ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
                        + (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                           ^ (- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0))))) 
                       + (1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__alu_op) 
                                >> 3U))))));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc_next 
        = ((0x40000U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data
            : ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__5(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__5\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__br_less = (1U 
                                                & ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (((~ 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                       >> 0xcU)) 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64)) 
                                                    ^ 
                                                    ((~ 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                                       [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                                       >> 0xcU)) 
                                                     & ((~ (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63)) 
                                                        & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62))))));
}

VL_INLINE_OPT void Vtbench___024root___nba_comb__TOP__6(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___nba_comb__TOP__6\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__wb_data 
        = ((0x10U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc)
            : ((8U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
                ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data
                : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data));
}

void Vtbench___024root___timing_resume(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___timing_resume\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtbench___024root___eval_triggers__act(Vtbench___024root* vlSelf);

bool Vtbench___024root___eval_phase__act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<13> __VpreTriggered;
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
