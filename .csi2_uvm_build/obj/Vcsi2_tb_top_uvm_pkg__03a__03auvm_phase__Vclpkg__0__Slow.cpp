// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_phase_hopper = VL_NEW(Vcsi2_tb_top_std__03a__03amailbox__Tz18, vlSymsp, 0U);
    vlSelfRef.__PVT__m_print_successors__Vstatic__spaces = "                                                 "s;
    vlSelfRef.__PVT__m_print_successors__Vstatic__level = 0U;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_executing_phases.atDefault() = 0;
    vlSelf->__PVT__m_phase_trace = 0;
    vlSelf->__PVT__m_use_ovm_run_semantic = 0;
}
