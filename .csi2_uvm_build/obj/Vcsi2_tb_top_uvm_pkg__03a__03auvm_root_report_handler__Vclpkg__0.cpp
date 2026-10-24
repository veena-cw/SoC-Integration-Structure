// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::__VnoInFunc_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::__VnoInFunc_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((""s == name)) {
        name = "reporter"s;
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(vlProcess, vlSymsp, severity, name, id, message, verbosity_level, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler::~\n"); );
}
