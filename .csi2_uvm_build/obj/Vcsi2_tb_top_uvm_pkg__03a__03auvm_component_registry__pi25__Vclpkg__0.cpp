// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> unnamedblk1__DOT__f;
    if ((VlNull{} == this->__PVT__me)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__f);
        this->__PVT__me = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25, vlSymsp);
        VL_NULL_CHECK(unnamedblk1__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 94)->__VnoInFunc_register(vlProcess, vlSymsp, this->__PVT__me);
    }
    get__Vfuncrtn = this->__PVT__me;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_create(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __Vtask_create_component_by_type__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__10__verbosity;
    __Vtask_uvm_report_fatal__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__10__line;
    __Vtask_uvm_report_fatal__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> __VlefCall_0__get;
    std::string unnamedblk2__DOT__msg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> f;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, f);
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 112)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, contxt);
    }
    this->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 113)->__VnoInFunc_create_component_by_type(vlProcess, vlSymsp, __VlefCall_0__get, contxt, name, parent, __Vtask_create_component_by_type__7__Vfuncout);
    obj = __Vtask_create_component_by_type__7__Vfuncout;
    __VlefExpr_1 = VL_CAST_DYNAMIC(obj, create__Vfuncrtn);
    if ((! __VlefExpr_1)) {
        unnamedblk2__DOT__msg = ""s;
        if ((VlNull{} == obj)) {
            __VlefCall_2__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 117)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        }
        if ((VlNull{} == parent)) {
            __VlefCall_3__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 119)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        }
        unnamedblk2__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return a component of type 'csi2_rx_raw7_test'. A component of type '"s, __VlefCall_2__get_type_name), "' was returned instead. Name="s), name), " Parent="s), __VlefCall_3__get_type_name), " contxt="s), contxt);
        __Vtask_uvm_report_fatal__10__line = 0U;
        this->__Vtask_uvm_report_fatal__10__filename = ""s;
        __Vtask_uvm_report_fatal__10__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__10__message 
            = unnamedblk2__DOT__msg;
        this->__Vtask_uvm_report_fatal__10__id = "FCTTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__10__id, this->__Vtask_uvm_report_fatal__10__message, __Vtask_uvm_report_fatal__10__verbosity, this->__Vtask_uvm_report_fatal__10__filename, __Vtask_uvm_report_fatal__10__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> __VlefCall_0__get;
    this->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 134)->__VnoInFunc_set_type_override_by_type(vlSymsp, __VlefCall_0__get, override_type, replace);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_set_inst_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> __VlefCall_1__get;
    std::string __VlefCall_0__get_full_name;
    if ((VlNull{} != parent)) {
        if ((""s == inst_path)) {
            VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 159)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_path);
        } else {
            VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 161)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), inst_path);
        }
    }
    this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_registry.svh", 163)->__VnoInFunc_set_inst_override_by_type(vlSymsp, __VlefCall_1__get, override_type, inst_path);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::__VnoInFunc_create_component(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::__VnoInFunc_create_component\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test> obj;
    obj = VL_NEW(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_rx_raw7_test"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::new\n"); );
    // Body
    /*super.new*/;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25::~\n"); );
}
