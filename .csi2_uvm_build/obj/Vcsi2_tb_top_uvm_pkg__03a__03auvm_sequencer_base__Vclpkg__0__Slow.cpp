// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_sequence_id = 1U;
    vlSelfRef.__PVT__g_sequencer_id = 1U;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__g_request_id = 0;
}
