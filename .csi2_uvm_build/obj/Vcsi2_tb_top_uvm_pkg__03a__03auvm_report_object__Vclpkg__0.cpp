// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_rh = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 109)->__VnoInFunc_report(vlProcess, vlSymsp, severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), id, message, verbosity, filename, line, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 122)->__VnoInFunc_report(vlProcess, vlSymsp, 0U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), id, message, verbosity, filename, line, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 133)->__VnoInFunc_report(vlProcess, vlSymsp, 1U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), id, message, verbosity, filename, line, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 144)->__VnoInFunc_report(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), id, message, verbosity, filename, line, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 183)->__VnoInFunc_report(vlProcess, vlSymsp, 3U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), id, message, verbosity, filename, line, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_info_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook\n"); );
    // Body
    report_info_hook__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_error_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook\n"); );
    // Body
    report_error_hook__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_warning_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook\n"); );
    // Body
    report_warning_hook__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_fatal_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook\n"); );
    // Body
    report_fatal_hook__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook\n"); );
    // Body
    report_hook__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 258)->__VnoInFunc_report_header(vlProcess, vlSymsp, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 271)->__VnoInFunc_summarize(vlProcess, vlSymsp, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
    VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 289)->__VnoInFunc_m_do_pre_abort(vlSymsp);
    this->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0U);
    vlProcess->disableFork();
    VL_FINISH_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 292, "");
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 306)->__VnoInFunc_set_verbosity_level(vlSymsp, verbosity_level);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 312)->__VnoInFunc_set_id_verbosity(vlSymsp, id, verbosity);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 328)->__VnoInFunc_set_severity_id_verbosity(vlSymsp, severity, id, verbosity);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 336)->__VnoInFunc_set_severity_action(vlSymsp, severity, action);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 342)->__VnoInFunc_set_id_action(vlSymsp, id, action);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 358)->__VnoInFunc_set_severity_id_action(vlProcess, vlSymsp, severity, id, action);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 365)->__VnoInFunc_set_severity_override(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 377)->__VnoInFunc_set_severity_id_override(vlProcess, vlSymsp, cur_severity, id, (IData)(new_severity));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 384)->__VnoInFunc_set_default_file(vlSymsp, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 390)->__VnoInFunc_set_severity_file(vlSymsp, severity, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 396)->__VnoInFunc_set_id_file(vlSymsp, id, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 417)->__VnoInFunc_set_severity_id_file(vlSymsp, severity, id, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level\n"); );
    // Body
    get_report_verbosity_level__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 429)->__VnoInFunc_get_verbosity_level(vlSymsp, severity, id, get_report_verbosity_level__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action\n"); );
    // Body
    get_report_action__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 439)->__VnoInFunc_get_action(vlSymsp, severity, id, get_report_action__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle\n"); );
    // Body
    get_report_file_handle__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 449)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, get_report_file_handle__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__get_report_action;
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    uvm_report_enabled__Vfuncrtn = 0U;
    this->__VnoInFunc_get_report_verbosity_level(vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
    __VlefLogOr_2 = VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_get_report_action(vlSymsp, severity, id, __VlefCall_1__get_report_action);
        __VlefLogOr_2 = (0U == __VlefCall_1__get_report_action);
    }
    uvm_report_enabled__Vfuncrtn = ((IData)(__VlefLogOr_2)
                                     ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_max_quit_count\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 481)->__VnoInFunc_set_max_quit_count(vlSymsp, max_count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> handler) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT__m_rh = handler;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT__m_rh;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 515)->__VnoInFunc_initialize(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 524)->__VnoInFunc_get_server(vlProcess, vlSymsp, get_report_server__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_dump_report_state(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_dump_report_state\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 535)->__VnoInFunc_dump_state(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_max_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &uvm_get_max_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_max_verbosity\n"); );
    // Body
    uvm_get_max_verbosity__Vfuncrtn = VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_object.svh", 540)
        ->__PVT__m_max_verbosity_level;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_get_report_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_get_report_object\n"); );
    // Body
    m_get_report_object__Vfuncrtn = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object>{this};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::~\n"); );
}
