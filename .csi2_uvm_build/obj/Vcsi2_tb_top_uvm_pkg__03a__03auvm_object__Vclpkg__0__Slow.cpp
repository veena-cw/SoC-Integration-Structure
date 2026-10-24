// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT_____05Fm_uvm_status_container = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container, vlSymsp);
    vlSelfRef.__PVT__copy__Vstatic__depth = 0U;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_inst_count = 0;
}
