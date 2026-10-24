// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks_objection__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks_objection__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz103_TBz102__Vclpkg.__VnoInFunc_m_register_pair(vlSymsp, "uvm_callbacks_objection"s, "uvm_objection_callback"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_objection_callback 
        = __Vfunc_m_register_pair__0__Vfuncout;
}
