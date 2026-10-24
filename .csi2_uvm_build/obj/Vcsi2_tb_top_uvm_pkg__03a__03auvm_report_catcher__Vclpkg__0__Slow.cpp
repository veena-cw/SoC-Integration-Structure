// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_m_register_pair(vlSymsp, "uvm_report_object"s, "uvm_report_catcher"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_report_catcher 
        = __Vfunc_m_register_pair__0__Vfuncout;
    vlSelfRef.__PVT__get_report_catcher__Vstatic__iter 
        = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34, vlSymsp, VlNull{});
    vlSelfRef.__PVT__print_catcher__Vstatic__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34, vlSymsp, VlNull{});
    vlSelfRef.__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_modified_severity = 0;
    vlSelf->__PVT__m_modified_verbosity = 0;
    vlSelf->__PVT__m_line_number = 0;
    vlSelf->__PVT__m_modified_action = 0;
    vlSelf->__PVT__m_set_action_called = 0;
    vlSelf->__PVT__m_demoted_fatal = 0;
    vlSelf->__PVT__m_demoted_error = 0;
    vlSelf->__PVT__m_demoted_warning = 0;
    vlSelf->__PVT__m_caught_fatal = 0;
    vlSelf->__PVT__m_caught_error = 0;
    vlSelf->__PVT__m_caught_warning = 0;
    vlSelf->__PVT__m_debug_flags = 0;
    vlSelf->__PVT__m_orig_severity = 0;
    vlSelf->__PVT__m_orig_action = 0;
    vlSelf->__PVT__m_orig_verbosity = 0;
    vlSelf->__PVT__do_report = 0;
}
