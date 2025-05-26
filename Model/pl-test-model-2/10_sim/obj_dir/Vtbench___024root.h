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
        CData/*0:0*/ tbench__DOT__o_insn_vld;
        CData/*0:0*/ tbench__DOT__o_mispred;
        CData/*0:0*/ tbench__DOT__o_ctrl;
        CData/*0:0*/ tbench__DOT__dut__DOT__pc_stall;
        CData/*0:0*/ tbench__DOT__dut__DOT__if_id_flush;
        CData/*2:0*/ tbench__DOT__dut__DOT__id_imm_sel;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_insn_vld;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_pc_sel;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_br_un;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_opa_sel;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_opb_sel;
        CData/*3:0*/ tbench__DOT__dut__DOT__ex_alu_op;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_branch_cmd;
        CData/*2:0*/ tbench__DOT__dut__DOT__ex_branch_type;
        CData/*1:0*/ tbench__DOT__dut__DOT__ex_forward_a;
        CData/*1:0*/ tbench__DOT__dut__DOT__ex_forward_b;
        CData/*4:0*/ tbench__DOT__dut__DOT__ex_rs1_addr;
        CData/*4:0*/ tbench__DOT__dut__DOT__ex_rs2_addr;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_mem_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__ex_lsu_op;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_ld_un;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_rd_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__ex_wb_sel;
        CData/*4:0*/ tbench__DOT__dut__DOT__ex_wb_addr;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_jmp;
        CData/*0:0*/ tbench__DOT__dut__DOT__ex_br_jmp;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_insn_vld;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_ctrl;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_mispred;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_mem_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__mem_lsu_op;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_ld_un;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_rd_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__mem_wb_sel;
        CData/*4:0*/ tbench__DOT__dut__DOT__mem_wb_addr;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_mem_read;
        CData/*0:0*/ tbench__DOT__dut__DOT__wb_rd_wren;
        CData/*1:0*/ tbench__DOT__dut__DOT__wb_wb_sel;
        CData/*4:0*/ tbench__DOT__dut__DOT__wb_wb_addr;
        CData/*0:0*/ tbench__DOT__dut__DOT__wb_mem_read;
        CData/*0:0*/ tbench__DOT__dut__DOT__temp_rd_wren;
        CData/*4:0*/ tbench__DOT__dut__DOT__temp_wb_addr;
        CData/*0:0*/ tbench__DOT__dut__DOT__mem_branch_taken;
        CData/*0:0*/ tbench__DOT__dut__DOT__AL__DOT__sign_bit_sra;
        CData/*0:0*/ tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT____VdfgRegularize_hd76aa6c3_0_64;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_reset__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tbench__DOT__dut__DOT__CU__DOT__romAddr;
        IData/*31:0*/ tbench__DOT__o_pc_debug;
        IData/*31:0*/ tbench__DOT__dut__DOT__pc_next;
        IData/*31:0*/ tbench__DOT__dut__DOT__if_pc;
        IData/*31:0*/ tbench__DOT__dut__DOT__id_pc;
        IData/*31:0*/ tbench__DOT__dut__DOT__id_imm;
        IData/*31:0*/ tbench__DOT__dut__DOT__id_instr;
        IData/*31:0*/ tbench__DOT__dut__DOT__operand_a;
        IData/*31:0*/ tbench__DOT__dut__DOT__operand_b;
        IData/*31:0*/ tbench__DOT__dut__DOT__ex_alu_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__ex_pc;
    };
    struct {
        IData/*31:0*/ tbench__DOT__dut__DOT__ex_rs1_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__ex_rs2_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__ex_imm;
        IData/*31:0*/ tbench__DOT__dut__DOT__mem_alu_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__mem_pc;
        IData/*31:0*/ tbench__DOT__dut__DOT__mem_rs2_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__mem_pc_four;
        IData/*31:0*/ tbench__DOT__dut__DOT__mem_alu_pc_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__wb_alu_pc_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__wb_ld_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__wb_wb_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__temp_wb_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__fw_a;
        IData/*31:0*/ tbench__DOT__dut__DOT__fw_b;
        IData/*31:0*/ tbench__DOT__dut__DOT__AL__DOT__A_xor_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__AL__DOT__not_A_and_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__AL__DOT__lt_temp;
        IData/*31:0*/ tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__A_xor_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__not_A_and_B;
        IData/*31:0*/ tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__AL__DOT__lt_temp__1;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tbench__DOT__dut__DOT__BRC__DOT__branchcompare__DOT__lt_temp__1;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*18:0*/, 512> tbench__DOT__dut__DOT__CU__DOT__crom;
        VlUnpacked<IData/*31:0*/, 32> tbench__DOT__dut__DOT__RF__DOT__regfile_mem;
        VlUnpacked<IData/*31:0*/, 16384> tbench__DOT__dut__DOT__LS__DOT__d_mem;
        VlUnpacked<IData/*31:0*/, 16> tbench__DOT__dut__DOT__LS__DOT__io_buffer;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    double tbench__DOT__scoreboard__DOT__num_cycle;
    double tbench__DOT__scoreboard__DOT__num_insn;
    double tbench__DOT__scoreboard__DOT__num_ctrl;
    double tbench__DOT__scoreboard__DOT__num_mispred;
    double tbench__DOT__scoreboard__DOT__ipc;
    double tbench__DOT__scoreboard__DOT__misprd_rate;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
