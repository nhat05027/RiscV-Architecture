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
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("\nSINGLE CYCLE - ISA TEST\n\n",0);
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__1(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__1\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x20f2U;
    while ((__Vilp1 <= 0x3091U)) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__2(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__2\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x1152U;
    while ((__Vilp1 <= 0x20f1U)) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP__3(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP__3\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x1b2U;
    while ((__Vilp1 <= 0x1151U)) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
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
    while ((__Vilp1 <= 0x1b1U)) {
        vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[__Vilp1] = 0U;
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
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tbench.dut.DP.AL.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tbench.dut.DP.BR.lt_temp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__1(Vtbench___024root* vlSelf);
void Vtbench___024root___act_sequent__TOP__0(Vtbench___024root* vlSelf);

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
        Vtbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tbench__DOT__dut__DOT__instr = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
        [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr];
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
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
        = ((0x800U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc
            : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr]);
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
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
        = ((0x400U & vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
            [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr])
            ? vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm
            : vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
           [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr]);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra 
        = ((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a 
            >> 0x1fU) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0));
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tbench.dut.DP.AL.lt_temp)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tbench.dut.DP.BR.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tbench.i_reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tbench.dut.br_equal)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( tbench.dut.br_less)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( tbench.dut.instr)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge tbench.i_clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( tbench.dut.DP.pc)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @( tbench.dut.DP.alu_data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @( tbench.dut.ld_un)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @( tbench.dut.lsu_op)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tbench.dut.DP.AL.lt_temp)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tbench.dut.DP.BR.lt_temp)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tbench.i_reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tbench.dut.br_equal)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( tbench.dut.br_less)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( tbench.dut.instr)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge tbench.i_clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( tbench.dut.DP.pc)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @( tbench.dut.DP.alu_data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @( tbench.dut.ld_un)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @( tbench.dut.lsu_op)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vtbench___024root___ctor_var_reset(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___ctor_var_reset\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tbench__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__i_reset = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__dut__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsu_op = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__ld_un = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__CU__DOT__crom[__Vi0] = VL_RAND_RESET_I(19);
    }
    vlSelf->tbench__DOT__dut__DOT__CU__DOT__romAddr = VL_RAND_RESET_I(11);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr = VL_RAND_RESET_I(25);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__ld_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr = VL_RAND_RESET_I(14);
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_equal__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_less__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__instr__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__pc__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__alu_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__ld_un__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__lsu_op__0 = VL_RAND_RESET_I(2);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
