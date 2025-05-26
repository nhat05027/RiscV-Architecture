// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbench.h for the primary calling header

#ifndef VERILATED_VTBENCH___024ROOT_H_
#define VERILATED_VTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tbench__DOT__i_clk;
        CData/*0:0*/ tbench__DOT__i_reset;
        CData/*0:0*/ tbench__DOT__dut__DOT__br_less;
        CData/*0:0*/ tbench__DOT__dut__DOT__br_equal;
        CData/*0:0*/ tbench__DOT__dut__DOT__ld_un;
        CData/*0:0*/ tbench__DOT__o_insn_vld;
        CData/*2:0*/ tbench__DOT__dut__DOT__imm_sel;
        CData/*0:0*/ tbench__DOT__dut__DOT__rd_wren;
        CData/*3:0*/ tbench__DOT__dut__DOT__alu_op;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__lsu_op;
        CData/*4:0*/ tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr;
        CData/*4:0*/ tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr;
        CData/*4:0*/ tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_62;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_63;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT____VdfgRegularize_hd76aa6c3_0_64;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0;
        CData/*0:0*/ tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v2;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v3;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v4;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v5;
        CData/*3:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_equal__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__br_less__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__ld_un__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__lsu_op__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ tbench__DOT__dut__DOT__CU__DOT__romAddr;
        SData/*13:0*/ tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr;
        SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v0;
        SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1;
    };
    struct {
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v1;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v2;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v3;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v4;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v5;
        SData/*13:0*/ __VdlyDim0__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6;
        SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v0;
        SData/*15:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v1;
        IData/*31:0*/ tbench__DOT__o_pc_debug;
        IData/*31:0*/ tbench__DOT__dut__DOT__instr;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__pc;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__pc_next;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__alu_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__wb_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__imm;
        IData/*24:0*/ tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__operand_a;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__operand_b;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__ld_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer;
        IData/*31:0*/ tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer;
        IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem__v6;
        IData/*31:0*/ __VdlyVal__tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer__v6;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp__1;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp__1;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__instr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__DP__DOT__alu_data__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*18:0*/, 2048> tbench__DOT__dut__DOT__CU__DOT__crom;
        VlUnpacked<IData/*31:0*/, 32> tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem;
        VlUnpacked<IData/*31:0*/, 16384> tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem;
        VlUnpacked<IData/*31:0*/, 16> tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbench___024root(Vtbench__Syms* symsp, const char* v__name);
    ~Vtbench___024root();
    VL_UNCOPYABLE(Vtbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
