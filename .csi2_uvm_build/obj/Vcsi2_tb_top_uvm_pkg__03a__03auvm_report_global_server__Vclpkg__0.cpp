// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::new\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> __Vtask_get_server__0__Vfuncout;
    // Body
    this->__VnoInFunc_get_server(vlSymsp, __Vtask_get_server__0__Vfuncout);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::__VnoInFunc_get_server(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::__VnoInFunc_get_server\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, get_server__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::__VnoInFunc_set_server(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_global_server::__VnoInFunc_set_server\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_set_server(vlSymsp, server);
}
