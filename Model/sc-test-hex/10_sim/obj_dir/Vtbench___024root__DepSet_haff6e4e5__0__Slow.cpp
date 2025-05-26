// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x2f726f6dU;
    __Vtemp_1[2U] = 0x74657374U;
    __Vtemp_1[3U] = 0x2f30325fU;
    __Vtemp_1[4U] = 0x2e2eU;
    VL_READMEM_N(false, 19, 2048, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom)
                 , 0, ~0ULL);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc = 0U;
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x2f697361U;
    __Vtemp_2[2U] = 0x74657374U;
    __Vtemp_2[3U] = 0x2f30325fU;
    __Vtemp_2[4U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__IM__DOT__i_mem)
                 , 0, ~0ULL);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[1U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[2U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[3U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[4U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[5U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[6U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[7U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[8U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[9U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xaU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xbU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xcU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xdU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xeU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0xfU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x10U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x11U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x12U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x13U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x14U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x15U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x16U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x17U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x18U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x19U] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1aU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1bU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1cU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1dU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1eU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0x1fU] = 0U;
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__7 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__6 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__5 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__4 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__3 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__2 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    VL_WRITEF_NX("\nSINGLE CYCLE - ISA TEST\n\n",0);
    vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0U] = 0U;
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
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__0));
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__0 
        = vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp;
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
