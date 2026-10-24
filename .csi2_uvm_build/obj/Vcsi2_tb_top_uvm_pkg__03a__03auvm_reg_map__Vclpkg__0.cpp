// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi48> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi48__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_backdoor)) {
        this->__PVT__m_backdoor = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "Backdoor"s);
    }
    backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi48> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi48__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "uvm_reg_map"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 54)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_map"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 54)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict\n"); );
    // Body
    this->__PVT__m_auto_predict = on;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict\n"); );
    // Body
    get_auto_predict__Vfuncrtn = this->__PVT__m_auto_predict;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk2__DOT__submap;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk2__DOT__submap__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__submap__Vmore;
    unnamedblk2__DOT__submap__Vmore = 0;
    this->__PVT__m_check_on_read = on;
    unnamedblk2__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk2__DOT__submap__Vnext));
    while (unnamedblk2__DOT__submap__Vmore) {
        unnamedblk2__DOT__submap = unnamedblk2__DOT__submap__Vnext;
        unnamedblk2__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk2__DOT__submap__Vnext));
        VL_NULL_CHECK(unnamedblk2__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 585)->__VnoInFunc_set_check_on_read(vlSymsp, on);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read\n"); );
    // Body
    get_check_on_read__Vfuncrtn = this->__PVT__m_check_on_read;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      ((""s 
                                                                        == name)
                                                                        ? "default_map"s
                                                                        : name)));
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_auto_predict = 0U;
    this->__PVT__m_check_on_read = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__m_parent = parent;
    this->__PVT__m_n_bytes = n_bytes;
    this->__PVT__m_endian = endian;
    this->__PVT__m_base_addr = base_addr;
    this->__PVT__m_byte_addressing = byte_addressing;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk436__DOT__info;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            this->__Vfunc_uvm_report_enabled__7__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__7__severity = 2U;
            __Vfunc_uvm_report_enabled__7__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__9__Vfuncout);
            __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__9__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 685)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000002adU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 689)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__15__severity = 2U;
            __Vfunc_uvm_report_enabled__15__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__17__Vfuncout);
            __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__17__Vfuncout;
            __VlefCall_5__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_5__uvm_report_enabled) {
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 692)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000002b4U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 696)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk436__DOT__info = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk436__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 700)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk436__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 701)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk436__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 702)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk436__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 703)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_regs_info.atWrite(rg) = unnamedblk436__DOT__info;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__25__Vfuncout;
    __Vtask_uvm_report_enabled__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__38__Vfuncout;
    __Vtask_get_physical_addresses__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
    __Vfunc_uvm_report_enabled__44__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
    __Vfunc_uvm_report_enabled__44__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__46__Vfuncout;
    __Vtask_uvm_report_enabled__46__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__50__verbosity;
    __Vtask_uvm_report_warning__50__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__50__line;
    __Vtask_uvm_report_warning__50__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__51__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53__verbosity;
    __Vfunc_uvm_report_enabled__53__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__53__severity;
    __Vfunc_uvm_report_enabled__53__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__55__Vfuncout;
    __Vtask_uvm_report_enabled__55__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__verbosity;
    __Vtask_uvm_report_warning__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__line;
    __Vtask_uvm_report_warning__59__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__60__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk437__DOT__info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk437__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__top_map;
    VlQueue<QData/*63:0*/> unnamedblk437__DOT__addrs;
    IData/*31:0*/ unnamedblk437__DOT__unnamedblk438__DOT__i;
    unnamedblk437__DOT__unnamedblk438__DOT__i = 0;
    IData/*31:0*/ unnamedblk437__DOT__unnamedblk438__DOT__i__Vloopsize;
    unnamedblk437__DOT__unnamedblk438__DOT__i__Vloopsize = 0;
    std::string unnamedblk437__DOT__unnamedblk439__DOT__rg_acc;
    IData/*31:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i;
    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i = 0;
    IData/*31:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i__Vloopsize;
    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2;
    std::string unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2_acc;
    std::string unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__unnamedblk443__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range;
    VL_ZERO_W(160, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vmore;
    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vmore = 0;
    std::string unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__unnamedblk445__DOT__a;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            this->__Vfunc_uvm_report_enabled__23__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__23__severity = 2U;
            __Vfunc_uvm_report_enabled__23__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __Vtask_uvm_report_enabled__25__Vfuncout);
            __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__25__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 719)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of register '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : register not mapped in that address map"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000002cfU);
            }
            goto __Vlabel0;
        }
        unnamedblk437__DOT__info = this->__PVT__m_regs_info
            .at(rg);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk437__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk437__DOT__top_map);
        unnamedblk437__DOT__addrs.clear();
        unnamedblk437__DOT__addrs.atDefault() = 0;
        VL_NULL_CHECK(unnamedblk437__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 730)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 733)
                       ->__PVT__unmapped))) {
                unnamedblk437__DOT__unnamedblk438__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk437__DOT__unnamedblk438__DOT__i, VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 734)
                                  ->__PVT__addr.size())) {
                    unnamedblk437__DOT__unnamedblk438__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 734)
                        ->__PVT__addr.size();
                    if (VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 736)
                        ->__PVT__m_regs_by_offset_wo.exists(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 736)
                                                            ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i))) {
                        if ((VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 740)
                             ->__PVT__m_regs_by_offset
                             .at(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 740)
                                 ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i)) 
                             == rg)) {
                            VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 741)->__PVT__m_regs_by_offset.atWrite(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 741)
                                                                                ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i)) 
                                = VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 742)
                                ->__PVT__m_regs_by_offset_wo
                                .at(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 742)
                                    ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i));
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 744)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 744)
                                                                                ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i)));
                        } else {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 748)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 748)
                                                                                ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i)));
                        }
                        VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 750)->__PVT__m_regs_by_offset_wo.erase(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 750)
                                                                                ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i));
                    } else {
                        VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 737)->__PVT__m_regs_by_offset.erase(VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 737)
                                                                                ->__PVT__addr.at(unnamedblk437__DOT__unnamedblk438__DOT__i));
                    }
                    if ((unnamedblk437__DOT__unnamedblk438__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 734)
                         ->__PVT__addr.size())) {
                        unnamedblk437__DOT__unnamedblk438__DOT__i 
                            = ((IData)(1U) + unnamedblk437__DOT__unnamedblk438__DOT__i);
                    }
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 757)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk437__DOT__unnamedblk439__DOT__rg_acc);
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 760)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_4__get_n_bytes, unnamedblk437__DOT__addrs, __Vtask_get_physical_addresses__38__Vfuncout);
                unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i, unnamedblk437__DOT__addrs.size())) {
                    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i__Vloopsize 
                        = unnamedblk437__DOT__addrs.size();
                    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr 
                        = unnamedblk437__DOT__addrs.at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i);
                    if (VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 765)
                        ->__PVT__m_regs_by_offset.exists(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr)) {
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2 
                            = VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 767)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr);
                        VL_NULL_CHECK(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 768)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2_acc);
                        if ((("RO"s == unnamedblk437__DOT__unnamedblk439__DOT__rg_acc) 
                             & ("WO"s == unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 773)->__PVT__m_regs_by_offset.atWrite(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 775)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr) 
                                = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2);
                        } else if ((("WO"s == unnamedblk437__DOT__unnamedblk439__DOT__rg_acc) 
                                    & ("RO"s == unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 779)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__rg2);
                        } else {
                            unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__unnamedblk443__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__unnamedblk443__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr);
                            this->__Vfunc_uvm_report_enabled__44__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__44__severity = 1U;
                            __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vfunc_get__45__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), this->__Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__46__Vfuncout);
                            __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled 
                                = __Vtask_uvm_report_enabled__46__Vfuncout;
                            __VlefCall_5__uvm_report_enabled 
                                = (1U & __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled);
                            if (__VlefCall_5__uvm_report_enabled) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 788)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 788)
                                              ->__PVT__m_regs_by_offset
                                              .at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 788)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                __Vtask_uvm_report_warning__50__line = 0x00000314U;
                                this->__Vtask_uvm_report_warning__50__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__50__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__50__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_6__get_full_name), "' register '"s), __VlefCall_7__get_full_name), "' maps to same address as register '"s), __VlefCall_8__get_full_name), "': 'h"s), unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__unnamedblk443__DOT__a));
                                this->__Vtask_uvm_report_warning__50__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vfunc_get__51__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__50__id, this->__Vtask_uvm_report_warning__50__message, __Vtask_uvm_report_warning__50__verbosity, this->__Vtask_uvm_report_warning__50__filename, __Vtask_uvm_report_warning__50__line);
                            }
                        }
                    } else {
                        VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 792)->__PVT__m_regs_by_offset.atWrite(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__addr) 
                            = rg;
                    }
                    unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 794)
                           ->__PVT__m_mems_by_offset.first(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext));
                    while (unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vmore) {
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[0U] 
                            = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext[0U];
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[1U] 
                            = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext[1U];
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[2U] 
                            = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext[2U];
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[3U] 
                            = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext[3U];
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[4U] 
                            = unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext[4U];
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vmore 
                            = (0U != VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 794)
                               ->__PVT__m_mems_by_offset.next(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range__Vnext));
                        if (((unnamedblk437__DOT__addrs.at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i) 
                              >= (((QData)((IData)(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[3U])))) 
                             & (unnamedblk437__DOT__addrs.at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i) 
                                <= (((QData)((IData)(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range[1U])))))) {
                            unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__unnamedblk445__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__unnamedblk445__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk437__DOT__addrs.at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i));
                            this->__Vfunc_uvm_report_enabled__53__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__53__severity = 1U;
                            __Vfunc_uvm_report_enabled__53__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__54__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vfunc_get__54__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__53__verbosity, (IData)(__Vfunc_uvm_report_enabled__53__severity), this->__Vfunc_uvm_report_enabled__53__id, __Vtask_uvm_report_enabled__55__Vfuncout);
                            __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled 
                                = __Vtask_uvm_report_enabled__55__Vfuncout;
                            __VlefCall_9__uvm_report_enabled 
                                = (1U & __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled);
                            if (__VlefCall_9__uvm_report_enabled) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 800)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk437__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 800)
                                              ->__PVT__m_mems_by_offset
                                              .at(unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__range), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 800)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                                __Vtask_uvm_report_warning__59__line = 0x00000320U;
                                this->__Vtask_uvm_report_warning__59__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__59__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__59__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_10__get_full_name), "' register '"s), __VlefCall_11__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_12__get_full_name), "': 'h"s), unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk444__DOT__unnamedblk445__DOT__a));
                                this->__Vtask_uvm_report_warning__59__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vfunc_get__60__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__59__id, this->__Vtask_uvm_report_warning__59__message, __Vtask_uvm_report_warning__59__verbosity, this->__Vtask_uvm_report_warning__59__filename, __Vtask_uvm_report_warning__59__line);
                            }
                        }
                    }
                    if ((unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i__Vloopsize 
                         <= unnamedblk437__DOT__addrs.size())) {
                        unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i 
                            = ((IData)(1U) + unnamedblk437__DOT__unnamedblk439__DOT__unnamedblk440__DOT__i);
                    }
                }
                VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 804)->__PVT__addr 
                    = unnamedblk437__DOT__addrs;
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 809)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 810)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 813)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk437__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 814)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__verbosity;
    __Vfunc_uvm_report_enabled__62__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__62__severity;
    __Vfunc_uvm_report_enabled__62__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__64__Vfuncout;
    __Vtask_uvm_report_enabled__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__verbosity;
    __Vfunc_uvm_report_enabled__70__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__70__severity;
    __Vfunc_uvm_report_enabled__70__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__71__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__72__Vfuncout;
    __Vtask_uvm_report_enabled__72__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk446__DOT__info;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            this->__Vfunc_uvm_report_enabled__62__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__62__severity = 2U;
            __Vfunc_uvm_report_enabled__62__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__62__verbosity, (IData)(__Vfunc_uvm_report_enabled__62__severity), this->__Vfunc_uvm_report_enabled__62__id, __Vtask_uvm_report_enabled__64__Vfuncout);
            __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__64__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 830)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x0000033eU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 834)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__70__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__70__severity = 2U;
            __Vfunc_uvm_report_enabled__70__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__71__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__70__verbosity, (IData)(__Vfunc_uvm_report_enabled__70__severity), this->__Vfunc_uvm_report_enabled__70__id, __Vtask_uvm_report_enabled__72__Vfuncout);
            __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__72__Vfuncout;
            __VlefCall_5__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_5__uvm_report_enabled) {
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 837)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x00000345U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 841)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk446__DOT__info = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk446__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 845)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk446__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 846)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk446__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 847)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk446__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 848)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_mems_info.atWrite(mem) = unnamedblk446__DOT__info;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__79__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__80__Vfuncout;
    __Vtask_uvm_report_enabled__80__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__88__Vfuncout;
    __Vtask_get_physical_addresses__88__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__91__Vfuncout;
    __Vtask_get_physical_addresses__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__93__verbosity;
    __Vfunc_uvm_report_enabled__93__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__93__severity;
    __Vfunc_uvm_report_enabled__93__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__93____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__93____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__94__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__95__Vfuncout;
    __Vtask_uvm_report_enabled__95__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__99__verbosity;
    __Vtask_uvm_report_warning__99__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__99__line;
    __Vtask_uvm_report_warning__99__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__100__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__103__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__104__Vfuncout;
    __Vtask_uvm_report_enabled__104__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__108__verbosity;
    __Vtask_uvm_report_warning__108__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__108__line;
    __Vtask_uvm_report_warning__108__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__109__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_7__get_size;
    IData/*31:0*/ __VlefCall_6__get_n_bytes;
    QData/*63:0*/ __VlefCall_5__get_size;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk447__DOT__info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk447__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk447__DOT__top_map;
    VlWide<5>/*159:0*/ unnamedblk447__DOT__unnamedblk448__DOT__range;
    VL_ZERO_W(160, unnamedblk447__DOT__unnamedblk448__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk447__DOT__unnamedblk448__DOT__range__Vmore;
    unnamedblk447__DOT__unnamedblk448__DOT__range__Vmore = 0;
    VlQueue<QData/*63:0*/> unnamedblk447__DOT__unnamedblk449__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk447__DOT__unnamedblk449__DOT__addrs_max;
    QData/*63:0*/ unnamedblk447__DOT__unnamedblk449__DOT__min;
    QData/*63:0*/ unnamedblk447__DOT__unnamedblk449__DOT__max;
    QData/*63:0*/ unnamedblk447__DOT__unnamedblk449__DOT__max2;
    IData/*31:0*/ unnamedblk447__DOT__unnamedblk449__DOT__stride;
    QData/*63:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr;
    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr = 0;
    QData/*63:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vnext;
    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vnext = 0;
    CData/*0:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vmore;
    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vmore = 0;
    std::string unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__a;
    std::string unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range;
    VL_ZERO_W(160, unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vmore;
    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vmore = 0;
    std::string unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__a;
    std::string unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range;
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            this->__Vfunc_uvm_report_enabled__78__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__78__severity = 2U;
            __Vfunc_uvm_report_enabled__78__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__79__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __Vtask_uvm_report_enabled__80__Vfuncout);
            __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__80__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 865)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of memory '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : memory not mapped in that address map"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x00000361U);
            }
            goto __Vlabel0;
        }
        unnamedblk447__DOT__info = this->__PVT__m_mems_info
            .at(mem);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk447__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk447__DOT__top_map);
        VL_NULL_CHECK(unnamedblk447__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 876)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 879)
                       ->__PVT__unmapped))) {
                unnamedblk447__DOT__unnamedblk448__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 880)
                       ->__PVT__m_mems_by_offset.first(unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext));
                while (unnamedblk447__DOT__unnamedblk448__DOT__range__Vmore) {
                    unnamedblk447__DOT__unnamedblk448__DOT__range[0U] 
                        = unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext[0U];
                    unnamedblk447__DOT__unnamedblk448__DOT__range[1U] 
                        = unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext[1U];
                    unnamedblk447__DOT__unnamedblk448__DOT__range[2U] 
                        = unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext[2U];
                    unnamedblk447__DOT__unnamedblk448__DOT__range[3U] 
                        = unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext[3U];
                    unnamedblk447__DOT__unnamedblk448__DOT__range[4U] 
                        = unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext[4U];
                    unnamedblk447__DOT__unnamedblk448__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 880)
                           ->__PVT__m_mems_by_offset.next(unnamedblk447__DOT__unnamedblk448__DOT__range__Vnext));
                    if ((VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 881)
                         ->__PVT__m_mems_by_offset.at(unnamedblk447__DOT__unnamedblk448__DOT__range) 
                         == mem)) {
                        VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 882)->__PVT__m_mems_by_offset.erase(unnamedblk447__DOT__unnamedblk448__DOT__range);
                    }
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                unnamedblk447__DOT__unnamedblk449__DOT__addrs.clear();
                unnamedblk447__DOT__unnamedblk449__DOT__addrs.atDefault() = 0;
                unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.clear();
                unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.atDefault() = 0;
                unnamedblk447__DOT__unnamedblk449__DOT__min = 0ULL;
                unnamedblk447__DOT__unnamedblk449__DOT__max = 0ULL;
                unnamedblk447__DOT__unnamedblk449__DOT__max2 = 0ULL;
                unnamedblk447__DOT__unnamedblk449__DOT__stride = 0U;
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 892)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_4__get_n_bytes, unnamedblk447__DOT__unnamedblk449__DOT__addrs, __Vtask_get_physical_addresses__88__Vfuncout);
                unnamedblk447__DOT__unnamedblk449__DOT__min 
                    = ((unnamedblk447__DOT__unnamedblk449__DOT__addrs.at(0U) 
                        < unnamedblk447__DOT__unnamedblk449__DOT__addrs.at(
                                                                           (unnamedblk447__DOT__unnamedblk449__DOT__addrs.size() 
                                                                            - (IData)(1U))))
                        ? unnamedblk447__DOT__unnamedblk449__DOT__addrs.at(0U)
                        : unnamedblk447__DOT__unnamedblk449__DOT__addrs.at(
                                                                           (unnamedblk447__DOT__unnamedblk449__DOT__addrs.size() 
                                                                            - (IData)(1U))));
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 896)->__VnoInFunc_get_size(vlSymsp, __VlefCall_5__get_size);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 897)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 
                                                         (__VlefCall_5__get_size 
                                                          - 1ULL), __VlefCall_6__get_n_bytes, unnamedblk447__DOT__unnamedblk449__DOT__addrs_max, __Vtask_get_physical_addresses__91__Vfuncout);
                unnamedblk447__DOT__unnamedblk449__DOT__max 
                    = ((unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.at(0U) 
                        > unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.at(
                                                                               (unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.at(0U)
                        : unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.at(
                                                                               (unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                unnamedblk447__DOT__unnamedblk449__DOT__max2 
                    = unnamedblk447__DOT__unnamedblk449__DOT__addrs_max.at(0U);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 902)->__VnoInFunc_get_size(vlSymsp, __VlefCall_7__get_size);
                unnamedblk447__DOT__unnamedblk449__DOT__stride 
                    = (IData)(VL_DIV_QQQ(64, (unnamedblk447__DOT__unnamedblk449__DOT__max2 
                                              - unnamedblk447__DOT__unnamedblk449__DOT__max), 
                                         (__VlefCall_7__get_size 
                                          - 1ULL)));
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 905)
                       ->__PVT__m_regs_by_offset.first(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vnext));
                while (unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vmore) {
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vnext;
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 905)
                           ->__PVT__m_regs_by_offset.next(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr__Vnext));
                    if (((unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr 
                          >= unnamedblk447__DOT__unnamedblk449__DOT__min) 
                         & (unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr 
                            <= unnamedblk447__DOT__unnamedblk449__DOT__max))) {
                        unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__a = ""s;
                        unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk447__DOT__unnamedblk449__DOT__min
                                      , '#',64,unnamedblk447__DOT__unnamedblk449__DOT__max);
                        VL_SFORMAT_NX(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__b
                                      ,"%0h",1, '#',64,unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr);
                        this->__Vfunc_uvm_report_enabled__93__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__93__severity = 1U;
                        __Vfunc_uvm_report_enabled__93__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__94__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__93__verbosity, (IData)(__Vfunc_uvm_report_enabled__93__severity), this->__Vfunc_uvm_report_enabled__93__id, __Vtask_uvm_report_enabled__95__Vfuncout);
                        __Vfunc_uvm_report_enabled__93____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__95__Vfuncout;
                        __VlefCall_8__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__93____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_8__uvm_report_enabled) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                            VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 913)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 913)
                                          ->__PVT__m_regs_by_offset
                                          .at(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__reg_addr), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 913)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                            __Vtask_uvm_report_warning__99__line = 0x00000391U;
                            this->__Vtask_uvm_report_warning__99__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__99__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__99__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_9__get_full_name), "' memory '"s), __VlefCall_10__get_full_name), "' with range "s), unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__a), " overlaps with address of existing register '"s), __VlefCall_11__get_full_name), "': 'h"s), unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk450__DOT__unnamedblk451__DOT__b));
                            this->__Vtask_uvm_report_warning__99__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vfunc_get__100__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__99__id, this->__Vtask_uvm_report_warning__99__message, __Vtask_uvm_report_warning__99__verbosity, this->__Vtask_uvm_report_warning__99__filename, __Vtask_uvm_report_warning__99__line);
                        }
                    }
                }
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 917)
                       ->__PVT__m_mems_by_offset.first(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext));
                while (unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vmore) {
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[0U] 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext[0U];
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[1U] 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext[1U];
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[2U] 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext[2U];
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[3U] 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext[3U];
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[4U] 
                        = unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext[4U];
                    unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 917)
                           ->__PVT__m_mems_by_offset.next(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range__Vnext));
                    if (((((unnamedblk447__DOT__unnamedblk449__DOT__min 
                            <= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[1U])))) 
                           & (unnamedblk447__DOT__unnamedblk449__DOT__max 
                              >= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[2U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[1U]))))) 
                          | ((unnamedblk447__DOT__unnamedblk449__DOT__min 
                              <= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[3U])))) 
                             & (unnamedblk447__DOT__unnamedblk449__DOT__max 
                                >= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[4U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[3U])))))) 
                         | ((unnamedblk447__DOT__unnamedblk449__DOT__min 
                             >= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[4U])) 
                                  << 0x00000020U) | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[3U])))) 
                            & (unnamedblk447__DOT__unnamedblk449__DOT__max 
                               <= (((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[2U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[1U]))))))) {
                        unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__a = ""s;
                        unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk447__DOT__unnamedblk449__DOT__min
                                      , '#',64,unnamedblk447__DOT__unnamedblk449__DOT__max);
                        VL_SFORMAT_NX(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__b
                                      ,"[%0h:%0h]",2
                                      , '#',64,(((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[4U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[3U])))
                                      , '#',64,(((QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range[1U]))));
                        this->__Vfunc_uvm_report_enabled__102__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__102__severity = 1U;
                        __Vfunc_uvm_report_enabled__102__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__103__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __Vtask_uvm_report_enabled__104__Vfuncout);
                        __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__104__Vfuncout;
                        __VlefCall_12__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_12__uvm_report_enabled) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                            VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 927)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 927)
                                          ->__PVT__m_mems_by_offset
                                          .at(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__range), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 927)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                            __Vtask_uvm_report_warning__108__line = 0x0000039fU;
                            this->__Vtask_uvm_report_warning__108__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__108__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__108__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_13__get_full_name), "' memory '"s), __VlefCall_14__get_full_name), "' with range "s), unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__a), " overlaps existing memory with range '"s), __VlefCall_15__get_full_name), "': "s), unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk452__DOT__unnamedblk453__DOT__b));
                            this->__Vtask_uvm_report_warning__108__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vfunc_get__109__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__108__id, this->__Vtask_uvm_report_warning__108__message, __Vtask_uvm_report_warning__108__verbosity, this->__Vtask_uvm_report_warning__108__filename, __Vtask_uvm_report_warning__108__line);
                        }
                    }
                }
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range[0U] 
                    = unnamedblk447__DOT__unnamedblk449__DOT__stride;
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range[1U] 
                    = (IData)(unnamedblk447__DOT__unnamedblk449__DOT__max);
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range[2U] 
                    = (IData)((unnamedblk447__DOT__unnamedblk449__DOT__max 
                               >> 0x00000020U));
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range[3U] 
                    = (IData)(unnamedblk447__DOT__unnamedblk449__DOT__min);
                unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range[4U] 
                    = (IData)((unnamedblk447__DOT__unnamedblk449__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(unnamedblk447__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 933)->__PVT__m_mems_by_offset.atWrite(unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range) 
                    = mem;
                VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 934)->__PVT__addr 
                    = unnamedblk447__DOT__unnamedblk449__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 935)
                            ->__PVT__mem_range, unnamedblk447__DOT__unnamedblk449__DOT__unnamedblk454__DOT__range);
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 942)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 943)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 946)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk447__DOT__info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 947)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__111__verbosity;
    __Vfunc_uvm_report_enabled__111__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__111__severity;
    __Vfunc_uvm_report_enabled__111__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__111____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__111____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__112__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__113__Vfuncout;
    __Vtask_uvm_report_enabled__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__117__verbosity;
    __Vfunc_uvm_report_enabled__117__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__117__severity;
    __Vfunc_uvm_report_enabled__117__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__117____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__117____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__118__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__119__Vfuncout;
    __Vtask_uvm_report_enabled__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
    __Vfunc_uvm_report_enabled__125__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
    __Vfunc_uvm_report_enabled__125__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__126__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__127__Vfuncout;
    __Vtask_uvm_report_enabled__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__132____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__133__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__134__Vfuncout;
    __Vtask_uvm_report_enabled__134__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__verbosity;
    __Vfunc_uvm_report_enabled__141__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__141__severity;
    __Vfunc_uvm_report_enabled__141__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__143__Vfuncout;
    __Vtask_uvm_report_enabled__143__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__147__verbosity;
    __Vtask_uvm_report_warning__147__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__147__line;
    __Vtask_uvm_report_warning__147__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__148__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_19__get_full_name;
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__get_n_bytes;
    CData/*0:0*/ __VlefCall_16__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_15__get_n_bytes;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    CData/*0:0*/ __VlefCall_10__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_9__get_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_8__get_parent;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent_block_check__DOT__child_blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> parent_map;
    {
        if ((VlNull{} == child_map)) {
            this->__Vfunc_uvm_report_enabled__111__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__111__severity = 2U;
            __Vfunc_uvm_report_enabled__111__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__112__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__111__verbosity, (IData)(__Vfunc_uvm_report_enabled__111__severity), this->__Vfunc_uvm_report_enabled__111__id, __Vtask_uvm_report_enabled__113__Vfuncout);
            __Vfunc_uvm_report_enabled__111____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__113__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__111____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempting to add NULL map to map '"s, __VlefCall_1__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000003c1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 965)->__VnoInFunc_get_parent_map(vlSymsp, parent_map);
        if ((VlNull{} != parent_map)) {
            this->__Vfunc_uvm_report_enabled__117__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__117__severity = 2U;
            __Vfunc_uvm_report_enabled__117__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__118__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__118__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__117__verbosity, (IData)(__Vfunc_uvm_report_enabled__117__severity), this->__Vfunc_uvm_report_enabled__117__id, __Vtask_uvm_report_enabled__119__Vfuncout);
            __Vfunc_uvm_report_enabled__117____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__119__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__117____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 974)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 974)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_3__get_full_name), "' is already a child of map '"s), __VlefCall_4__get_full_name), "'. Cannot also be a child of map '"s), __VlefCall_5__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000003ceU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 979)->__VnoInFunc_get_parent(vlSymsp, parent_block_check__DOT__child_blk);
        if ((VlNull{} == parent_block_check__DOT__child_blk)) {
            this->__Vfunc_uvm_report_enabled__125__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__125__severity = 2U;
            __Vfunc_uvm_report_enabled__125__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__126__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), this->__Vfunc_uvm_report_enabled__125__id, __Vtask_uvm_report_enabled__127__Vfuncout);
            __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__127__Vfuncout;
            __VlefCall_6__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_6__uvm_report_enabled) {
                VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 982)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot add submap '"s, __VlefCall_7__get_full_name), "' because it does not have a parent block"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000003d6U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_8__get_parent);
        VL_NULL_CHECK(parent_block_check__DOT__child_blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 985)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_9__get_parent);
        if ((__VlefCall_8__get_parent != __VlefCall_9__get_parent)) {
            this->__Vfunc_uvm_report_enabled__132__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__132__severity = 2U;
            __Vfunc_uvm_report_enabled__132__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__133__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), this->__Vfunc_uvm_report_enabled__132__id, __Vtask_uvm_report_enabled__134__Vfuncout);
            __Vfunc_uvm_report_enabled__132____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__134__Vfuncout;
            __VlefCall_10__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__132____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_10__uvm_report_enabled) {
                VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 990)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                VL_NULL_CHECK(parent_block_check__DOT__child_blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 990)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 990)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Submap '"s, __VlefCall_11__get_full_name), "' may not be added to this "s), "address map, '"s), __VlefCall_12__get_full_name), "', as the submap's parent block, '"s), __VlefCall_13__get_full_name), "', is not a child of this map's parent block, '"s), __VlefCall_14__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000003deU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_15__get_n_bytes);
        if ((this->__PVT__m_n_bytes > __VlefCall_15__get_n_bytes)) {
            this->__Vfunc_uvm_report_enabled__141__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__141__severity = 1U;
            __Vfunc_uvm_report_enabled__141__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__142__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__141__verbosity, (IData)(__Vfunc_uvm_report_enabled__141__severity), this->__Vfunc_uvm_report_enabled__141__id, __Vtask_uvm_report_enabled__143__Vfuncout);
            __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__143__Vfuncout;
            __VlefCall_16__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_16__uvm_report_enabled) {
                VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1000)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_17__get_n_bytes);
                VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1000)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                __Vtask_uvm_report_warning__147__line = 0x000003e8U;
                this->__Vtask_uvm_report_warning__147__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__147__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__147__message
                              ,"Adding %0d-byte submap '%s' to %0d-byte parent map '%s'",4
                              , '#',32,__VlefCall_17__get_n_bytes
                              , 'S',&(__VlefCall_18__get_full_name)
                              , '#',32,this->__PVT__m_n_bytes
                              , 'S',&(__VlefCall_19__get_full_name));
                this->__Vtask_uvm_report_warning__147__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__148__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__148__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__147__id, this->__Vtask_uvm_report_warning__147__message, __Vtask_uvm_report_warning__147__verbosity, this->__Vtask_uvm_report_warning__147__filename, __Vtask_uvm_report_warning__147__line);
            }
        }
        VL_NULL_CHECK(child_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1004)->__VnoInFunc_add_parent_map(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
        this->__VnoInFunc_set_submap_offset(vlSymsp, child_map, offset);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset\n"); );
    // Body
    IData/*31:0*/ unnamedblk455__DOT__i;
    unnamedblk455__DOT__i = 0;
    IData/*31:0*/ unnamedblk455__DOT__i__Vloopsize;
    unnamedblk455__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> regs;
    regs.clear();
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk455__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk455__DOT__i, regs.size())) {
        unnamedblk455__DOT__i__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk455__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1019)->__VnoInFunc_reset(vlSymsp, kind);
        if ((unnamedblk455__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk455__DOT__i = ((IData)(1U) + unnamedblk455__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
    __Vfunc_uvm_report_enabled__154__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
    __Vfunc_uvm_report_enabled__154__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__154____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__155__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__156__Vfuncout;
    __Vtask_uvm_report_enabled__156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__159__verbosity;
    __Vfunc_uvm_report_enabled__159__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__159__severity;
    __Vfunc_uvm_report_enabled__159__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__159____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__159____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__160__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__161__Vfuncout;
    __Vtask_uvm_report_enabled__161__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_5__get_submap_offset;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == parent_map)) {
            this->__Vfunc_uvm_report_enabled__154__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__154__severity = 2U;
            __Vfunc_uvm_report_enabled__154__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__155__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__155__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), this->__Vfunc_uvm_report_enabled__154__id, __Vtask_uvm_report_enabled__156__Vfuncout);
            __Vfunc_uvm_report_enabled__154____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__156__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__154____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempting to add NULL parent map to map '"s, __VlefCall_1__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x00000406U);
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_parent_map)) {
            this->__Vfunc_uvm_report_enabled__159__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__159__severity = 2U;
            __Vfunc_uvm_report_enabled__159__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__160__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__159__verbosity, (IData)(__Vfunc_uvm_report_enabled__159__severity), this->__Vfunc_uvm_report_enabled__159__id, __Vtask_uvm_report_enabled__161__Vfuncout);
            __Vfunc_uvm_report_enabled__159____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__161__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__159____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1038)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1038)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_5__get_submap_offset);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Map \"%s\" already a submap of map \"%s\" at offset 'h%h",3
                                                                                , 'S',&(__VlefCall_3__get_full_name)
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',64,__VlefCall_5__get_submap_offset) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x0000040eU);
            }
            goto __Vlabel0;
        }
        this->__PVT__m_parent_map = parent_map;
        this->__PVT__m_parent_maps.atWrite(parent_map) 
            = offset;
        VL_NULL_CHECK(parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1044)->__PVT__m_submaps.atWrite(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}) 
            = offset;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166__verbosity;
    __Vfunc_uvm_report_enabled__166__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__166__severity;
    __Vfunc_uvm_report_enabled__166__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__167__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__168__Vfuncout;
    __Vtask_uvm_report_enabled__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__171__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__172__Vfuncout;
    __Vtask_uvm_report_enabled__172__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__175__verbosity;
    __Vtask_uvm_report_info__175__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__175__line;
    __Vtask_uvm_report_info__175__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__176__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == sequencer)) {
            this->__Vfunc_uvm_report_enabled__166__id = "REG_NULL_SQR"s;
            __Vfunc_uvm_report_enabled__166__severity = 2U;
            __Vfunc_uvm_report_enabled__166__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__167__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__166__verbosity, (IData)(__Vfunc_uvm_report_enabled__166__severity), this->__Vfunc_uvm_report_enabled__166__id, __Vtask_uvm_report_enabled__168__Vfuncout);
            __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__168__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "REG_NULL_SQR"s, "Null reference specified for bus sequencer"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x0000041fU);
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == adapter)) {
            this->__Vfunc_uvm_report_enabled__170__id = "REG_NO_ADAPT"s;
            __Vfunc_uvm_report_enabled__170__severity = 0U;
            __Vfunc_uvm_report_enabled__170__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__171__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __Vtask_uvm_report_enabled__172__Vfuncout);
            __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__172__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1062)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_info__175__line = 0x00000426U;
                this->__Vtask_uvm_report_info__175__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__175__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__175__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Adapter not specified for map '"s, __VlefCall_2__get_full_name), "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_info__175__id = "REG_NO_ADAPT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__176__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__175__id, this->__Vtask_uvm_report_info__175__message, __Vtask_uvm_report_info__175__verbosity, this->__Vtask_uvm_report_info__175__filename, __Vtask_uvm_report_info__175__line);
            }
        }
        this->__PVT__m_sequencer = sequencer;
        this->__PVT__m_adapter = adapter;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map\n"); );
    // Body
    get_parent_map__Vfuncrtn = this->__PVT__m_parent_map;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCond_1;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__get_root_map;
    if ((VlNull{} == this->__PVT__m_parent_map)) {
        __VlefCond_1 = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this};
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1092)->__VnoInFunc_get_root_map(vlSymsp, __VlefCall_0__get_root_map);
        __VlefCond_1 = __VlefCall_0__get_root_map;
    }
    get_root_map__Vfuncrtn = __VlefCond_1;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_0__get_base_addr;
    {
        get_base_addr__Vfuncrtn = 0ULL;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_base_addr__Vfuncrtn = this->__PVT__m_base_addr;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1102)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, get_base_addr__Vfuncrtn);
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1103)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 1U, __VlefCall_0__get_base_addr);
        get_base_addr__Vfuncrtn = (get_base_addr__Vfuncrtn 
                                   + __VlefCall_0__get_base_addr);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes\n"); );
    // Body
    {
        get_n_bytes__Vfuncrtn = 0U;
        if ((0U == hier)) {
            get_n_bytes__Vfuncrtn = this->__PVT__m_n_bytes;
            goto __Vlabel0;
        }
        get_n_bytes__Vfuncrtn = this->__PVT__m_system_n_bytes;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes\n"); );
    // Body
    get_addr_unit_bytes__Vfuncrtn = ((IData)(this->__PVT__m_byte_addressing)
                                      ? 1U : this->__PVT__m_n_bytes);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian\n"); );
    // Body
    {
        get_endian__Vfuncrtn = 0U;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_endian__Vfuncrtn = this->__PVT__m_endian;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1128)->__VnoInFunc_get_endian(vlSymsp, hier, get_endian__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1137)->__VnoInFunc_get_sequencer(vlSymsp, hier, get_sequencer__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_adapter__Vfuncrtn = this->__PVT__m_adapter;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1146)->__VnoInFunc_get_adapter(vlSymsp, hier, get_adapter__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk456__DOT__submap;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk456__DOT__submap__Vnext;
    CData/*0:0*/ unnamedblk456__DOT__submap__Vmore;
    unnamedblk456__DOT__submap__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk457__DOT__submap_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk457__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk457__DOT__submap___Vmore;
    unnamedblk457__DOT__submap___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk457__DOT__unnamedblk458__DOT__submap;
    unnamedblk456__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk456__DOT__submap__Vnext));
    while (unnamedblk456__DOT__submap__Vmore) {
        unnamedblk456__DOT__submap = unnamedblk456__DOT__submap__Vnext;
        unnamedblk456__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk456__DOT__submap__Vnext));
        maps.push_back(unnamedblk456__DOT__submap);
    }
    if ((1U == hier)) {
        unnamedblk457__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk457__DOT__submap___Vnext));
        while (unnamedblk457__DOT__submap___Vmore) {
            unnamedblk457__DOT__submap_ = unnamedblk457__DOT__submap___Vnext;
            unnamedblk457__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk457__DOT__submap___Vnext));
            unnamedblk457__DOT__unnamedblk458__DOT__submap 
                = unnamedblk457__DOT__submap_;
            VL_NULL_CHECK(unnamedblk457__DOT__unnamedblk458__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1161)->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk459__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk459__DOT__rg__Vnext;
    CData/*0:0*/ unnamedblk459__DOT__rg__Vmore;
    unnamedblk459__DOT__rg__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk460__DOT__submap_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk460__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk460__DOT__submap___Vmore;
    unnamedblk460__DOT__submap___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk460__DOT__unnamedblk461__DOT__submap;
    unnamedblk459__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk459__DOT__rg__Vnext));
    while (unnamedblk459__DOT__rg__Vmore) {
        unnamedblk459__DOT__rg = unnamedblk459__DOT__rg__Vnext;
        unnamedblk459__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk459__DOT__rg__Vnext));
        regs.push_back(unnamedblk459__DOT__rg);
    }
    if ((1U == hier)) {
        unnamedblk460__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk460__DOT__submap___Vnext));
        while (unnamedblk460__DOT__submap___Vmore) {
            unnamedblk460__DOT__submap_ = unnamedblk460__DOT__submap___Vnext;
            unnamedblk460__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk460__DOT__submap___Vnext));
            unnamedblk460__DOT__unnamedblk461__DOT__submap 
                = unnamedblk460__DOT__submap_;
            VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1176)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk462__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk462__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk462__DOT__rg___Vmore;
    unnamedblk462__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk462__DOT__unnamedblk463__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk464__DOT__submap_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk464__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk464__DOT__submap___Vmore;
    unnamedblk464__DOT__submap___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk464__DOT__unnamedblk465__DOT__submap;
    unnamedblk462__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk462__DOT__rg___Vnext));
    while (unnamedblk462__DOT__rg___Vmore) {
        unnamedblk462__DOT__rg_ = unnamedblk462__DOT__rg___Vnext;
        unnamedblk462__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk462__DOT__rg___Vnext));
        unnamedblk462__DOT__unnamedblk463__DOT__rg 
            = unnamedblk462__DOT__rg_;
        VL_NULL_CHECK(unnamedblk462__DOT__unnamedblk463__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1188)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk464__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk464__DOT__submap___Vnext));
        while (unnamedblk464__DOT__submap___Vmore) {
            unnamedblk464__DOT__submap_ = unnamedblk464__DOT__submap___Vnext;
            unnamedblk464__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk464__DOT__submap___Vnext));
            unnamedblk464__DOT__unnamedblk465__DOT__submap 
                = unnamedblk464__DOT__submap_;
            VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1194)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk466__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk466__DOT__mem__Vnext;
    CData/*0:0*/ unnamedblk466__DOT__mem__Vmore;
    unnamedblk466__DOT__mem__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk467__DOT__submap_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk467__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk467__DOT__submap___Vmore;
    unnamedblk467__DOT__submap___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk467__DOT__unnamedblk468__DOT__submap;
    unnamedblk466__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk466__DOT__mem__Vnext));
    while (unnamedblk466__DOT__mem__Vmore) {
        unnamedblk466__DOT__mem = unnamedblk466__DOT__mem__Vnext;
        unnamedblk466__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk466__DOT__mem__Vnext));
        mems.push_back(unnamedblk466__DOT__mem);
    }
    if ((1U == hier)) {
        unnamedblk467__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk467__DOT__submap___Vnext));
        while (unnamedblk467__DOT__submap___Vmore) {
            unnamedblk467__DOT__submap_ = unnamedblk467__DOT__submap___Vnext;
            unnamedblk467__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk467__DOT__submap___Vnext));
            unnamedblk467__DOT__unnamedblk468__DOT__submap 
                = unnamedblk467__DOT__submap_;
            VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1210)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    IData/*31:0*/ unnamedblk469__DOT__i;
    unnamedblk469__DOT__i = 0;
    IData/*31:0*/ unnamedblk469__DOT__i__Vloopsize;
    unnamedblk469__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> mems;
    mems.clear();
    this->__VnoInFunc_get_memories(vlSymsp, mems, hier);
    unnamedblk469__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk469__DOT__i, mems.size())) {
        unnamedblk469__DOT__i__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk469__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1224)->__VnoInFunc_get_virtual_registers(vlSymsp, regs);
        if ((unnamedblk469__DOT__i__Vloopsize <= mems.size())) {
            unnamedblk469__DOT__i = ((IData)(1U) + unnamedblk469__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk470__DOT__i;
    unnamedblk470__DOT__i = 0;
    IData/*31:0*/ unnamedblk470__DOT__i__Vloopsize;
    unnamedblk470__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> regs;
    regs.clear();
    this->__VnoInFunc_get_virtual_registers(vlSymsp, regs, hier);
    unnamedblk470__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk470__DOT__i, regs.size())) {
        unnamedblk470__DOT__i__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk470__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1237)->__VnoInFunc_get_fields(vlSymsp, fields);
        if ((unnamedblk470__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk470__DOT__i = ((IData)(1U) + unnamedblk470__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        if ((VlNull{} == this->__PVT__m_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1252)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__195__verbosity;
    __Vfunc_uvm_report_enabled__195__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__195__severity;
    __Vfunc_uvm_report_enabled__195__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__196__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__197__Vfuncout;
    __Vtask_uvm_report_enabled__197__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            if (error) {
                this->__Vfunc_uvm_report_enabled__195__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__195__severity = 2U;
                __Vfunc_uvm_report_enabled__195__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__196__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__196__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__195__verbosity, (IData)(__Vfunc_uvm_report_enabled__195__severity), this->__Vfunc_uvm_report_enabled__195__id, __Vtask_uvm_report_enabled__197__Vfuncout);
                __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__197__Vfuncout;
                __VlefCall_0__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_0__uvm_report_enabled) {
                    VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1262)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "REG_NO_MAP"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000004eeU);
                }
            }
            get_mem_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_mem_map_info__Vfuncrtn = this->__PVT__m_mems_info
            .at(mem);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__201__verbosity;
    __Vfunc_uvm_report_enabled__201__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__201__severity;
    __Vfunc_uvm_report_enabled__201__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__201____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__201____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__202__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__203__Vfuncout;
    __Vtask_uvm_report_enabled__203__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__207__verbosity;
    __Vfunc_uvm_report_enabled__207__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__207__severity;
    __Vfunc_uvm_report_enabled__207__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__207____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__207____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__208__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__209__Vfuncout;
    __Vtask_uvm_report_enabled__209__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__211__verbosity;
    __Vtask_uvm_report_warning__211__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__211__line;
    __Vtask_uvm_report_warning__211__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__212__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> result;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            if (error) {
                this->__Vfunc_uvm_report_enabled__201__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__201__severity = 2U;
                __Vfunc_uvm_report_enabled__201__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__202__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__202__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__201__verbosity, (IData)(__Vfunc_uvm_report_enabled__201__severity), this->__Vfunc_uvm_report_enabled__201__id, __Vtask_uvm_report_enabled__203__Vfuncout);
                __Vfunc_uvm_report_enabled__201____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__203__Vfuncout;
                __VlefCall_0__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__201____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_0__uvm_report_enabled) {
                    VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1275)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "REG_NO_MAP"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000004fbU);
                }
            }
            get_reg_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        result = this->__PVT__m_regs_info.at(rg);
        if ((1U & (~ VL_NULL_CHECK(result, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1279)
                   ->__PVT__is_initialized))) {
            this->__Vfunc_uvm_report_enabled__207__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__207__severity = 1U;
            __Vfunc_uvm_report_enabled__207__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__208__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__208__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__207__verbosity, (IData)(__Vfunc_uvm_report_enabled__207__severity), this->__Vfunc_uvm_report_enabled__207__id, __Vtask_uvm_report_enabled__209__Vfuncout);
            __Vfunc_uvm_report_enabled__207____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__209__Vfuncout;
            __VlefCall_3__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__207____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_3__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__211__line = 0x00000500U;
                this->__Vtask_uvm_report_warning__211__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__211__verbosity = 0U;
                this->__Vtask_uvm_report_warning__211__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("map '"s, __VlefCall_4__get_name), "' does not seem to be initialized correctly, check that the top register model is locked()"s));
                this->__Vtask_uvm_report_warning__211__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__212__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__212__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__211__id, this->__Vtask_uvm_report_warning__211__message, __Vtask_uvm_report_warning__211__verbosity, this->__Vtask_uvm_report_warning__211__filename, __Vtask_uvm_report_warning__211__line);
            }
        }
        get_reg_map_info__Vfuncrtn = result;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk471__DOT__top_map;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1294)->__VnoInFunc_set_submap_offset(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
    } else {
        this->__PVT__m_base_addr = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1298)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk471__DOT__top_map);
            VL_NULL_CHECK(unnamedblk471__DOT__top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1300)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_size;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    QData/*63:0*/ __VlefCall_1__get_size;
    IData/*31:0*/ __VlefCall_0__get_n_bytes;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk472__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk472__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk472__DOT__rg___Vmore;
    unnamedblk472__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk472__DOT__unnamedblk473__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk474__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk474__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk474__DOT__mem___Vmore;
    unnamedblk474__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk474__DOT__unnamedblk475__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk476__DOT__submap_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk476__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk476__DOT__submap___Vmore;
    unnamedblk476__DOT__submap___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk476__DOT__unnamedblk477__DOT__submap;
    IData/*31:0*/ max_addr;
    IData/*31:0*/ addr;
    get_size__Vfuncrtn = 0U;
    max_addr = 0U;
    addr = 0U;
    unnamedblk472__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk472__DOT__rg___Vnext));
    while (unnamedblk472__DOT__rg___Vmore) {
        unnamedblk472__DOT__rg_ = unnamedblk472__DOT__rg___Vnext;
        unnamedblk472__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk472__DOT__rg___Vnext));
        unnamedblk472__DOT__unnamedblk473__DOT__rg 
            = unnamedblk472__DOT__rg_;
        VL_NULL_CHECK(unnamedblk472__DOT__unnamedblk473__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1316)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_0__get_n_bytes);
        addr = ((IData)(VL_NULL_CHECK(this->__PVT__m_regs_info
                                      .at(unnamedblk472__DOT__unnamedblk473__DOT__rg), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1316)
                        ->__PVT__offset) + (IData)(
                                                   VL_DIV_QQQ(64, 
                                                              ((QData)((IData)(__VlefCall_0__get_n_bytes)) 
                                                               - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes)))));
        max_addr = addr;
    }
    unnamedblk474__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk474__DOT__mem___Vnext));
    while (unnamedblk474__DOT__mem___Vmore) {
        unnamedblk474__DOT__mem_ = unnamedblk474__DOT__mem___Vnext;
        unnamedblk474__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk474__DOT__mem___Vnext));
        unnamedblk474__DOT__unnamedblk475__DOT__mem 
            = unnamedblk474__DOT__mem_;
        VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1324)->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
        VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1324)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        addr = (((IData)(VL_NULL_CHECK(this->__PVT__m_mems_info
                                       .at(unnamedblk474__DOT__unnamedblk475__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1324)
                         ->__PVT__offset) + (IData)(
                                                    (__VlefCall_1__get_size 
                                                     * 
                                                     (1ULL 
                                                      + 
                                                      VL_DIV_QQQ(64, 
                                                                 ((QData)((IData)(__VlefCall_2__get_n_bytes)) 
                                                                  - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes))))))) 
                - (IData)(1U));
        if ((addr > max_addr)) {
            max_addr = addr;
        }
    }
    unnamedblk476__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk476__DOT__submap___Vnext));
    while (unnamedblk476__DOT__submap___Vmore) {
        unnamedblk476__DOT__submap_ = unnamedblk476__DOT__submap___Vnext;
        unnamedblk476__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk476__DOT__submap___Vnext));
        unnamedblk476__DOT__unnamedblk477__DOT__submap 
            = unnamedblk476__DOT__submap_;
        VL_NULL_CHECK(unnamedblk476__DOT__unnamedblk477__DOT__submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1332)->__VnoInFunc_get_size(vlSymsp, __VlefCall_3__get_size);
        addr = ((IData)(this->__PVT__m_submaps.at(unnamedblk476__DOT__unnamedblk477__DOT__submap)) 
                + __VlefCall_3__get_size);
        if ((addr > max_addr)) {
            max_addr = addr;
        }
    }
    get_size__Vfuncrtn = ((IData)(1U) + max_addr);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224__verbosity;
    __Vfunc_uvm_report_enabled__224__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__224__severity;
    __Vfunc_uvm_report_enabled__224__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__224____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__225__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__226__Vfuncout;
    __Vtask_uvm_report_enabled__226__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__230__verbosity;
    __Vfunc_uvm_report_enabled__230__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__230__severity;
    __Vfunc_uvm_report_enabled__230__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__230____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__230____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__231__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__232__Vfuncout;
    __Vtask_uvm_report_enabled__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
    __Vfunc_uvm_report_enabled__235__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
    __Vfunc_uvm_report_enabled__235__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__235____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__236__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__237__Vfuncout;
    __Vtask_uvm_report_enabled__237__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__238__verbosity;
    __Vtask_uvm_report_fatal__238__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__238__line;
    __Vtask_uvm_report_fatal__238__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__239__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> __VlefCall_0__get_adapter;
    CData/*0:0*/ error;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> root_map;
    error = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, root_map);
    VL_NULL_CHECK(root_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1349)->__VnoInFunc_get_adapter(vlSymsp, 1U, __VlefCall_0__get_adapter);
    if ((VlNull{} == __VlefCall_0__get_adapter)) {
        this->__Vfunc_uvm_report_enabled__224__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__224__severity = 2U;
        __Vfunc_uvm_report_enabled__224__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__225__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__224__verbosity, (IData)(__Vfunc_uvm_report_enabled__224__severity), this->__Vfunc_uvm_report_enabled__224__id, __Vtask_uvm_report_enabled__226__Vfuncout);
        __Vfunc_uvm_report_enabled__224____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__226__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__224____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            VL_NULL_CHECK(root_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1351)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' does not have an adapter registered"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x00000547U);
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    VL_NULL_CHECK(root_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1354)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
    if ((VlNull{} == __VlefCall_3__get_sequencer)) {
        this->__Vfunc_uvm_report_enabled__230__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__230__severity = 2U;
        __Vfunc_uvm_report_enabled__230__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__231__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__231__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__230__verbosity, (IData)(__Vfunc_uvm_report_enabled__230__severity), this->__Vfunc_uvm_report_enabled__230__id, __Vtask_uvm_report_enabled__232__Vfuncout);
        __Vfunc_uvm_report_enabled__230____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__232__Vfuncout;
        __VlefCall_4__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__230____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_4__uvm_report_enabled) {
            VL_NULL_CHECK(root_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1356)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_5__get_full_name), "' does not have a sequencer registered"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x0000054cU);
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    if (error) {
        this->__Vfunc_uvm_report_enabled__235__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__235__severity = 3U;
        __Vfunc_uvm_report_enabled__235__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__236__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), this->__Vfunc_uvm_report_enabled__235__id, __Vtask_uvm_report_enabled__237__Vfuncout);
        __Vfunc_uvm_report_enabled__235____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__237__Vfuncout;
        __VlefCall_6__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__235____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_6__uvm_report_enabled) {
            __Vtask_uvm_report_fatal__238__line = 0x00000551U;
            this->__Vtask_uvm_report_fatal__238__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_fatal__238__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__238__message = "Must register an adapter and sequencer for each top-level map in RegModel model"s;
            this->__Vtask_uvm_report_fatal__238__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__239__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__239__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__238__id, this->__Vtask_uvm_report_fatal__238__message, __Vtask_uvm_report_fatal__238__verbosity, this->__Vtask_uvm_report_fatal__238__filename, __Vtask_uvm_report_fatal__238__line);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bytes__241__Vfuncout;
    __Vfunc_get_n_bytes__241__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242__verbosity;
    __Vfunc_uvm_report_enabled__242__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__242__severity;
    __Vfunc_uvm_report_enabled__242__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__243__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__244__Vfuncout;
    __Vtask_uvm_report_enabled__244__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__245__verbosity;
    __Vtask_uvm_report_fatal__245__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__245__line;
    __Vtask_uvm_report_fatal__245__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__246__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__249__verbosity;
    __Vfunc_uvm_report_enabled__249__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__249__severity;
    __Vfunc_uvm_report_enabled__249__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__249____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__249____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__250__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__251__Vfuncout;
    __Vtask_uvm_report_enabled__251__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__258__Vfuncout;
    __Vtask_get_physical_addresses__258__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_endian;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk478__DOT__n;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk479__DOT__i;
    unnamedblk478__DOT__unnamedblk479__DOT__i = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk479__DOT__i__Vloopsize;
    unnamedblk478__DOT__unnamedblk479__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk480__DOT__i;
    unnamedblk478__DOT__unnamedblk480__DOT__i = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk480__DOT__i__Vloopsize;
    unnamedblk478__DOT__unnamedblk480__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk481__DOT__i;
    unnamedblk478__DOT__unnamedblk481__DOT__i = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk481__DOT__i__Vloopsize;
    unnamedblk478__DOT__unnamedblk481__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk482__DOT__i;
    unnamedblk478__DOT__unnamedblk482__DOT__i = 0;
    IData/*31:0*/ unnamedblk478__DOT__unnamedblk482__DOT__i__Vloopsize;
    unnamedblk478__DOT__unnamedblk482__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk483__DOT__i;
    unnamedblk483__DOT__i = 0;
    IData/*31:0*/ unnamedblk483__DOT__i__Vloopsize;
    unnamedblk483__DOT__i__Vloopsize = 0;
    VlQueue<QData/*63:0*/> unnamedblk484__DOT__sys_addr;
    QData/*63:0*/ unnamedblk484__DOT__base_addr;
    IData/*31:0*/ unnamedblk484__DOT__w;
    IData/*31:0*/ unnamedblk484__DOT__k;
    IData/*31:0*/ unnamedblk484__DOT__unnamedblk485__DOT__i;
    unnamedblk484__DOT__unnamedblk485__DOT__i = 0;
    IData/*31:0*/ unnamedblk484__DOT__unnamedblk485__DOT__i__Vloopsize;
    unnamedblk484__DOT__unnamedblk485__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__n;
    IData/*31:0*/ unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j;
    unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j = 0;
    IData/*31:0*/ bus_width;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> up_map;
    VlQueue<QData/*63:0*/> local_addr;
    IData/*31:0*/ multiplier;
    {
        get_physical_addresses__Vfuncrtn = 0U;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__241__Vfuncout);
        bus_width = __Vfunc_get_n_bytes__241__Vfuncout;
        local_addr.clear();
        local_addr.atDefault() = 0;
        multiplier = ((IData)(this->__PVT__m_byte_addressing)
                       ? bus_width : 1U);
        addr.renew(0U);
        if ((0U >= n_bytes)) {
            this->__Vfunc_uvm_report_enabled__242__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__242__severity = 3U;
            __Vfunc_uvm_report_enabled__242__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__243__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__243__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__242__verbosity, (IData)(__Vfunc_uvm_report_enabled__242__severity), this->__Vfunc_uvm_report_enabled__242__id, __Vtask_uvm_report_enabled__244__Vfuncout);
            __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__244__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__245__line = 0x00000568U;
                this->__Vtask_uvm_report_fatal__245__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__245__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__245__message
                              ,"Cannot access %0d bytes. Must be greater than 0",1
                              , '#',32,n_bytes);
                this->__Vtask_uvm_report_fatal__245__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__246__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__246__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__245__id, this->__Vtask_uvm_report_fatal__245__message, __Vtask_uvm_report_fatal__245__verbosity, this->__Vtask_uvm_report_fatal__245__filename, __Vtask_uvm_report_fatal__245__line);
            }
            get_physical_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((n_bytes <= bus_width)) {
            local_addr.renew(1U);
            local_addr.atWrite(0U) = (base_addr + (mem_offset 
                                                   * (QData)((IData)(multiplier))));
        } else {
            unnamedblk478__DOT__n = 0U;
            unnamedblk478__DOT__n = ((IData)(1U) + 
                                     VL_DIV_III(32, 
                                                (n_bytes 
                                                 - (IData)(1U)), bus_width));
            local_addr.renew(unnamedblk478__DOT__n);
            base_addr = (base_addr + (mem_offset * 
                                      ((QData)((IData)(unnamedblk478__DOT__n)) 
                                       * (QData)((IData)(multiplier)))));
            this->__VnoInFunc_get_endian(vlSymsp, 0U, __VlefCall_1__get_endian);
            if ((1U == __VlefCall_1__get_endian)) {
                unnamedblk478__DOT__unnamedblk479__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk478__DOT__unnamedblk479__DOT__i, local_addr.size())) {
                    unnamedblk478__DOT__unnamedblk479__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk478__DOT__unnamedblk479__DOT__i) 
                        = (base_addr + ((QData)((IData)(unnamedblk478__DOT__unnamedblk479__DOT__i)) 
                                        * (QData)((IData)(multiplier))));
                    if ((unnamedblk478__DOT__unnamedblk479__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk478__DOT__unnamedblk479__DOT__i 
                            = ((IData)(1U) + unnamedblk478__DOT__unnamedblk479__DOT__i);
                    }
                }
            } else if ((2U == __VlefCall_1__get_endian)) {
                unnamedblk478__DOT__unnamedblk480__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk478__DOT__unnamedblk480__DOT__i, local_addr.size())) {
                    unnamedblk478__DOT__unnamedblk480__DOT__i__Vloopsize 
                        = local_addr.size();
                    unnamedblk478__DOT__n = (unnamedblk478__DOT__n 
                                             - (IData)(1U));
                    local_addr.atWrite(unnamedblk478__DOT__unnamedblk480__DOT__i) 
                        = (base_addr + ((QData)((IData)(unnamedblk478__DOT__n)) 
                                        * (QData)((IData)(multiplier))));
                    if ((unnamedblk478__DOT__unnamedblk480__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk478__DOT__unnamedblk480__DOT__i 
                            = ((IData)(1U) + unnamedblk478__DOT__unnamedblk480__DOT__i);
                    }
                }
            } else if ((3U == __VlefCall_1__get_endian)) {
                unnamedblk478__DOT__unnamedblk481__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk478__DOT__unnamedblk481__DOT__i, local_addr.size())) {
                    unnamedblk478__DOT__unnamedblk481__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk478__DOT__unnamedblk481__DOT__i) 
                        = base_addr;
                    if ((unnamedblk478__DOT__unnamedblk481__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk478__DOT__unnamedblk481__DOT__i 
                            = ((IData)(1U) + unnamedblk478__DOT__unnamedblk481__DOT__i);
                    }
                }
            } else if ((4U == __VlefCall_1__get_endian)) {
                unnamedblk478__DOT__unnamedblk482__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk478__DOT__unnamedblk482__DOT__i, local_addr.size())) {
                    unnamedblk478__DOT__unnamedblk482__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk478__DOT__unnamedblk482__DOT__i) 
                        = base_addr;
                    if ((unnamedblk478__DOT__unnamedblk482__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk478__DOT__unnamedblk482__DOT__i 
                            = ((IData)(1U) + unnamedblk478__DOT__unnamedblk482__DOT__i);
                    }
                }
            } else {
                this->__Vfunc_uvm_report_enabled__249__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__249__severity = 2U;
                __Vfunc_uvm_report_enabled__249__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__250__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__250__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__249__verbosity, (IData)(__Vfunc_uvm_report_enabled__249__severity), this->__Vfunc_uvm_report_enabled__249__id, __Vtask_uvm_report_enabled__251__Vfuncout);
                __Vfunc_uvm_report_enabled__249____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__251__Vfuncout;
                __VlefCall_2__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__249____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_2__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Map has no specified endianness. "s, VL_SFORMATF_N_NX("Cannot access %0d bytes register via its %0d byte \"%s\" interface",3
                                                                                , '#',32,n_bytes
                                                                                , '~',32,bus_width
                                                                                , 'S',&(__VlefCall_3__get_full_name)) )), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x00000592U);
                }
            }
        }
        this->__VnoInFunc_get_parent_map(vlSymsp, up_map);
        if ((VlNull{} == up_map)) {
            addr.renew_copy(local_addr.size(), local_addr);
            unnamedblk483__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk483__DOT__i, addr.size())) {
                unnamedblk483__DOT__i__Vloopsize = addr.size();
                addr.atWrite(unnamedblk483__DOT__i) 
                    = (addr.at(unnamedblk483__DOT__i) 
                       + this->__PVT__m_base_addr);
                if ((unnamedblk483__DOT__i__Vloopsize 
                     <= addr.size())) {
                    unnamedblk483__DOT__i = ((IData)(1U) 
                                             + unnamedblk483__DOT__i);
                }
            }
        } else {
            unnamedblk484__DOT__sys_addr.clear();
            unnamedblk484__DOT__sys_addr.atDefault() = 0;
            unnamedblk484__DOT__base_addr = 0ULL;
            unnamedblk484__DOT__w = 0U;
            unnamedblk484__DOT__k = 0U;
            VL_NULL_CHECK(up_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1446)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_4__get_n_bytes);
            if ((bus_width < __VlefCall_4__get_n_bytes)) {
                unnamedblk484__DOT__k = 1U;
            } else {
                VL_NULL_CHECK(up_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1449)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_5__get_n_bytes);
                unnamedblk484__DOT__k = ((IData)(1U) 
                                         + VL_DIV_III(32, 
                                                      (bus_width 
                                                       - (IData)(1U)), __VlefCall_5__get_n_bytes));
            }
            VL_NULL_CHECK(up_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1451)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk484__DOT__base_addr);
            unnamedblk484__DOT__unnamedblk485__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk484__DOT__unnamedblk485__DOT__i, local_addr.size())) {
                unnamedblk484__DOT__unnamedblk485__DOT__i__Vloopsize 
                    = local_addr.size();
                unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__n 
                    = addr.size();
                VL_NULL_CHECK(up_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1455)->__VnoInFunc_get_physical_addresses(vlSymsp, 
                                                                                (unnamedblk484__DOT__base_addr 
                                                                                + 
                                                                                (local_addr.at(unnamedblk484__DOT__unnamedblk485__DOT__i) 
                                                                                * (QData)((IData)(unnamedblk484__DOT__k)))), 0ULL, bus_width, unnamedblk484__DOT__sys_addr, __Vtask_get_physical_addresses__258__Vfuncout);
                unnamedblk484__DOT__w = __Vtask_get_physical_addresses__258__Vfuncout;
                addr.renew_copy((unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__n 
                                 + unnamedblk484__DOT__sys_addr.size()), addr);
                unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j, unnamedblk484__DOT__sys_addr.size())) {
                    addr.atWrite((unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__n 
                                  + unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j)) 
                        = unnamedblk484__DOT__sys_addr.at(unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j);
                    unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j 
                        = ((IData)(1U) + unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__j);
                }
                if ((unnamedblk484__DOT__unnamedblk485__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk484__DOT__unnamedblk485__DOT__i 
                        = ((IData)(1U) + unnamedblk484__DOT__unnamedblk485__DOT__i);
                }
            }
            if (VL_LTS_III(32, unnamedblk484__DOT__w, bus_width)) {
                bus_width = unnamedblk484__DOT__w;
            }
        }
        get_physical_addresses__Vfuncrtn = bus_width;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__259__verbosity;
    __Vfunc_uvm_report_enabled__259__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__259__severity;
    __Vfunc_uvm_report_enabled__259__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__259____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__259____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__260__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__261__Vfuncout;
    __Vtask_uvm_report_enabled__261__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__is_locked;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk488__DOT__root_map;
    {
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__259__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__259__severity = 2U;
            __Vfunc_uvm_report_enabled__259__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__260__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__260__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__259__verbosity, (IData)(__Vfunc_uvm_report_enabled__259__severity), this->__Vfunc_uvm_report_enabled__259__id, __Vtask_uvm_report_enabled__261__Vfuncout);
            __Vfunc_uvm_report_enabled__259____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__261__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__259____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL"s, "set_submap_offset: submap handle is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000005ccU);
            }
            goto __Vlabel0;
        }
        this->__PVT__m_submaps.atWrite(submap) = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1488)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_1__is_locked);
        if (__VlefCall_1__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk488__DOT__root_map);
            VL_NULL_CHECK(unnamedblk488__DOT__root_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1490)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__verbosity;
    __Vfunc_uvm_report_enabled__266__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__266__severity;
    __Vfunc_uvm_report_enabled__266__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__266____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__267__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__268__Vfuncout;
    __Vtask_uvm_report_enabled__268__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270__verbosity;
    __Vfunc_uvm_report_enabled__270__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__270__severity;
    __Vfunc_uvm_report_enabled__270__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__271__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__272__Vfuncout;
    __Vtask_uvm_report_enabled__272__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_submap_offset__Vfuncrtn = 0ULL;
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__266__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__266__severity = 2U;
            __Vfunc_uvm_report_enabled__266__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__267__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__267__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__266__verbosity, (IData)(__Vfunc_uvm_report_enabled__266__severity), this->__Vfunc_uvm_report_enabled__266__id, __Vtask_uvm_report_enabled__268__Vfuncout);
            __Vfunc_uvm_report_enabled__266____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__268__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__266____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL"s, "set_submap_offset: submap handle is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000005dbU);
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_submaps.exists(submap))) {
            this->__Vfunc_uvm_report_enabled__270__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__270__severity = 2U;
            __Vfunc_uvm_report_enabled__270__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__271__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__271__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__270__verbosity, (IData)(__Vfunc_uvm_report_enabled__270__severity), this->__Vfunc_uvm_report_enabled__270__id, __Vtask_uvm_report_enabled__272__Vfuncout);
            __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__272__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                VL_NULL_CHECK(submap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1504)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' is not a submap of '"s), __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000005e0U);
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_submap_offset__Vfuncrtn = this->__PVT__m_submaps
            .at(submap);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__277__verbosity;
    __Vfunc_uvm_report_enabled__277__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__277__severity;
    __Vfunc_uvm_report_enabled__277__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__277____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__277____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__278__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__279__Vfuncout;
    __Vtask_uvm_report_enabled__279__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1515)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if ((1U & (~ (IData)(__VlefCall_0__is_locked)))) {
            this->__Vfunc_uvm_report_enabled__277__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__277__severity = 2U;
            __Vfunc_uvm_report_enabled__277__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__278__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__278__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__277__verbosity, (IData)(__Vfunc_uvm_report_enabled__277__severity), this->__Vfunc_uvm_report_enabled__277__id, __Vtask_uvm_report_enabled__279__Vfuncout);
            __Vfunc_uvm_report_enabled__277____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__279__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__277____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1516)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot get register by offset: Block %s is not locked.",1
                                                                                , 'S',&(__VlefCall_2__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000005ecU);
            }
            get_reg_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((1U & (~ (IData)(read))) && this->__PVT__m_regs_by_offset_wo.exists(offset))) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset_wo
                .at(offset);
            goto __Vlabel0;
        }
        if (this->__PVT__m_regs_by_offset.exists(offset)) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset
                .at(offset);
            goto __Vlabel0;
        }
        get_reg_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__283__verbosity;
    __Vfunc_uvm_report_enabled__283__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__283__severity;
    __Vfunc_uvm_report_enabled__283__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__283____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__283____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__284__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__285__Vfuncout;
    __Vtask_uvm_report_enabled__285__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlWide<5>/*159:0*/ unnamedblk489__DOT__range;
    VL_ZERO_W(160, unnamedblk489__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk489__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk489__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk489__DOT__range__Vmore;
    unnamedblk489__DOT__range__Vmore = 0;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1533)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if ((1U & (~ (IData)(__VlefCall_0__is_locked)))) {
            this->__Vfunc_uvm_report_enabled__283__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__283__severity = 2U;
            __Vfunc_uvm_report_enabled__283__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__284__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__283__verbosity, (IData)(__Vfunc_uvm_report_enabled__283__severity), this->__Vfunc_uvm_report_enabled__283__id, __Vtask_uvm_report_enabled__285__Vfuncout);
            __Vfunc_uvm_report_enabled__283____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__285__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__283____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1534)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot memory register by offset: Block %s is not locked.",1
                                                                                , 'S',&(__VlefCall_2__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s, 0x000005feU);
            }
            get_mem_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        unnamedblk489__DOT__range__Vmore = (0U != this->__PVT__m_mems_by_offset.first(unnamedblk489__DOT__range__Vnext));
        while (unnamedblk489__DOT__range__Vmore) {
            unnamedblk489__DOT__range[0U] = unnamedblk489__DOT__range__Vnext[0U];
            unnamedblk489__DOT__range[1U] = unnamedblk489__DOT__range__Vnext[1U];
            unnamedblk489__DOT__range[2U] = unnamedblk489__DOT__range__Vnext[2U];
            unnamedblk489__DOT__range[3U] = unnamedblk489__DOT__range__Vnext[3U];
            unnamedblk489__DOT__range[4U] = unnamedblk489__DOT__range__Vnext[4U];
            unnamedblk489__DOT__range__Vmore = (0U 
                                                != this->__PVT__m_mems_by_offset.next(unnamedblk489__DOT__range__Vnext));
            if ((((((QData)((IData)(unnamedblk489__DOT__range[4U])) 
                    << 0x00000020U) | (QData)((IData)(unnamedblk489__DOT__range[3U]))) 
                  <= offset) & (offset <= (((QData)((IData)(unnamedblk489__DOT__range[2U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(unnamedblk489__DOT__range[1U])))))) {
                get_mem_by_offset__Vfuncrtn = this->__PVT__m_mems_by_offset
                    .at(unnamedblk489__DOT__range);
                goto __Vlabel0;
            }
        }
        get_mem_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_physical_addresses__292__Vfuncout;
    __Vfunc_get_physical_addresses__292__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__298__verbosity;
    __Vfunc_uvm_report_enabled__298__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__298__severity;
    __Vfunc_uvm_report_enabled__298__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__298____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__298____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__299__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__300__Vfuncout;
    __Vtask_uvm_report_enabled__300__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__304__verbosity;
    __Vtask_uvm_report_warning__304__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__304__line;
    __Vtask_uvm_report_warning__304__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__305__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__307__verbosity;
    __Vfunc_uvm_report_enabled__307__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__307__severity;
    __Vfunc_uvm_report_enabled__307__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__307____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__307____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__308__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__309__Vfuncout;
    __Vtask_uvm_report_enabled__309__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__verbosity;
    __Vtask_uvm_report_warning__313__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__line;
    __Vtask_uvm_report_warning__313__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__314__Vfuncout;
    IData/*31:0*/ __Vfunc_get_physical_addresses__317__Vfuncout;
    __Vfunc_get_physical_addresses__317__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__320__Vfuncout;
    __Vtask_get_physical_addresses__320__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__322__verbosity;
    __Vfunc_uvm_report_enabled__322__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__322__severity;
    __Vfunc_uvm_report_enabled__322__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__322____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__322____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__323__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__324__Vfuncout;
    __Vtask_uvm_report_enabled__324__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__328__verbosity;
    __Vtask_uvm_report_warning__328__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__328__line;
    __Vtask_uvm_report_warning__328__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__329__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__331__verbosity;
    __Vfunc_uvm_report_enabled__331__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__331__severity;
    __Vfunc_uvm_report_enabled__331__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__331____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__331____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__332__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__333__Vfuncout;
    __Vtask_uvm_report_enabled__333__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__verbosity;
    __Vtask_uvm_report_warning__337__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__line;
    __Vtask_uvm_report_warning__337__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__338__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    std::string __VlefCall_18__get_full_name;
    CData/*0:0*/ __VlefCall_17__uvm_report_enabled;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    CData/*0:0*/ __VlefCall_13__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_12__get_size;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    QData/*63:0*/ __VlefCall_10__get_size;
    IData/*31:0*/ __VlefCall_9__get_n_bytes;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__get_n_bytes;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk490__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk490__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk490__DOT__l__Vmore;
    unnamedblk490__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk490__DOT__unnamedblk491__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk492__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk492__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk492__DOT__rg___Vmore;
    unnamedblk492__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk492__DOT__unnamedblk493__DOT__rg;
    std::string unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg_acc;
    VlQueue<QData/*63:0*/> unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs;
    IData/*31:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i;
    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i = 0;
    IData/*31:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i__Vloopsize;
    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2;
    std::string unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2_acc;
    std::string unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__unnamedblk498__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range;
    VL_ZERO_W(160, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vmore;
    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vmore = 0;
    std::string unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__a;
    std::string unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__b;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk501__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk501__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk501__DOT__mem___Vmore;
    unnamedblk501__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk501__DOT__unnamedblk502__DOT__mem;
    VlQueue<QData/*63:0*/> unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min2;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max2;
    IData/*31:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__stride;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr;
    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr = 0;
    QData/*63:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vnext;
    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vnext = 0;
    CData/*0:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vmore;
    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vmore = 0;
    std::string unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range;
    VL_ZERO_W(160, unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vmore;
    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vmore = 0;
    std::string unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__unnamedblk507__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range;
    IData/*31:0*/ bus_width;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> top_map;
    bus_width = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, top_map);
    if ((VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this} 
         == top_map)) {
        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1557)->__PVT__m_regs_by_offset.clear();
        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1558)->__PVT__m_regs_by_offset_wo.clear();
        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1559)->__PVT__m_mems_by_offset.clear();
    }
    unnamedblk490__DOT__l__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk490__DOT__l__Vnext));
    while (unnamedblk490__DOT__l__Vmore) {
        unnamedblk490__DOT__l = unnamedblk490__DOT__l__Vnext;
        unnamedblk490__DOT__l__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk490__DOT__l__Vnext));
        unnamedblk490__DOT__unnamedblk491__DOT__map 
            = unnamedblk490__DOT__l;
        VL_NULL_CHECK(unnamedblk490__DOT__unnamedblk491__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1564)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
    }
    unnamedblk492__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk492__DOT__rg___Vnext));
    while (unnamedblk492__DOT__rg___Vmore) {
        unnamedblk492__DOT__rg_ = unnamedblk492__DOT__rg___Vnext;
        unnamedblk492__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk492__DOT__rg___Vnext));
        unnamedblk492__DOT__unnamedblk493__DOT__rg 
            = unnamedblk492__DOT__rg_;
        VL_NULL_CHECK(this->__PVT__m_regs_info.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__rg), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1569)->__PVT__is_initialized = 1U;
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_regs_info
                                   .at(unnamedblk492__DOT__unnamedblk493__DOT__rg), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1570)
                   ->__PVT__unmapped))) {
            VL_NULL_CHECK(unnamedblk492__DOT__unnamedblk493__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1571)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg_acc);
            unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.clear();
            unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.atDefault() = 0;
            VL_NULL_CHECK(unnamedblk492__DOT__unnamedblk493__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1574)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_0__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                            .at(unnamedblk492__DOT__unnamedblk493__DOT__rg), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1574)
                                                     ->__PVT__offset, 0ULL, __VlefCall_0__get_n_bytes, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs, __Vfunc_get_physical_addresses__292__Vfuncout);
            bus_width = __Vfunc_get_physical_addresses__292__Vfuncout;
            unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.size())) {
                unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i__Vloopsize 
                    = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.size();
                unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr 
                    = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.at(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i);
                if (VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1579)
                    ->__PVT__m_regs_by_offset.exists(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr)) {
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2 
                        = VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1581)
                        ->__PVT__m_regs_by_offset.at(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr);
                    VL_NULL_CHECK(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1582)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2_acc);
                    if ((("RO"s == unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg_acc) 
                         & ("WO"s == unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2_acc))) {
                        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1587)->__PVT__m_regs_by_offset.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr) 
                            = unnamedblk492__DOT__unnamedblk493__DOT__rg;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk492__DOT__unnamedblk493__DOT__rg);
                        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1589)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr) 
                            = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2);
                    } else if ((("WO"s == unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg_acc) 
                                & ("RO"s == unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2_acc))) {
                        VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1593)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr) 
                            = unnamedblk492__DOT__unnamedblk493__DOT__rg;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk492__DOT__unnamedblk493__DOT__rg);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__rg2);
                    } else {
                        unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__unnamedblk498__DOT__a = ""s;
                        VL_SFORMAT_NX(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__unnamedblk498__DOT__a
                                      ,"%0h",1, '#',64,unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr);
                        this->__Vfunc_uvm_report_enabled__298__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__298__severity = 1U;
                        __Vfunc_uvm_report_enabled__298__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__299__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__299__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__298__verbosity, (IData)(__Vfunc_uvm_report_enabled__298__severity), this->__Vfunc_uvm_report_enabled__298__id, __Vtask_uvm_report_enabled__300__Vfuncout);
                        __Vfunc_uvm_report_enabled__298____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__300__Vfuncout;
                        __VlefCall_1__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__298____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_1__uvm_report_enabled) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            VL_NULL_CHECK(unnamedblk492__DOT__unnamedblk493__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1602)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1602)
                                          ->__PVT__m_regs_by_offset
                                          .at(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1602)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            __Vtask_uvm_report_warning__304__line = 0x00000642U;
                            this->__Vtask_uvm_report_warning__304__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__304__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__304__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_2__get_full_name), "' register '"s), __VlefCall_3__get_full_name), "' maps to same address as register '"s), __VlefCall_4__get_full_name), "': 'h"s), unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk497__DOT__unnamedblk498__DOT__a));
                            this->__Vtask_uvm_report_warning__304__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__305__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vfunc_get__305__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__304__id, this->__Vtask_uvm_report_warning__304__message, __Vtask_uvm_report_warning__304__verbosity, this->__Vtask_uvm_report_warning__304__filename, __Vtask_uvm_report_warning__304__line);
                        }
                    }
                } else {
                    VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1606)->__PVT__m_regs_by_offset.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr) 
                        = unnamedblk492__DOT__unnamedblk493__DOT__rg;
                }
                unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1608)
                       ->__PVT__m_mems_by_offset.first(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext));
                while (unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vmore) {
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[0U] 
                        = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext[0U];
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[1U] 
                        = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext[1U];
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[2U] 
                        = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext[2U];
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[3U] 
                        = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext[3U];
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[4U] 
                        = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext[4U];
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1608)
                           ->__PVT__m_mems_by_offset.next(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range__Vnext));
                    if (((unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr 
                          >= (((QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[3U])))) 
                         & (unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr 
                            <= (((QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[1U])))))) {
                        unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__a = ""s;
                        unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__a
                                      ,"%0h",1, '#',64,unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__addr);
                        VL_SFORMAT_NX(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__b
                                      ,"[%0h:%0h]",2
                                      , '#',64,(((QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[4U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[3U])))
                                      , '#',64,(((QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range[1U]))));
                        this->__Vfunc_uvm_report_enabled__307__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__307__severity = 1U;
                        __Vfunc_uvm_report_enabled__307__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__308__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__307__verbosity, (IData)(__Vfunc_uvm_report_enabled__307__severity), this->__Vfunc_uvm_report_enabled__307__id, __Vtask_uvm_report_enabled__309__Vfuncout);
                        __Vfunc_uvm_report_enabled__307____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__309__Vfuncout;
                        __VlefCall_5__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__307____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_5__uvm_report_enabled) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                            VL_NULL_CHECK(unnamedblk492__DOT__unnamedblk493__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1616)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1616)
                                          ->__PVT__m_mems_by_offset
                                          .at(unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__range), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1616)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                            __Vtask_uvm_report_warning__313__line = 0x00000650U;
                            this->__Vtask_uvm_report_warning__313__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__313__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__313__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_6__get_full_name), "' register '"s), __VlefCall_7__get_full_name), "' with address "s), unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__a), "maps to same address as memory '"s), __VlefCall_8__get_full_name), "': "s), unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__unnamedblk496__DOT__unnamedblk499__DOT__unnamedblk500__DOT__b));
                            this->__Vtask_uvm_report_warning__313__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__314__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vfunc_get__314__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__313__id, this->__Vtask_uvm_report_warning__313__message, __Vtask_uvm_report_warning__313__verbosity, this->__Vtask_uvm_report_warning__313__filename, __Vtask_uvm_report_warning__313__line);
                        }
                    }
                }
                if ((unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i__Vloopsize 
                     <= unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs.size())) {
                    unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i 
                        = ((IData)(1U) + unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__i);
                }
            }
            VL_NULL_CHECK(this->__PVT__m_regs_info.atWrite(unnamedblk492__DOT__unnamedblk493__DOT__rg), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1620)->__PVT__addr 
                = unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__addrs;
        }
    }
    unnamedblk501__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk501__DOT__mem___Vnext));
    while (unnamedblk501__DOT__mem___Vmore) {
        unnamedblk501__DOT__mem_ = unnamedblk501__DOT__mem___Vnext;
        unnamedblk501__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk501__DOT__mem___Vnext));
        unnamedblk501__DOT__unnamedblk502__DOT__mem 
            = unnamedblk501__DOT__mem_;
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_mems_info
                                   .at(unnamedblk501__DOT__unnamedblk502__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1626)
                   ->__PVT__unmapped))) {
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.clear();
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.atDefault() = 0;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.clear();
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.atDefault() = 0;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min = 0ULL;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max = 0ULL;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min2 = 0ULL;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max2 = 0ULL;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__stride = 0U;
            VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1632)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_9__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                            .at(unnamedblk501__DOT__unnamedblk502__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1632)
                                                     ->__PVT__offset, 0ULL, __VlefCall_9__get_n_bytes, unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs, __Vfunc_get_physical_addresses__317__Vfuncout);
            bus_width = __Vfunc_get_physical_addresses__317__Vfuncout;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min 
                = ((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.at(0U) 
                    < unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.at(
                                                                                (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.size() 
                                                                                - (IData)(1U))))
                    ? unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.at(0U)
                    : unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.at(
                                                                                (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.size() 
                                                                                - (IData)(1U))));
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min2 
                = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs.at(0U);
            VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1636)->__VnoInFunc_get_size(vlSymsp, __VlefCall_10__get_size);
            VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1636)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                            .at(unnamedblk501__DOT__unnamedblk502__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1636)
                                                     ->__PVT__offset, 
                                                     (__VlefCall_10__get_size 
                                                      - 1ULL), __VlefCall_11__get_n_bytes, unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max, __Vtask_get_physical_addresses__320__Vfuncout);
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max 
                = ((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.at(0U) 
                    > unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.at(
                                                                                (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                    ? unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.at(0U)
                    : unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.at(
                                                                                (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max2 
                = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs_max.at(0U);
            VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1640)->__VnoInFunc_get_size(vlSymsp, __VlefCall_12__get_size);
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__stride 
                = (IData)(VL_DIV_QQQ(64, (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max2 
                                          - unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min2), 
                                     (__VlefCall_12__get_size 
                                      - 1ULL)));
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vmore 
                = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1642)
                   ->__PVT__m_regs_by_offset.first(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vnext));
            while (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vmore) {
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vnext;
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1642)
                       ->__PVT__m_regs_by_offset.next(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr__Vnext));
                if (((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr 
                      >= unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min) 
                     & (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr 
                        <= unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max))) {
                    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a = ""s;
                    VL_SFORMAT_NX(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a
                                  ,"%0h",1, '#',64,unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr);
                    this->__Vfunc_uvm_report_enabled__322__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__322__severity = 1U;
                    __Vfunc_uvm_report_enabled__322__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__323__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__323__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__322__verbosity, (IData)(__Vfunc_uvm_report_enabled__322__severity), this->__Vfunc_uvm_report_enabled__322__id, __Vtask_uvm_report_enabled__324__Vfuncout);
                    __Vfunc_uvm_report_enabled__322____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__324__Vfuncout;
                    __VlefCall_13__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__322____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_13__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1648)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1648)
                                      ->__PVT__m_regs_by_offset
                                      .at(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__reg_addr), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1648)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        __Vtask_uvm_report_warning__328__line = 0x00000670U;
                        this->__Vtask_uvm_report_warning__328__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__328__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__328__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_14__get_full_name), "' memory '"s), __VlefCall_15__get_full_name), "' maps to same address as register '"s), __VlefCall_16__get_full_name), "': 'h"s), unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a));
                        this->__Vtask_uvm_report_warning__328__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__329__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vfunc_get__329__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__328__id, this->__Vtask_uvm_report_warning__328__message, __Vtask_uvm_report_warning__328__verbosity, this->__Vtask_uvm_report_warning__328__filename, __Vtask_uvm_report_warning__328__line);
                    }
                }
            }
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vmore 
                = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1652)
                   ->__PVT__m_mems_by_offset.first(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext));
            while (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vmore) {
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[0U] 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext[0U];
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[1U] 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext[1U];
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[2U] 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext[2U];
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[3U] 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext[3U];
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[4U] 
                    = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext[4U];
                unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1652)
                       ->__PVT__m_mems_by_offset.next(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range__Vnext));
                if (((((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min 
                        <= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[2U])) 
                             << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[1U])))) 
                       & (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max 
                          >= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[1U]))))) 
                      | ((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min 
                          <= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[3U])))) 
                         & (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max 
                            >= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[3U])))))) 
                     | ((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min 
                         >= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[4U])) 
                              << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[3U])))) 
                        & (unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max 
                           <= (((QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range[1U]))))))) {
                    unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__unnamedblk507__DOT__a = ""s;
                    VL_SFORMAT_NX(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__unnamedblk507__DOT__a
                                  ,"[%0h:%0h]",2, '#',64,unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min
                                  , '#',64,unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max);
                    this->__Vfunc_uvm_report_enabled__331__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__331__severity = 1U;
                    __Vfunc_uvm_report_enabled__331__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__332__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__331__verbosity, (IData)(__Vfunc_uvm_report_enabled__331__severity), this->__Vfunc_uvm_report_enabled__331__id, __Vtask_uvm_report_enabled__333__Vfuncout);
                    __Vfunc_uvm_report_enabled__331____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__333__Vfuncout;
                    __VlefCall_17__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__331____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_17__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                        VL_NULL_CHECK(unnamedblk501__DOT__unnamedblk502__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1660)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1660)
                                      ->__PVT__m_mems_by_offset
                                      .at(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__range), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1660)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        __Vtask_uvm_report_warning__337__line = 0x0000067cU;
                        this->__Vtask_uvm_report_warning__337__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__337__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__337__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_18__get_full_name), "' memory '"s), __VlefCall_19__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_20__get_full_name), "': 'h"s), unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk506__DOT__unnamedblk507__DOT__a));
                        this->__Vtask_uvm_report_warning__337__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__338__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vfunc_get__338__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__337__id, this->__Vtask_uvm_report_warning__337__message, __Vtask_uvm_report_warning__337__verbosity, this->__Vtask_uvm_report_warning__337__filename, __Vtask_uvm_report_warning__337__line);
                    }
                }
            }
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range[0U] 
                = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__stride;
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range[1U] 
                = (IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max);
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range[2U] 
                = (IData)((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__max 
                           >> 0x00000020U));
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range[3U] 
                = (IData)(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min);
            unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range[4U] 
                = (IData)((unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__min 
                           >> 0x00000020U));
            VL_NULL_CHECK(top_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1666)->__PVT__m_mems_by_offset.atWrite(unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range) 
                = unnamedblk501__DOT__unnamedblk502__DOT__mem;
            VL_NULL_CHECK(this->__PVT__m_mems_info.atWrite(unnamedblk501__DOT__unnamedblk502__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1667)->__PVT__addr 
                = unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__addrs;
            VL_ASSIGN_W(160, VL_NULL_CHECK(this->__PVT__m_mems_info
                                           .atWrite(unnamedblk501__DOT__unnamedblk502__DOT__mem), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1668)
                        ->__PVT__mem_range, unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__unnamedblk508__DOT__range);
        }
    }
    if ((0U == bus_width)) {
        bus_width = this->__PVT__m_n_bytes;
    }
    this->__PVT__m_system_n_bytes = bus_width;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__340__verbosity;
    __Vfunc_uvm_report_enabled__340__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__340__severity;
    __Vfunc_uvm_report_enabled__340__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__340____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__340____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__341__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__342__Vfuncout;
    __Vtask_uvm_report_enabled__342__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__344__verbosity;
    __Vtask_uvm_report_fatal__344__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__344__line;
    __Vtask_uvm_report_fatal__344__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__345__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__348__Vfuncout;
    __Vtask_get_n_bits__348__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__349__verbosity;
    __Vfunc_uvm_report_enabled__349__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__349__severity;
    __Vfunc_uvm_report_enabled__349__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__349____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__349____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__350__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__351__Vfuncout;
    __Vtask_uvm_report_enabled__351__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__353__verbosity;
    __Vtask_uvm_report_fatal__353__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__353__line;
    __Vtask_uvm_report_fatal__353__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__354__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__357__Vfuncout;
    __Vtask_get_n_bits__357__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358__verbosity;
    __Vfunc_uvm_report_enabled__358__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__358__severity;
    __Vfunc_uvm_report_enabled__358__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__360__Vfuncout;
    __Vtask_uvm_report_enabled__360__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__362__verbosity;
    __Vtask_uvm_report_fatal__362__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__362__line;
    __Vtask_uvm_report_fatal__362__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__363__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__367__Vfuncout;
    __Vtask_get_n_bits__367__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__368__Vfuncout;
    __Vtask_get_lsb_pos__368__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_13__get_n_bytes;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> __VlefCall_12__get_parent;
    std::string __VlefCall_11__get_name;
    CData/*0:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_9;
    IData/*31:0*/ __VlefExpr_8;
    std::string __VlefCall_7__get_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_5;
    IData/*31:0*/ __VlefExpr_4;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk509__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk510__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk511__DOT__field;
    size = 0U;
    lsb = 0U;
    addr_skip = 0U;
    if ((2U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1691)
         ->__PVT__element_kind)) {
        __VlefLogOr_1 = (VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1693)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1693)
                                           ->__PVT__element, unnamedblk509__DOT__mem);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            this->__Vfunc_uvm_report_enabled__340__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__340__severity = 3U;
            __Vfunc_uvm_report_enabled__340__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__341__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__341__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__340__verbosity, (IData)(__Vfunc_uvm_report_enabled__340__severity), this->__Vfunc_uvm_report_enabled__340__id, __Vtask_uvm_report_enabled__342__Vfuncout);
            __Vfunc_uvm_report_enabled__340____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__342__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__340____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1695)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                __Vtask_uvm_report_fatal__344__line = 0x0000069fU;
                this->__Vtask_uvm_report_fatal__344__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__344__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__344__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_MEM, but 'element' does not point to a memory: "s, __VlefCall_3__get_name));
                this->__Vtask_uvm_report_fatal__344__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__345__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__345__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__344__id, this->__Vtask_uvm_report_fatal__344__message, __Vtask_uvm_report_fatal__344__verbosity, this->__Vtask_uvm_report_fatal__344__filename, __Vtask_uvm_report_fatal__344__line);
            }
        }
        this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk509__DOT__mem, 1U, map_info);
        VL_NULL_CHECK(unnamedblk509__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1697)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__348__Vfuncout);
        size = __Vtask_get_n_bits__348__Vfuncout;
    } else if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1699)
                ->__PVT__element_kind)) {
        __VlefLogOr_5 = (VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1701)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            __VlefExpr_4 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1701)
                                           ->__PVT__element, unnamedblk510__DOT__rg);
            __VlefLogOr_5 = (! __VlefExpr_4);
        }
        if (__VlefLogOr_5) {
            this->__Vfunc_uvm_report_enabled__349__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__349__severity = 3U;
            __Vfunc_uvm_report_enabled__349__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__350__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__350__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__349__verbosity, (IData)(__Vfunc_uvm_report_enabled__349__severity), this->__Vfunc_uvm_report_enabled__349__id, __Vtask_uvm_report_enabled__351__Vfuncout);
            __Vfunc_uvm_report_enabled__349____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__351__Vfuncout;
            __VlefCall_6__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__349____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_6__uvm_report_enabled) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1703)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                __Vtask_uvm_report_fatal__353__line = 0x000006a7U;
                this->__Vtask_uvm_report_fatal__353__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__353__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__353__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_REG, but 'element' does not point to a register: "s, __VlefCall_7__get_name));
                this->__Vtask_uvm_report_fatal__353__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__354__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__354__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__353__id, this->__Vtask_uvm_report_fatal__353__message, __Vtask_uvm_report_fatal__353__verbosity, this->__Vtask_uvm_report_fatal__353__filename, __Vtask_uvm_report_fatal__353__line);
            }
        }
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk510__DOT__rg, 1U, map_info);
        VL_NULL_CHECK(unnamedblk510__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1705)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__357__Vfuncout);
        size = __Vtask_get_n_bits__357__Vfuncout;
    } else if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1707)
                ->__PVT__element_kind)) {
        __VlefLogOr_9 = (VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1709)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_9)))) {
            __VlefExpr_8 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1709)
                                           ->__PVT__element, unnamedblk511__DOT__field);
            __VlefLogOr_9 = (! __VlefExpr_8);
        }
        if (__VlefLogOr_9) {
            this->__Vfunc_uvm_report_enabled__358__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__358__severity = 3U;
            __Vfunc_uvm_report_enabled__358__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__359__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__359__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__358__verbosity, (IData)(__Vfunc_uvm_report_enabled__358__severity), this->__Vfunc_uvm_report_enabled__358__id, __Vtask_uvm_report_enabled__360__Vfuncout);
            __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__360__Vfuncout;
            __VlefCall_10__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_10__uvm_report_enabled) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1711)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                __Vtask_uvm_report_fatal__362__line = 0x000006afU;
                this->__Vtask_uvm_report_fatal__362__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__362__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__362__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_FIELD, but 'element' does not point to a field: "s, __VlefCall_11__get_name));
                this->__Vtask_uvm_report_fatal__362__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__363__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__362__id, this->__Vtask_uvm_report_fatal__362__message, __Vtask_uvm_report_fatal__362__verbosity, this->__Vtask_uvm_report_fatal__362__filename, __Vtask_uvm_report_fatal__362__line);
            }
        }
        VL_NULL_CHECK(unnamedblk511__DOT__field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1712)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_12__get_parent);
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, __VlefCall_12__get_parent, 1U, map_info);
        VL_NULL_CHECK(unnamedblk511__DOT__field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1713)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__367__Vfuncout);
        size = __Vtask_get_n_bits__367__Vfuncout;
        VL_NULL_CHECK(unnamedblk511__DOT__field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1714)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__368__Vfuncout);
        lsb = __Vtask_get_lsb_pos__368__Vfuncout;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_13__get_n_bytes);
        addr_skip = VL_DIV_III(32, lsb, (__VlefCall_13__get_n_bytes 
                                         << 3U));
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_1__new;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk512__DOT__o;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk512__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1728)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1729)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1731)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1734)
                      ->__PVT__parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1734)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk512__DOT__o);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(unnamedblk512__DOT__o, unnamedblk512__DOT__seq);
            if (VL_LIKELY(((! __VlefExpr_0)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1735: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_write.unnamedblk512", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1735, "");
                }
            }
        }
        VL_NULL_CHECK(unnamedblk512__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1736)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1736)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1737)->__PVT__parent 
            = unnamedblk512__DOT__seq;
        tmp_parent_seq = unnamedblk512__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1741)
         ->__PVT__parent)) {
        __VlefCall_1__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1742)->__PVT__parent 
            = __VlefCall_1__new;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1743)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1747)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1748)
                               ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1748)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1748)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1749)
                               ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1749)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1750)
                               ->__PVT__end_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1750)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1757)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_1__new;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk513__DOT__o;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk513__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1768)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1769)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1771)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1774)
                      ->__PVT__parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1774)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk513__DOT__o);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(unnamedblk513__DOT__o, unnamedblk513__DOT__seq);
            if (VL_LIKELY(((! __VlefExpr_0)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1775: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_read.unnamedblk513", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1775, "");
                }
            }
        }
        VL_NULL_CHECK(unnamedblk513__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1776)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1776)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1777)->__PVT__parent 
            = unnamedblk513__DOT__seq;
        tmp_parent_seq = unnamedblk513__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1781)
         ->__PVT__parent)) {
        __VlefCall_1__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1782)->__PVT__parent 
            = __VlefCall_1__new;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1783)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1787)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1788)
                               ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1788)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1788)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1789)
                               ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1789)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1790)
                               ->__PVT__end_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1790)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1797)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__396__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__396__size;
    __Vtask_Xget_bus_infoX__396__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__396__lsb;
    __Vtask_Xget_bus_infoX__396__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__396__addr_skip;
    __Vtask_Xget_bus_infoX__396__addr_skip = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__398__verbosity;
    __Vfunc_uvm_report_enabled__398__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__398__severity;
    __Vfunc_uvm_report_enabled__398__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__398____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__398____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__399__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__400__Vfuncout;
    __Vtask_uvm_report_enabled__400__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__403__verbosity;
    __Vtask_uvm_report_info__403__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__403__line;
    __Vtask_uvm_report_info__403__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__407__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__409__verbosity;
    __Vfunc_uvm_report_enabled__409__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__409__severity;
    __Vfunc_uvm_report_enabled__409__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__410__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__411__Vfuncout;
    __Vtask_uvm_report_enabled__411__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__413__verbosity;
    __Vtask_uvm_report_fatal__413__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__413__line;
    __Vtask_uvm_report_fatal__413__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__414__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__421__response;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__426__verbosity;
    __Vfunc_uvm_report_enabled__426__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__426__severity;
    __Vfunc_uvm_report_enabled__426__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__426____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__426____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__427__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__428__Vfuncout;
    __Vtask_uvm_report_enabled__428__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__431__verbosity;
    __Vtask_uvm_report_info__431__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__431__line;
    __Vtask_uvm_report_info__431__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__432__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_type_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk514__DOT__i;
    unnamedblk514__DOT__i = 0;
    IData/*31:0*/ unnamedblk514__DOT__i__Vloopsize;
    unnamedblk514__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk515__DOT__val_idx;
    unnamedblk515__DOT__val_idx = 0;
    IData/*31:0*/ unnamedblk515__DOT__val_idx__Vloopsize;
    unnamedblk515__DOT__val_idx__Vloopsize = 0;
    QData/*63:0*/ unnamedblk515__DOT__foreach_value__DOT__value;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i;
    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i = 0;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i__Vloopsize;
    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req;
    Vcsi2_tb_top_uvm_reg_bus_op__struct__0 unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access;
    QData/*63:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk520__DOT__bus_rsp;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i;
    unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i = 0;
    IData/*31:0*/ unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i__Vloopsize;
    unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i__Vloopsize = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<QData/*63:0*/> addrs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    IData/*31:0*/ bus_width;
    CData/*7:0*/ byte_en;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    IData/*31:0*/ n_bits;
    IData/*31:0*/ lsb;
    IData/*31:0*/ skip;
    IData/*31:0*/ curr_byte;
    IData/*31:0*/ n_access_extra;
    IData/*31:0*/ n_bits_init;
    addrs.clear();
    addrs.atDefault() = 0;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    byte_en = 0xffU;
    n_bits = 0U;
    lsb = 0U;
    skip = 0U;
    curr_byte = 0U;
    n_access_extra = 0U;
    n_bits_init = 0U;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__396__map_info, __Vtask_Xget_bus_infoX__396__size, __Vtask_Xget_bus_infoX__396__lsb, __Vtask_Xget_bus_infoX__396__addr_skip);
    map_info = __Vtask_Xget_bus_infoX__396__map_info;
    n_bits_init = __Vtask_Xget_bus_infoX__396__size;
    lsb = __Vtask_Xget_bus_infoX__396__lsb;
    skip = __Vtask_Xget_bus_infoX__396__addr_skip;
    addrs = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1821)
        ->__PVT__addr;
    if ((2U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1824)
         ->__PVT__element_kind)) {
        unnamedblk514__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk514__DOT__i, addrs.size())) {
            unnamedblk514__DOT__i__Vloopsize = addrs.size();
            addrs.atWriteAppend(unnamedblk514__DOT__i) 
                = (addrs.at(unnamedblk514__DOT__i) 
                   + ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1826)
                                      ->__PVT__mem_range[0U])) 
                      * VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1826)
                      ->__PVT__offset));
            if ((unnamedblk514__DOT__i__Vloopsize <= addrs.size())) {
                unnamedblk514__DOT__i = ((IData)(1U) 
                                         + unnamedblk514__DOT__i);
            }
        }
    }
    unnamedblk515__DOT__val_idx = 0U;
    while (VL_LTS_III(32, unnamedblk515__DOT__val_idx, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1828)
                      ->__PVT__value.size())) {
        unnamedblk515__DOT__val_idx__Vloopsize = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1828)
            ->__PVT__value.size();
        unnamedblk515__DOT__foreach_value__DOT__value 
            = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1830)
            ->__PVT__value.at(unnamedblk515__DOT__val_idx);
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1833)
             ->__PVT__element_kind)) {
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be = 0U;
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx = 0U;
            n_access_extra = VL_MODDIV_III(32, lsb, 
                                           (bus_width 
                                            << 3U));
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                = n_access_extra;
            unnamedblk515__DOT__foreach_value__DOT__value 
                = VL_SHIFTL_QQI(64,64,32, unnamedblk515__DOT__foreach_value__DOT__value, n_access_extra);
            while (VL_LTES_III(32, 8U, unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be)) {
                __Vincrement1 = unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx 
                    = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx);
                byte_en = ((~ ((IData)(1U) << (7U & __Vincrement1))) 
                           & (IData)(byte_en));
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                    = (unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                       - (IData)(8U));
            }
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                = (unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                   + n_bits_init);
            while (VL_LTS_III(32, 0U, unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be)) {
                __Vincrement2 = unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx 
                    = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx);
                byte_en = ((IData)(byte_en) | (0x00ffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & __Vincrement2))));
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                    = (unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__temp_be 
                       - (IData)(8U));
            }
            byte_en = ((IData)(byte_en) & (VL_SHIFTL_III(8,32,32, (IData)(1U), unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__idx) 
                                           - (IData)(1U)));
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i = 0U;
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i, skip)) {
                std::ignore = addrs.pop_front();
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i 
                    = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk516__DOT__unnamedblk517__DOT__i);
            }
            while ((addrs.size() > ((IData)(1U) + VL_DIV_III(32, n_bits_init, 
                                                             (bus_width 
                                                              << 3U))))) {
                std::ignore = addrs.pop_back();
            }
        }
        curr_byte = 0U;
        n_bits = n_bits_init;
        {
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i, addrs.size())) {
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i__Vloopsize 
                    = addrs.size();
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__kind = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__addr = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__data = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__n_bits = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__status = 0;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data = 0ULL;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data 
                    = (VL_SHIFTR_QQI(64,64,32, unnamedblk515__DOT__foreach_value__DOT__value, 
                                     (curr_byte << 3U)) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        (bus_width 
                                         << 3U)) - 1ULL));
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                this->__Vfunc_uvm_report_enabled__398__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
                __Vfunc_uvm_report_enabled__398__severity = 0U;
                __Vfunc_uvm_report_enabled__398__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__399__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__399__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__398__verbosity, (IData)(__Vfunc_uvm_report_enabled__398__severity), this->__Vfunc_uvm_report_enabled__398__id, __Vtask_uvm_report_enabled__400__Vfuncout);
                __Vfunc_uvm_report_enabled__398____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__400__Vfuncout;
                __VlefCall_1__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__398____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_1__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1869)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1869)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_info__403__line = 0x0000074dU;
                    this->__Vtask_uvm_report_info__403__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__403__verbosity = 0x00000190U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__403__message
                                  ,"Writing 'h%0h at 'h%0h via map \"%s\"...",3
                                  , '#',64,unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data
                                  , '#',64,addrs.at(unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i)
                                  , 'S',&(__VlefCall_3__get_full_name));
                    this->__Vtask_uvm_report_info__403__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vfunc_get__404__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__403__id, this->__Vtask_uvm_report_info__403__message, __Vtask_uvm_report_info__403__verbosity, this->__Vtask_uvm_report_info__403__filename, __Vtask_uvm_report_info__403__line);
                }
                if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1871)
                     ->__PVT__element_kind)) {
                    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z = 0U;
                    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z = 0U;
                    while ((unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z 
                            < bus_width)) {
                        unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en 
                            = (((~ ((IData)(1U) << 
                                    (7U & unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z))) 
                                & unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access
                                .__PVT__byte_en) | 
                               (0x00ffU & ((1U & ((IData)(byte_en) 
                                                  >> 
                                                  (7U 
                                                   & (curr_byte 
                                                      + unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z)))) 
                                           << (7U & unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z))));
                        unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z 
                            = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk519__DOT__z);
                    }
                }
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__kind 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1876)
                    ->__PVT__kind;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__addr 
                    = addrs.at(unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i);
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__data 
                    = unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data;
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__n_bits 
                    = ((n_bits > (bus_width << 3U))
                        ? (bus_width << 3U) : n_bits);
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en 
                    = byte_en;
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1882)->__VnoInFunc_m_set_item(vlSymsp, rw);
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1883)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access, __Vtask_reg2bus__407__Vfuncout);
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req 
                    = __Vtask_reg2bus__407__Vfuncout;
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1884)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
                if ((VlNull{} == unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req)) {
                    this->__Vfunc_uvm_report_enabled__409__id = "RegMem"s;
                    __Vfunc_uvm_report_enabled__409__severity = 3U;
                    __Vfunc_uvm_report_enabled__409__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__410__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__410__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__409__verbosity, (IData)(__Vfunc_uvm_report_enabled__409__severity), this->__Vfunc_uvm_report_enabled__409__id, __Vtask_uvm_report_enabled__411__Vfuncout);
                    __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__411__Vfuncout;
                    __VlefCall_4__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_4__uvm_report_enabled) {
                        VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1887)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        __Vtask_uvm_report_fatal__413__line = 0x0000075fU;
                        this->__Vtask_uvm_report_fatal__413__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_fatal__413__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__413__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_5__get_name), "] didnt return a bus transaction"s));
                        this->__Vtask_uvm_report_fatal__413__id = "RegMem"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__414__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vfunc_get__414__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__413__id, this->__Vtask_uvm_report_fatal__413__message, __Vtask_uvm_report_fatal__413__verbosity, this->__Vtask_uvm_report_fatal__413__filename, __Vtask_uvm_report_fatal__413__line);
                    }
                }
                VL_NULL_CHECK(unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1889)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1890)
                                       ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1890)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1890)
                                                                                ->__PVT__prior, VlNull{});
                if (((VlNull{} != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1892)
                      ->__PVT__parent) && (0U == unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1893)
                                  ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1893)->__VnoInFunc_mid_do(vlSymsp, rw);
                }
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1895)
                                       ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1895)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req, 0xffffffffU);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1896)
                                       ->__PVT__end_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1896)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
                if (VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1898)
                    ->__PVT__provides_responses) {
                    co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1902)
                                           ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1902)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__421__response, 0xffffffffU);
                    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk520__DOT__bus_rsp 
                        = __Vtask_get_base_response__421__response;
                    VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1903)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__unnamedblk520__DOT__bus_rsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access);
                } else {
                    VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1906)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__bus_req, unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access);
                }
                if (((VlNull{} != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1909)
                      ->__PVT__parent) && (unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i 
                                           == (addrs.size() 
                                               - (IData)(1U))))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1910)
                                  ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1910)->__VnoInFunc_post_do(vlSymsp, rw);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1912)->__PVT__status 
                    = unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__rw_access
                    .__PVT__status;
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                this->__Vfunc_uvm_report_enabled__426__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name);
                __Vfunc_uvm_report_enabled__426__severity = 0U;
                __Vfunc_uvm_report_enabled__426__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__427__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__427__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__426__verbosity, (IData)(__Vfunc_uvm_report_enabled__426__severity), this->__Vfunc_uvm_report_enabled__426__id, __Vtask_uvm_report_enabled__428__Vfuncout);
                __Vfunc_uvm_report_enabled__426____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__428__Vfuncout;
                __VlefCall_7__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__426____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_7__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1916)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1916)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_info__431__line = 0x0000077cU;
                    this->__Vtask_uvm_report_info__431__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__431__verbosity = 0x00000190U;
                    __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                        [(3U & VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1916)
                          ->__PVT__status)];
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__431__message
                                  ,"Wrote 'h%0h at 'h%0h via map \"%s\": %s...",4
                                  , '#',64,unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__foreach_addr__DOT__data
                                  , '#',64,addrs.at(unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i)
                                  , 'S',&(__VlefCall_9__get_full_name)
                                  , 'S',&(__Vtemp_2));
                    this->__Vtask_uvm_report_info__431__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__432__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vfunc_get__432__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__431__id, this->__Vtask_uvm_report_info__431__message, __Vtask_uvm_report_info__431__verbosity, this->__Vtask_uvm_report_info__431__filename, __Vtask_uvm_report_info__431__line);
                }
                if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1918)
                     ->__PVT__status)) {
                    goto __Vlabel0;
                }
                curr_byte = (curr_byte + bus_width);
                n_bits = (n_bits - (bus_width << 3U));
                if ((unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i__Vloopsize 
                     <= addrs.size())) {
                    unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i 
                        = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk518__DOT__i);
                }
            }
            __Vlabel0: ;
        }
        unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i, addrs.size())) {
            unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i__Vloopsize 
                = addrs.size();
            addrs.atWriteAppend(unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i) 
                = (addrs.at(unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i) 
                   + (QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1927)
                                     ->__PVT__mem_range[0U])));
            if ((unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i 
                    = ((IData)(1U) + unnamedblk515__DOT__foreach_value__DOT__unnamedblk521__DOT__i);
            }
        }
        if ((unnamedblk515__DOT__val_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1828)
             ->__PVT__value.size())) {
            unnamedblk515__DOT__val_idx = ((IData)(1U) 
                                           + unnamedblk515__DOT__val_idx);
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__436__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__436__size;
    __Vtask_Xget_bus_infoX__436__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__436__lsb;
    __Vtask_Xget_bus_infoX__436__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__436__addr_skip;
    __Vtask_Xget_bus_infoX__436__addr_skip = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__438__verbosity;
    __Vfunc_uvm_report_enabled__438__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__438__severity;
    __Vfunc_uvm_report_enabled__438__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__438____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__438____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__439__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__440__Vfuncout;
    __Vtask_uvm_report_enabled__440__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__443__verbosity;
    __Vtask_uvm_report_info__443__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__443__line;
    __Vtask_uvm_report_info__443__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__444__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__447__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__449__verbosity;
    __Vfunc_uvm_report_enabled__449__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__449__severity;
    __Vfunc_uvm_report_enabled__449__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__449____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__449____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__450__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__451__Vfuncout;
    __Vtask_uvm_report_enabled__451__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__453__verbosity;
    __Vtask_uvm_report_fatal__453__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__453__line;
    __Vtask_uvm_report_fatal__453__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__454__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__461__response;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__465__verbosity;
    __Vfunc_uvm_report_enabled__465__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__465__severity;
    __Vfunc_uvm_report_enabled__465__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__466__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__467__Vfuncout;
    __Vtask_uvm_report_enabled__467__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__470__verbosity;
    __Vtask_uvm_report_info__470__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__470__line;
    __Vtask_uvm_report_info__470__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__471__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_type_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk522__DOT__i;
    unnamedblk522__DOT__i = 0;
    IData/*31:0*/ unnamedblk522__DOT__i__Vloopsize;
    unnamedblk522__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk523__DOT__val_idx;
    unnamedblk523__DOT__val_idx = 0;
    IData/*31:0*/ unnamedblk523__DOT__val_idx__Vloopsize;
    unnamedblk523__DOT__val_idx__Vloopsize = 0;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i;
    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i = 0;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i__Vloopsize;
    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req;
    Vcsi2_tb_top_uvm_reg_bus_op__struct__0 unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access;
    QData/*63:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__data;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk529__DOT__bus_rsp;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i;
    unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i = 0;
    IData/*31:0*/ unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i__Vloopsize;
    unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i__Vloopsize = 0;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlQueue<QData/*63:0*/> addrs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    IData/*31:0*/ bus_width;
    CData/*7:0*/ byte_en;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    IData/*31:0*/ size;
    IData/*31:0*/ n_bits;
    IData/*31:0*/ skip;
    IData/*31:0*/ lsb;
    IData/*31:0*/ curr_byte;
    IData/*31:0*/ n_access_extra;
    addrs.clear();
    addrs.atDefault() = 0;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    byte_en = 0xffU;
    size = 0U;
    n_bits = 0U;
    skip = 0U;
    lsb = 0U;
    curr_byte = 0U;
    n_access_extra = 0U;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__436__map_info, __Vtask_Xget_bus_infoX__436__size, __Vtask_Xget_bus_infoX__436__lsb, __Vtask_Xget_bus_infoX__436__addr_skip);
    map_info = __Vtask_Xget_bus_infoX__436__map_info;
    n_bits = __Vtask_Xget_bus_infoX__436__size;
    lsb = __Vtask_Xget_bus_infoX__436__lsb;
    skip = __Vtask_Xget_bus_infoX__436__addr_skip;
    addrs = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1952)
        ->__PVT__addr;
    size = n_bits;
    if ((2U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1956)
         ->__PVT__element_kind)) {
        unnamedblk522__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk522__DOT__i, addrs.size())) {
            unnamedblk522__DOT__i__Vloopsize = addrs.size();
            addrs.atWriteAppend(unnamedblk522__DOT__i) 
                = (addrs.at(unnamedblk522__DOT__i) 
                   + ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1958)
                                      ->__PVT__mem_range[0U])) 
                      * VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1958)
                      ->__PVT__offset));
            if ((unnamedblk522__DOT__i__Vloopsize <= addrs.size())) {
                unnamedblk522__DOT__i = ((IData)(1U) 
                                         + unnamedblk522__DOT__i);
            }
        }
    }
    unnamedblk523__DOT__val_idx = 0U;
    while (VL_LTS_III(32, unnamedblk523__DOT__val_idx, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1960)
                      ->__PVT__value.size())) {
        unnamedblk523__DOT__val_idx__Vloopsize = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1960)
            ->__PVT__value.size();
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1963)
             ->__PVT__element_kind)) {
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be = 0U;
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx = 0U;
            n_access_extra = VL_MODDIV_III(32, lsb, 
                                           (bus_width 
                                            << 3U));
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                = n_access_extra;
            while (VL_LTES_III(32, 8U, unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be)) {
                __Vincrement3 = unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx 
                    = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx);
                byte_en = ((~ ((IData)(1U) << (7U & __Vincrement3))) 
                           & (IData)(byte_en));
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                    = (unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                       - (IData)(8U));
            }
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                = (unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                   + n_bits);
            while (VL_LTS_III(32, 0U, unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be)) {
                __Vincrement4 = unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx 
                    = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx);
                byte_en = ((IData)(byte_en) | (0x00ffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & __Vincrement4))));
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                    = (unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__temp_be 
                       - (IData)(8U));
            }
            byte_en = ((IData)(byte_en) & (VL_SHIFTL_III(8,32,32, (IData)(1U), unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__idx) 
                                           - (IData)(1U)));
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i = 0U;
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i, skip)) {
                std::ignore = addrs.pop_front();
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i 
                    = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk524__DOT__unnamedblk525__DOT__i);
            }
            while ((addrs.size() > ((IData)(1U) + VL_DIV_III(32, n_bits, 
                                                             (bus_width 
                                                              << 3U))))) {
                std::ignore = addrs.pop_back();
            }
        }
        curr_byte = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1985)->__PVT__value.atWrite(unnamedblk523__DOT__val_idx) = 0ULL;
        {
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i, addrs.size())) {
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i__Vloopsize 
                    = addrs.size();
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__kind = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__addr = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__data = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__n_bits = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__byte_en = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__status = 0;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__data = 0;
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                this->__Vfunc_uvm_report_enabled__438__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
                __Vfunc_uvm_report_enabled__438__severity = 0U;
                __Vfunc_uvm_report_enabled__438__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__439__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__439__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__438__verbosity, (IData)(__Vfunc_uvm_report_enabled__438__severity), this->__Vfunc_uvm_report_enabled__438__id, __Vtask_uvm_report_enabled__440__Vfuncout);
                __Vfunc_uvm_report_enabled__438____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__440__Vfuncout;
                __VlefCall_1__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__438____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_1__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_info__443__line = 0x000007ccU;
                    this->__Vtask_uvm_report_info__443__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__443__verbosity = 0x00000190U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__443__message
                                  ,"Reading address 'h%0h via map \"%s\"...",2
                                  , '#',64,addrs.at(unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i)
                                  , 'S',&(__VlefCall_3__get_full_name));
                    this->__Vtask_uvm_report_info__443__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__444__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vfunc_get__444__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__443__id, this->__Vtask_uvm_report_info__443__message, __Vtask_uvm_report_info__443__verbosity, this->__Vtask_uvm_report_info__443__filename, __Vtask_uvm_report_info__443__line);
                }
                if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1998)
                     ->__PVT__element_kind)) {
                    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z = 0U;
                    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z = 0U;
                    while ((unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z 
                            < bus_width)) {
                        unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__byte_en 
                            = (((~ ((IData)(1U) << 
                                    (7U & unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z))) 
                                & unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access
                                .__PVT__byte_en) | 
                               (0x00ffU & ((1U & ((IData)(byte_en) 
                                                  >> 
                                                  (7U 
                                                   & (curr_byte 
                                                      + unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z)))) 
                                           << (7U & unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z))));
                        unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z 
                            = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk528__DOT__z);
                    }
                }
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__kind 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2002)
                    ->__PVT__kind;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__addr 
                    = addrs.at(unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i);
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__data = 0ULL;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__byte_en 
                    = byte_en;
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access.__PVT__n_bits 
                    = ((n_bits > (bus_width << 3U))
                        ? (bus_width << 3U) : n_bits);
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2008)->__VnoInFunc_m_set_item(vlSymsp, rw);
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2009)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access, __Vtask_reg2bus__447__Vfuncout);
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req 
                    = __Vtask_reg2bus__447__Vfuncout;
                VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2010)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
                if ((VlNull{} == unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req)) {
                    this->__Vfunc_uvm_report_enabled__449__id = "RegMem"s;
                    __Vfunc_uvm_report_enabled__449__severity = 3U;
                    __Vfunc_uvm_report_enabled__449__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__450__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__450__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__449__verbosity, (IData)(__Vfunc_uvm_report_enabled__449__severity), this->__Vfunc_uvm_report_enabled__449__id, __Vtask_uvm_report_enabled__451__Vfuncout);
                    __Vfunc_uvm_report_enabled__449____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__451__Vfuncout;
                    __VlefCall_4__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__449____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_4__uvm_report_enabled) {
                        VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2012)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        __Vtask_uvm_report_fatal__453__line = 0x000007dcU;
                        this->__Vtask_uvm_report_fatal__453__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_fatal__453__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__453__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_5__get_name), "] didnt return a bus transaction"s));
                        this->__Vtask_uvm_report_fatal__453__id = "RegMem"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__454__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vfunc_get__454__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__453__id, this->__Vtask_uvm_report_fatal__453__message, __Vtask_uvm_report_fatal__453__verbosity, this->__Vtask_uvm_report_fatal__453__filename, __Vtask_uvm_report_fatal__453__line);
                    }
                }
                VL_NULL_CHECK(unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2014)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2015)
                                       ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2015)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2015)
                                                                                ->__PVT__prior, VlNull{});
                if (((VlNull{} != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2017)
                      ->__PVT__parent) && (0U == unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2018)
                                  ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2018)->__VnoInFunc_mid_do(vlSymsp, rw);
                }
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2021)
                                       ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2021)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req, 0xffffffffU);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2022)
                                       ->__PVT__end_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2022)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
                if (VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2024)
                    ->__PVT__provides_responses) {
                    co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2028)
                                           ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2028)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__461__response, 0xffffffffU);
                    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk529__DOT__bus_rsp 
                        = __Vtask_get_base_response__461__response;
                    VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2029)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__unnamedblk529__DOT__bus_rsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access);
                } else {
                    VL_NULL_CHECK(adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2032)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__bus_req, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access);
                }
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__data 
                    = (unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access
                       .__PVT__data & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                     (bus_width 
                                                      << 3U)) 
                                       - 1ULL));
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2037)->__PVT__status 
                    = unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__rw_access
                    .__PVT__status;
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                this->__Vfunc_uvm_report_enabled__465__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name);
                __Vfunc_uvm_report_enabled__465__severity = 0U;
                __Vfunc_uvm_report_enabled__465__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__466__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__466__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__465__verbosity, (IData)(__Vfunc_uvm_report_enabled__465__severity), this->__Vfunc_uvm_report_enabled__465__id, __Vtask_uvm_report_enabled__467__Vfuncout);
                __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__467__Vfuncout;
                __VlefCall_7__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_7__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_info__470__line = 0x000007fcU;
                    this->__Vtask_uvm_report_info__470__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__470__verbosity = 0x00000190U;
                    __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                        [(3U & VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2044)
                          ->__PVT__status)];
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__470__message
                                  ,"Read 'h%0h at 'h%0h via map \"%s\": %s...",4
                                  , '#',64,unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__data
                                  , '#',64,addrs.at(unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i)
                                  , 'S',&(__VlefCall_9__get_full_name)
                                  , 'S',&(__Vtemp_2));
                    this->__Vtask_uvm_report_info__470__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__471__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vfunc_get__471__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__470__id, this->__Vtask_uvm_report_info__470__message, __Vtask_uvm_report_info__470__verbosity, this->__Vtask_uvm_report_info__470__filename, __Vtask_uvm_report_info__470__line);
                }
                if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2046)
                     ->__PVT__status)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2049)->__PVT__value.atWrite(unnamedblk523__DOT__val_idx) 
                    = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2049)
                       ->__PVT__value.at(unnamedblk523__DOT__val_idx) 
                       | VL_SHIFTL_QQI(64,64,32, unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__unnamedblk527__DOT__data, 
                                       (curr_byte << 3U)));
                if (((VlNull{} != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2051)
                      ->__PVT__parent) && (unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i 
                                           == (addrs.size() 
                                               - (IData)(1U))))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2052)
                                  ->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2052)->__VnoInFunc_post_do(vlSymsp, rw);
                }
                curr_byte = (curr_byte + bus_width);
                n_bits = (n_bits - (bus_width << 3U));
                if ((unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i__Vloopsize 
                     <= addrs.size())) {
                    unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i 
                        = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk526__DOT__i);
                }
            }
            __Vlabel0: ;
        }
        unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i, addrs.size())) {
            unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i__Vloopsize 
                = addrs.size();
            addrs.atWriteAppend(unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i) 
                = (addrs.at(unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i) 
                   + (QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2059)
                                     ->__PVT__mem_range[0U])));
            if ((unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i 
                    = ((IData)(1U) + unnamedblk523__DOT__foreach_value__DOT__unnamedblk530__DOT__i);
            }
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2061)
             ->__PVT__element_kind)) {
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2062)->__PVT__value.atWrite(unnamedblk523__DOT__val_idx) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2062)
                                 ->__PVT__value.at(unnamedblk523__DOT__val_idx), n_access_extra) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, size) 
                      - 1ULL));
        }
        if ((unnamedblk523__DOT__val_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 1960)
             ->__PVT__value.size())) {
            unnamedblk523__DOT__val_idx = ((IData)(1U) 
                                           + unnamedblk523__DOT__val_idx);
        }
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_name;
    QData/*63:0*/ __VlefCall_13__get_address;
    IData/*31:0*/ __VlefCall_12__get_inst_id;
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_name;
    QData/*63:0*/ __VlefCall_9__get_address;
    IData/*31:0*/ __VlefCall_8__get_inst_id;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_name;
    QData/*63:0*/ __VlefCall_5__get_address;
    IData/*31:0*/ __VlefCall_4__get_inst_id;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk531__DOT__j;
    unnamedblk531__DOT__j = 0;
    IData/*31:0*/ unnamedblk531__DOT__j__Vloopsize;
    unnamedblk531__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk532__DOT__j;
    unnamedblk532__DOT__j = 0;
    IData/*31:0*/ unnamedblk532__DOT__j__Vloopsize;
    unnamedblk532__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk533__DOT__j;
    unnamedblk533__DOT__j = 0;
    IData/*31:0*/ unnamedblk533__DOT__j__Vloopsize;
    unnamedblk533__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk534__DOT__j;
    unnamedblk534__DOT__j = 0;
    IData/*31:0*/ unnamedblk534__DOT__j__Vloopsize;
    unnamedblk534__DOT__j__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sqr;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    maps.clear();
    this->__VnoInFunc_get_sequencer(vlSymsp, 1U, sqr);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2091)->__VnoInFunc_print_generic(vlSymsp, "endian"s, ""s, 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(Vcsi2_tb_top___024unit::__Venumtab_enum_name79
                                                                                [
                                                                                (7U 
                                                                                & endian)]), 0x2eU);
    if ((VlNull{} != sqr)) {
        VL_NULL_CHECK(sqr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2093)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        VL_NULL_CHECK(sqr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2093)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2093)->__VnoInFunc_print_generic(vlSymsp, "effective sequencer"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), 0x2eU);
    }
    this->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk531__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk531__DOT__j, regs.size())) {
        unnamedblk531__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk531__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2097)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        VL_NULL_CHECK(regs.at(unnamedblk531__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2097)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        VL_NULL_CHECK(regs.at(unnamedblk531__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2097)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_4__get_inst_id);
        VL_NULL_CHECK(regs.at(unnamedblk531__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2097)->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_5__get_address);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2097)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_4__get_inst_id
                                                                                , '#',64,__VlefCall_5__get_address) , 0x2eU);
        if ((unnamedblk531__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk531__DOT__j = ((IData)(1U) + unnamedblk531__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk532__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk532__DOT__j, mems.size())) {
        unnamedblk532__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk532__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2102)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
        VL_NULL_CHECK(mems.at(unnamedblk532__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2102)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
        VL_NULL_CHECK(mems.at(unnamedblk532__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2102)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
        VL_NULL_CHECK(mems.at(unnamedblk532__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2102)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_9__get_address);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2102)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_8__get_inst_id
                                                                                , '#',64,__VlefCall_9__get_address) , 0x2eU);
        if ((unnamedblk532__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk532__DOT__j = ((IData)(1U) + unnamedblk532__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk533__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk533__DOT__j, vregs.size())) {
        unnamedblk533__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk533__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2106)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
        VL_NULL_CHECK(vregs.at(unnamedblk533__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2106)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
        VL_NULL_CHECK(vregs.at(unnamedblk533__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2106)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_12__get_inst_id);
        VL_NULL_CHECK(vregs.at(unnamedblk533__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2106)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_13__get_address);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2106)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_12__get_inst_id
                                                                                , '#',64,__VlefCall_13__get_address) , 0x2eU);
        if ((unnamedblk533__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk533__DOT__j = ((IData)(1U) + unnamedblk533__DOT__j);
        }
    }
    this->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
    unnamedblk534__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk534__DOT__j, maps.size())) {
        unnamedblk534__DOT__j__Vloopsize = maps.size();
        VL_NULL_CHECK(maps.at(unnamedblk534__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2110)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2110)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), maps.at(unnamedblk534__DOT__j), 0x2eU);
        if ((unnamedblk534__DOT__j__Vloopsize <= maps.size())) {
            unnamedblk534__DOT__j = ((IData)(1U) + unnamedblk534__DOT__j);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__convert2string;
    std::string __VlefCall_3__convert2string;
    std::string __VlefCall_2__convert2string;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk535__DOT__j;
    unnamedblk535__DOT__j = 0;
    IData/*31:0*/ unnamedblk535__DOT__j__Vloopsize;
    unnamedblk535__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk536__DOT__j;
    unnamedblk536__DOT__j = 0;
    IData/*31:0*/ unnamedblk536__DOT__j__Vloopsize;
    unnamedblk536__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk537__DOT__j;
    unnamedblk537__DOT__j = 0;
    IData/*31:0*/ unnamedblk537__DOT__j__Vloopsize;
    unnamedblk537__DOT__j__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    std::string prefix;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMap %s",2
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_1__get_n_bytes);
    __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name79
        [(7U & endian)];
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s -- %0d bytes (%s)",3
                  , 'S',&(convert2string__Vfuncrtn)
                  , '#',32,__VlefCall_1__get_n_bytes
                  , 'S',&(__Vtemp_1));
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk535__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk535__DOT__j, regs.size())) {
        unnamedblk535__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk535__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2129)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_2__convert2string));
        if ((unnamedblk535__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk535__DOT__j = ((IData)(1U) + unnamedblk535__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk536__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk536__DOT__j, mems.size())) {
        unnamedblk536__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk536__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2134)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_3__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_3__convert2string));
        if ((unnamedblk536__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk536__DOT__j = ((IData)(1U) + unnamedblk536__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk537__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk537__DOT__j, vregs.size())) {
        unnamedblk537__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk537__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_map.svh", 2139)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk537__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk537__DOT__j = ((IData)(1U) + unnamedblk537__DOT__j);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_base_addr = 0;
    __PVT__m_n_bytes = 0;
    __PVT__m_endian = 0;
    __PVT__m_byte_addressing = 0;
    __PVT__m_auto_predict = 0;
    __PVT__m_check_on_read = 0;
    __PVT__m_system_n_bytes = 0;
    __PVT__m_parent_maps.atDefault() = 0;
    __PVT__m_submaps.atDefault() = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map::~\n"); );
}
