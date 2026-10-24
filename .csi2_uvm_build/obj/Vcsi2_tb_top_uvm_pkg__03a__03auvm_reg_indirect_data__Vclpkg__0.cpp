// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__map__Vmore;
    unnamedblk1__DOT__map__Vmore = 0;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(vlSymsp, blk_parent, regfile_parent, ""s);
    this->__PVT__m_idx = idx;
    this->__PVT__m_tbl = reg_a;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 1U, VlNull{});
    unnamedblk1__DOT__map__Vmore = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.first(unnamedblk1__DOT__map__Vnext));
    while (unnamedblk1__DOT__map__Vmore) {
        unnamedblk1__DOT__map = unnamedblk1__DOT__map__Vnext;
        unnamedblk1__DOT__map__Vmore = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.next(unnamedblk1__DOT__map__Vnext));
        this->__VnoInFunc_add_frontdoors(vlSymsp, unnamedblk1__DOT__map);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map\n"); );
    // Body
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(vlSymsp, map);
    this->__VnoInFunc_add_frontdoors(vlSymsp, map);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__10__Vfuncout;
    __Vtask_uvm_report_enabled__10__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__is_in_map;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq> unnamedblk2__DOT__unnamedblk3__DOT__fd;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_tbl.size())) {
        unnamedblk2__DOT__i__Vloopsize = this->__PVT__m_tbl.size();
        {
            if ((VlNull{} == this->__PVT__m_tbl.at(unnamedblk2__DOT__i))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__Vfunc_uvm_report_enabled__8__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
                __Vfunc_uvm_report_enabled__8__severity = 2U;
                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__10__Vfuncout);
                __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__10__Vfuncout;
                __VlefCall_1__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_1__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), VL_SFORMATF_N_NX("Indirect register #%0d is NULL",1
                                                                                , '~',32,unnamedblk2__DOT__i) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x00000067U);
                }
                goto __Vlabel0;
            }
            unnamedblk2__DOT__unnamedblk3__DOT__fd 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq, vlProcess, vlSymsp, this->__PVT__m_idx, unnamedblk2__DOT__i, 
                         VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
            VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 107)->__VnoInFunc_is_in_map(vlSymsp, map, __VlefCall_3__is_in_map);
            if (__VlefCall_3__is_in_map) {
                VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 108)->__VnoInFunc_set_frontdoor(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__fd, map, ""s, 0U);
            } else {
                VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 110)->__VnoInFunc_add_reg(vlSymsp, this->__PVT__m_tbl.at(unnamedblk2__DOT__i), 0xffffffffffffffffULL, "RW"s, 1U, unnamedblk2__DOT__unnamedblk3__DOT__fd);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk2__DOT__i__Vloopsize <= this->__PVT__m_tbl.size())) {
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__21__Vfuncout;
    __Vtask_uvm_report_enabled__21__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_6__get;
    QData/*63:0*/ __VlefCall_5__get;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    QData/*63:0*/ __VlefCall_0__get;
    IData/*31:0*/ unnamedblk4__DOT__idx;
    {
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 117)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_0__get);
        if ((__VlefCall_0__get >= (QData)((IData)(this->__PVT__m_tbl.size())))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__Vfunc_uvm_report_enabled__19__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
            __Vfunc_uvm_report_enabled__19__severity = 2U;
            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), this->__Vfunc_uvm_report_enabled__19__id, __Vtask_uvm_report_enabled__21__Vfuncout);
            __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__21__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 118)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_5__get);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), VL_SFORMATF_N_NX("Address register %s has a value (%0d) greater than the maximum indirect register array size (%0d)",3
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',64,__VlefCall_5__get
                                                                                , '~',32,this->__PVT__m_tbl.size()) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x00000076U);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 119)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 125)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_6__get);
        unnamedblk4__DOT__idx = (IData)(__VlefCall_6__get);
        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk4__DOT__idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 126)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 132)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, caller, get_local_map__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__30____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__30__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__30__severity = 2U;
    __Vfunc_uvm_report_enabled__30__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__31__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), this->__Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__32__Vfuncout);
    __Vfunc_uvm_report_enabled__30____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__32__Vfuncout;
    __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__30____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_1__uvm_report_enabled) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), "Cannot add field to an indirect data access register"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x0000008bU);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__37__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__38__Vfuncout;
    __Vtask_uvm_report_enabled__38__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__36__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__36__severity = 2U;
    __Vfunc_uvm_report_enabled__36__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__37__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), this->__Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__38__Vfuncout);
    __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__38__Vfuncout;
    __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_1__uvm_report_enabled) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), "Cannot set() an indirect data access register"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x00000091U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
    __Vtask_uvm_report_enabled__44__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    get__Vfuncrtn = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__42__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__42__severity = 2U;
    __Vfunc_uvm_report_enabled__42__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__43__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), this->__Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__44__Vfuncout);
    __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__44__Vfuncout;
    __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_1__uvm_report_enabled) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), "Cannot get() an indirect data access register"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x00000096U);
    }
    get__Vfuncrtn = 0ULL;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg\n"); );
    // Body
    QData/*63:0*/ __VlefCall_0__get_mirrored_value;
    IData/*31:0*/ idx;
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 156)->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
    idx = (IData)(__VlefCall_0__get_mirrored_value);
    get_indirect_reg__Vfuncrtn = this->__PVT__m_tbl.at(idx);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = 0U;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__53__Vfuncout;
    __Vtask_uvm_report_enabled__53__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__55__verbosity;
    __Vtask_uvm_report_warning__55__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__55__line;
    __Vtask_uvm_report_warning__55__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__56__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk5__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk6__DOT__rw;
    status = 0U;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk5__DOT__blk);
        VL_NULL_CHECK(unnamedblk5__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 176)->__VnoInFunc_get_default_path(vlSymsp, path);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__51__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__51__severity = 1U;
        __Vfunc_uvm_report_enabled__51__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__52__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), this->__Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__53__Vfuncout);
        __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__53__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__55__line = 0x000000b4U;
            this->__Vtask_uvm_report_warning__55__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__55__verbosity = 0U;
            this->__Vtask_uvm_report_warning__55__message = "Cannot backdoor-write an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__55__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__56__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__55__id, this->__Vtask_uvm_report_warning__55__message, __Vtask_uvm_report_warning__55__verbosity, this->__Vtask_uvm_report_warning__55__filename, __Vtask_uvm_report_warning__55__line);
        }
        path = 0U;
    }
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk6__DOT__rw);
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 191)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data>{this};
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 192)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 193)->__PVT__kind = 1U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 194)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 195)->__PVT__path 
        = path;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 196)->__PVT__map 
        = map;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 197)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 198)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 199)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 200)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 201)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, unnamedblk6__DOT__rw);
    status = VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 205)
        ->__PVT__status;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
    __Vtask_uvm_report_enabled__68__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__70__verbosity;
    __Vtask_uvm_report_warning__70__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__70__line;
    __Vtask_uvm_report_warning__70__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__71__Vfuncout;
    IData/*31:0*/ __Vtask_read__73__status;
    __Vtask_read__73__status = 0;
    QData/*63:0*/ __Vtask_read__73__value;
    __Vtask_read__73__value = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk7__DOT__blk;
    status = 0U;
    value = 0ULL;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk7__DOT__blk);
        VL_NULL_CHECK(unnamedblk7__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh", 223)->__VnoInFunc_get_default_path(vlSymsp, path);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__66__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__66__severity = 1U;
        __Vfunc_uvm_report_enabled__66__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__67__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), this->__Vfunc_uvm_report_enabled__66__id, __Vtask_uvm_report_enabled__68__Vfuncout);
        __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__68__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__70__line = 0x000000e3U;
            this->__Vtask_uvm_report_warning__70__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__70__verbosity = 0U;
            this->__Vtask_uvm_report_warning__70__message = "Cannot backdoor-read an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__70__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__71__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__70__id, this->__Vtask_uvm_report_warning__70__message, __Vtask_uvm_report_warning__70__verbosity, this->__Vtask_uvm_report_warning__70__filename, __Vtask_uvm_report_warning__70__line);
        }
        path = 0U;
    }
    co_await Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__73__status, __Vtask_read__73__value, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_read__73__status;
    value = __Vtask_read__73__value;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__76__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__77__Vfuncout;
    __Vtask_uvm_report_enabled__77__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__75__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__75__severity = 2U;
    __Vfunc_uvm_report_enabled__75__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__76__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), this->__Vfunc_uvm_report_enabled__75__id, __Vtask_uvm_report_enabled__77__Vfuncout);
    __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__77__Vfuncout;
    __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_1__uvm_report_enabled) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), "Cannot poke() an indirect data access register"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x000000f1U);
    }
    status = 1U;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__81__verbosity;
    __Vfunc_uvm_report_enabled__81__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__81__severity;
    __Vfunc_uvm_report_enabled__81__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__81____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__81____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__82__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__83__Vfuncout;
    __Vtask_uvm_report_enabled__83__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__81__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__81__severity = 2U;
    __Vfunc_uvm_report_enabled__81__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__82__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__81__verbosity, (IData)(__Vfunc_uvm_report_enabled__81__severity), this->__Vfunc_uvm_report_enabled__81__id, __Vtask_uvm_report_enabled__83__Vfuncout);
    __Vfunc_uvm_report_enabled__81____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__83__Vfuncout;
    __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__81____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_1__uvm_report_enabled) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), "Cannot peek() an indirect data access register"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_indirect.svh"s, 0x000000fcU);
    }
    status = 1U;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_data::~\n"); );
}
