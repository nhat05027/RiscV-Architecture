// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbench___024root___eval_triggers__act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_triggers__act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__1));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tbench__DOT__i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tbench__DOT__i_reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0))));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__1 
        = vlSelfRef.tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 
        = vlSelfRef.tbench__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 
        = vlSelfRef.tbench__DOT__i_reset;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
