// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi33> imp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz81::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if_mask = 0x00000100U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_analysis_port.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz95::~\n"); );
}
