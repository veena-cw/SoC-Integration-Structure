// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> __VlefCall_0__get_type;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz14__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_0__get_type);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz14__Vclpkg.__VnoInFunc_get_by_type(vlSymsp, scope, __VlefCall_0__get_type, get_by_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz14__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, scope, name, (IData)(rpterr), get_by_name__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_default(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> &set_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> r;
    r = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, name, scope);
    VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 96)->__VnoInFunc_set(vlSymsp);
    set_default__Vfuncrtn = r;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_m_show_msg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_m_show_msg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__10__verbosity;
    __Vtask_uvm_report_info__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__10__line;
    __Vtask_uvm_report_info__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_full_name;
    std::string msg;
    msg = "PARAMTYPEDTYPE 'T'"s;
    if ((VlNull{} != accessor)) {
        VL_NULL_CHECK(accessor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    } else {
        __VlefCall_0__get_full_name = "<unknown>"s;
    }
    if ((VlNull{} == rsrc)) {
        __VlefCall_1__convert2string = "null (failed lookup)"s;
    } else {
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 119)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    }
    __Vtemp_1 = ((""s == name) ? ""s : VL_CONCATN_NNN("."s, name));
    VL_SFORMAT_NX(msg,"%s '%s%s' (type %s) %s by %s = %s",7
                  , 'S',&(rtype), 'S',&(scope), 'S',&(__Vtemp_1)
                  , 'S',&(msg), 'S',&(action), 'S',&(__VlefCall_0__get_full_name)
                  , 'S',&(__VlefCall_1__convert2string));
    this->__Vfunc_uvm_report_enabled__7__id = id;
    __Vfunc_uvm_report_enabled__7__severity = 0U;
    __Vfunc_uvm_report_enabled__7__verbosity = 0x00000064U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__8__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__9__Vfuncout);
    __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__9__Vfuncout;
    __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_2__uvm_report_enabled) {
        __Vtask_uvm_report_info__10__line = 0x00000079U;
        this->__Vtask_uvm_report_info__10__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh"s;
        __Vtask_uvm_report_info__10__verbosity = 0x00000064U;
        this->__Vtask_uvm_report_info__10__message 
            = msg;
        this->__Vtask_uvm_report_info__10__id = id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__10__id, this->__Vtask_uvm_report_info__10__message, __Vtask_uvm_report_info__10__verbosity, this->__Vtask_uvm_report_info__10__filename, __Vtask_uvm_report_info__10__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    rsrc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, name, scope);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 133)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 134)->__VnoInFunc_set(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SET"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_anonymous(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_anonymous\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    rsrc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, ""s, scope);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 150)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 151)->__VnoInFunc_set(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETANON"s, "Resource"s, "set"s, scope, ""s, accessor, rsrc);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    rsrc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, name, scope);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 167)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 168)->__VnoInFunc_set_override(vlSymsp, 3U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRD"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    rsrc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, name, scope);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 187)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 188)->__VnoInFunc_set_override(vlSymsp, 1U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRDTYP"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_set_override_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    rsrc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14, vlProcess, vlSymsp, name, scope);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 205)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 206)->__VnoInFunc_set_override(vlSymsp, 2U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRDNAM"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_read_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> &val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_read_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    {
        read_by_name__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/RDBYNAM"s, "Resource"s, "read"s, scope, name, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            read_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 230)->__VnoInFunc_read(vlProcess, vlSymsp, accessor, val);
        read_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_read_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> &val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_read_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    {
        read_by_type__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_type(vlSymsp, scope, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/RDBYTYP"s, "Resource"s, "read"s, scope, ""s, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            read_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 254)->__VnoInFunc_read(vlProcess, vlSymsp, accessor, val);
        read_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_write_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_write_by_name\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    {
        write_by_name__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/WR"s, "Resource"s, "written"s, scope, name, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            write_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 283)->__VnoInFunc_write(vlSymsp, val, accessor);
        write_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_write_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_write_by_type\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> rsrc;
    {
        write_by_type__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_type(vlSymsp, scope, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/WRTYP"s, "Resource"s, "written"s, scope, ""s, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            write_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 312)->__VnoInFunc_write(vlSymsp, val, accessor);
        write_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_dump(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg::__VnoInFunc_dump\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_db.svh", 326)->__VnoInFunc_dump(vlSymsp, 0U);
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz14::~\n"); );
}
