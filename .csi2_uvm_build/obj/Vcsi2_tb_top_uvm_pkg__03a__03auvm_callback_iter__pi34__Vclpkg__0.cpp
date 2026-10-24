// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::init(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_obj = obj;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_first\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__0__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_first__0__Vfuncout;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_last\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_last__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_last(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_last__1__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_last__1__Vfuncout;
    last__Vfuncrtn = this->__PVT__m_cb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_next\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__2__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_next__2__Vfuncout;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_prev\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_prev__3__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_prev(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_prev__3__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_prev__3__Vfuncout;
    prev__Vfuncrtn = this->__PVT__m_cb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_get_cb(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::__VnoInFunc_get_cb\n"); );
    // Body
    get_cb__Vfuncrtn = this->__PVT__m_cb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}
