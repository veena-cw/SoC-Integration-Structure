// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz87::init(vlProcess, vlSymsp, name, parent, 0U, 0U, 0xffffffffU);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz87::__PVT__m_if_mask = 0x00000100U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_port"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz87> __Vfunc_get_if__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__verbosity;
    __Vtask_uvm_report_fatal__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__line;
    __Vtask_uvm_report_fatal__4__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__5__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz42_TBz42> tif;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_0__size))) break;
        this->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vfunc_get_if__2__Vfuncout);
        tif = __Vfunc_get_if__2__Vfuncout;
        if ((VlNull{} == tif)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_fatal__4__line = 0U;
            this->__Vtask_uvm_report_fatal__4__filename = ""s;
            __Vtask_uvm_report_fatal__4__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__4__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("No uvm_tlm interface is connected to "s, __VlefCall_1__get_full_name), " for executing write()"s));
            this->__Vtask_uvm_report_fatal__4__id = "NTCONN"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__4__id, this->__Vtask_uvm_report_fatal__4__message, __Vtask_uvm_report_fatal__4__verbosity, this->__Vtask_uvm_report_fatal__4__filename, __Vtask_uvm_report_fatal__4__line);
        }
        VL_NULL_CHECK(tif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_analysis_port.svh", 76)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42::~\n"); );
}
