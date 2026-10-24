// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_fatal__0__verbosity;
    __Vtask_uvm_report_fatal__0__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__0__line;
    __Vtask_uvm_report_fatal__0__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_0__get_type_name;
    if ((VlNull{} == ovrd_type)) {
        __Vtask_uvm_report_fatal__0__line = 0U;
        this->__Vtask_uvm_report_fatal__0__filename = ""s;
        __Vtask_uvm_report_fatal__0__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__0__message = "Attempting to register a null override object with the factory"s;
        this->__Vtask_uvm_report_fatal__0__id = "NULLWR"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__1__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__0__id, this->__Vtask_uvm_report_fatal__0__message, __Vtask_uvm_report_fatal__0__verbosity, this->__Vtask_uvm_report_fatal__0__filename, __Vtask_uvm_report_fatal__0__line);
    }
    this->__PVT__full_inst_path = full_inst_path;
    if ((VlNull{} == orig_type)) {
        __VlefCall_0__get_type_name = orig_type_name;
    } else {
        VL_NULL_CHECK(orig_type, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_factory.svh", 702)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    }
    this->__PVT__orig_type_name = __VlefCall_0__get_type_name;
    this->__PVT__orig_type = orig_type;
    VL_NULL_CHECK(ovrd_type, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_factory.svh", 704)->__VnoInFunc_get_type_name(vlSymsp, this->__PVT__ovrd_type_name);
    this->__PVT__ovrd_type = ovrd_type;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__selected = 0;
}
