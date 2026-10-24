// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2> __Vfunc_get_type__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
