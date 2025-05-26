// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtbench__Syms.h"


VL_ATTR_COLD void Vtbench___024root__trace_init_sub__TOP__0(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_init_sub__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_insn_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"o_pc_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"o_io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"o_io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"o_io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"o_io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"o_io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"o_io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"o_io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"o_io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"o_insn_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+77,0,"rd_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"insn_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"br_un",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"br_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"br_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"opa_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"opb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"mem_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"lsu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"ld_un",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"o_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"o_imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+77,0,"o_rd_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"o_insn_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_br_un",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"i_br_less",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"i_br_equal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_opa_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"o_opb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"o_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"o_mem_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"o_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"o_lsu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"o_ld_un",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"romAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("DP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"i_pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"o_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"i_imm_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+77,0,"i_rd_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"i_insn_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"o_br_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"i_opa_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"i_opb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"i_mem_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"i_wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"i_lsu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"i_ld_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"o_insn_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"pc_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"ld_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("AL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i_op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"i_op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"o_alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+118,0,"SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"temp_i_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"sign_bit_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"A_lt_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"A_xor_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"not_A_and_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"lt_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("BR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"o_br_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"A_xor_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"not_A_and_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"lt_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+76,0,"i_imm_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,0,"o_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+125,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("LS", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"i_st_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"i_lsu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"i_ld_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"i_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"o_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"sw_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("io_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1,0,"i_st_data_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_lsu_addr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"i_lsu_wren_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"pc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+99,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"i_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"i_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"i_rd_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+109,0,"rd_addr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"rd_data_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"o_pc_debug",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"o_io_ledr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"o_io_ledg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_io_hex0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_hex2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"o_io_hex3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"o_io_hex4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"o_io_hex5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"o_io_hex6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"o_io_hex7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"o_io_lcd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtbench___024root__trace_init_top(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_init_top\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtbench___024root__trace_register(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_register\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_const_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_const_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+111,(0x12345678U),32);
    bufp->fullCData(oldp+112,(0U),4);
    bufp->fullCData(oldp+113,(8U),4);
    bufp->fullCData(oldp+114,(1U),4);
    bufp->fullCData(oldp+115,(2U),4);
    bufp->fullCData(oldp+116,(3U),4);
    bufp->fullCData(oldp+117,(4U),4);
    bufp->fullCData(oldp+118,(5U),4);
    bufp->fullCData(oldp+119,(0xdU),4);
    bufp->fullCData(oldp+120,(6U),4);
    bufp->fullCData(oldp+121,(7U),4);
    bufp->fullCData(oldp+122,(0xfU),4);
    bufp->fullCData(oldp+123,(0U),3);
    bufp->fullCData(oldp+124,(1U),3);
    bufp->fullCData(oldp+125,(3U),3);
    bufp->fullCData(oldp+126,(2U),3);
    bufp->fullCData(oldp+127,(6U),3);
}

VL_ATTR_COLD void Vtbench___024root__trace_full_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_full_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbench___024root__trace_full_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_full_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_st_data_buffer),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_addr_buffer),32);
    bufp->fullBit(oldp+3,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__i_lsu_wren_buffer));
    bufp->fullBit(oldp+4,(vlSelfRef.tbench__DOT__o_insn_vld));
    bufp->fullIData(oldp+5,(vlSelfRef.tbench__DOT__o_pc_debug),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[0]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[1]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[2]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[3]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[4]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[5]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[6]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[7]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[8]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[9]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[10]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[11]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[12]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[13]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[14]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[15]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[16]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[17]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[18]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[19]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[20]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[21]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[22]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[23]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[24]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[25]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[26]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[27]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[28]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[29]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[30]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem[31]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                             [0U]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                             [1U]),32);
    bufp->fullCData(oldp+40,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                              [2U])),7);
    bufp->fullCData(oldp+41,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [2U] >> 8U))),7);
    bufp->fullCData(oldp+42,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [2U] >> 0x10U))),7);
    bufp->fullCData(oldp+43,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [2U] >> 0x18U))),7);
    bufp->fullCData(oldp+44,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                              [3U])),7);
    bufp->fullCData(oldp+45,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [3U] >> 8U))),7);
    bufp->fullCData(oldp+46,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [3U] >> 0x10U))),7);
    bufp->fullCData(oldp+47,((0x7fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                                       [3U] >> 0x18U))),7);
    bufp->fullIData(oldp+48,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer
                             [4U]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[0]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[1]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[2]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[3]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[4]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[5]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[6]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[7]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[8]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[9]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[10]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[11]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[12]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[13]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[14]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__io_buffer[15]),32);
    bufp->fullBit(oldp+65,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+66,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                  >> 0xdU))));
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                  [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+70,((3U & (vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__crom
                                    [vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr] 
                                    >> 3U))),2);
    bufp->fullSData(oldp+71,(vlSelfRef.tbench__DOT__dut__DOT__CU__DOT__romAddr),11);
    bufp->fullIData(oldp+72,(vlSelfRef.tbench__DOT__dut__DOT__instr),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__IG__i_instr),25);
    bufp->fullCData(oldp+74,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr),5);
    bufp->fullCData(oldp+75,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr),5);
    bufp->fullCData(oldp+76,(vlSelfRef.tbench__DOT__dut__DOT__imm_sel),3);
    bufp->fullBit(oldp+77,(vlSelfRef.tbench__DOT__dut__DOT__rd_wren));
    bufp->fullCData(oldp+78,(vlSelfRef.tbench__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+79,(vlSelfRef.tbench__DOT__dut__DOT__mem_wren));
    bufp->fullCData(oldp+80,(vlSelfRef.tbench__DOT__dut__DOT__lsu_op),2);
    bufp->fullBit(oldp+81,(vlSelfRef.tbench__DOT__dut__DOT__ld_un));
    bufp->fullBit(oldp+82,(vlSelfRef.tbench__DOT__dut__DOT__br_equal));
    bufp->fullIData(oldp+83,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__A_xor_B),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__not_A_and_B),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__imm),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_a),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b),32);
    bufp->fullBit(oldp+88,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__sign_bit_sra));
    bufp->fullIData(oldp+89,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__A_xor_B),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__not_A_and_B),32);
    bufp->fullBit(oldp+91,(vlSelfRef.tbench__DOT__i_clk));
    bufp->fullBit(oldp+92,(vlSelfRef.tbench__DOT__i_reset));
    bufp->fullBit(oldp+93,(vlSelfRef.tbench__DOT__dut__DOT__br_less));
    bufp->fullIData(oldp+94,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc_next),32);
    bufp->fullIData(oldp+96,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__pc)),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__alu_data),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                             [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                             [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs1_addr]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__regfile_mem
                              [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT____Vcellinp__RF__i_rs2_addr]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__wb_data),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__ld_data),32);
    bufp->fullIData(oldp+103,((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__operand_b 
                               ^ (- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT____VdfgRegularize_h5f12ffbc_0_0))))),32);
    bufp->fullBit(oldp+104,((vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp 
                             >> 0x1fU)));
    bufp->fullIData(oldp+105,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__AL__DOT__lt_temp),32);
    bufp->fullIData(oldp+106,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__BR__DOT__lt_temp),32);
    bufp->fullSData(oldp+107,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr),14);
    bufp->fullCData(oldp+108,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__d_mem
                                        [vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__LS__DOT__pc_addr] 
                                        >> 7U))),5);
    bufp->fullCData(oldp+109,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_addr_buffer),5);
    bufp->fullIData(oldp+110,(vlSelfRef.tbench__DOT__dut__DOT__DP__DOT__RF__DOT__rd_data_buffer),32);
}
