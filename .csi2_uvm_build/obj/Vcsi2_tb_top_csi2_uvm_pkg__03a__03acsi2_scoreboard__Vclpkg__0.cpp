// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi22> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi22__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi22> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi22__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_scoreboard"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config> __Vfunc_get__5__value;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__expected_fifo = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38, vlProcess, vlSymsp, "expected_fifo"s, 
                                        VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard>{this});
    this->__PVT__actual_fifo = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz64, vlProcess, vlSymsp, "actual_fifo"s, 
                                      VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard>{this});
    __Vfunc_get__5__value = this->__PVT__cfg;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz36__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard>{this}, ""s, "env_cfg"s, __Vfunc_get__5__value, __VlefCall_0__get);
    this->__PVT__cfg = __Vfunc_get__5__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "SB"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SB"s, "Missing environment configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000019U);
        }
    }
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_collect_expected(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_collect_expected\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> __Vtask_get__8__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__index;
    unnamedblk1__DOT__index = 0;
    IData/*31:0*/ unnamedblk1__DOT__index__Vloopsize;
    unnamedblk1__DOT__index__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> item;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__expected_fifo, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 31)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__8__t);
        item = __Vtask_get__8__t;
        this->__PVT__expected_transaction_count = ((IData)(1U) 
                                                   + this->__PVT__expected_transaction_count);
        this->__PVT__bfm_completed = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 33)
            ->__PVT__bfm_completed;
        this->__PVT__bfm_status = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 34)
            ->__PVT__bfm_status;
        unnamedblk1__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__index, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 35)
                          ->__PVT__payload.size())) {
            unnamedblk1__DOT__index__Vloopsize = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 35)
                ->__PVT__payload.size();
            this->__PVT__expected_bytes.push_back(VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 36)
                                                  ->__PVT__payload.at(unnamedblk1__DOT__index));
            if ((unnamedblk1__DOT__index__Vloopsize 
                 <= VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 35)
                 ->__PVT__payload.size())) {
                unnamedblk1__DOT__index = ((IData)(1U) 
                                           + unnamedblk1__DOT__index);
            }
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_collect_actual(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_collect_actual\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> __Vtask_get__9__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk2__DOT__index;
    unnamedblk2__DOT__index = 0;
    IData/*31:0*/ unnamedblk2__DOT__index__Vloopsize;
    unnamedblk2__DOT__index__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> item;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__actual_fifo, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 43)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__9__t);
        item = __Vtask_get__9__t;
        this->__PVT__effective_write_count = ((IData)(1U) 
                                              + this->__PVT__effective_write_count);
        unnamedblk2__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__index, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 45)
                          ->__PVT__accepted_bytes.size())) {
            unnamedblk2__DOT__index__Vloopsize = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 45)
                ->__PVT__accepted_bytes.size();
            this->__PVT__actual_bytes.push_back(VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 46)
                                                ->__PVT__accepted_bytes.at(unnamedblk2__DOT__index));
            if ((unnamedblk2__DOT__index__Vloopsize 
                 <= VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 45)
                 ->__PVT__accepted_bytes.size())) {
                unnamedblk2__DOT__index = ((IData)(1U) 
                                           + unnamedblk2__DOT__index);
            }
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, vlProcess);
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run_phase____Vfork_1__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 
                                      51);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase____Vfork_1__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase____Vfork_1__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_collect_actual(vlProcess, vlSymsp);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 
                         53);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_collect_expected(vlProcess, vlSymsp);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 
                         52);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_check_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_check_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk3__DOT__index;
    IData/*31:0*/ compare_count;
    compare_count = 0U;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(vlProcess, vlSymsp, phase);
    if ((1U != this->__PVT__expected_transaction_count)) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_CHECK"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_CHECK"s, VL_SFORMATF_N_NX("Expected one completed BFM transaction, observed %0d",1
                                                                                , '#',32,this->__PVT__expected_transaction_count) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000041U);
        }
    }
    if ((1U & (~ (IData)(this->__PVT__bfm_completed)))) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_CHECK"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_CHECK"s, VL_SFORMATF_N_NX("BFM did not complete; status=%0d",1
                                                                                , '#',32,this->__PVT__bfm_status) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000046U);
        }
    }
    if ((0x29U != VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 72)
                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 72)
         ->dtype)) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_DTYPE"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_DTYPE"s, VL_SFORMATF_N_NX("Expected datatype 0x29, observed 0x%02h",1
                                                                                , '#',6,VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 76)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 76)
                                                                                ->dtype) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x0000004cU);
        }
    }
    if ((VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 78)
                       ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 78)
         ->lane_err || VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 78)
                                     ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 78)
         ->llp_err_vld)) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_DUT_ERROR"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_DUT_ERROR"s, VL_SFORMATF_N_NX("lane_err=%0b llp_err_vld=%0b llp_err=%0d",3
                                                                                , '#',1,VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->lane_err
                                                                                , '#',1,VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->llp_err_vld
                                                                                , '#',3,VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv", 84)
                                                                                ->llp_err) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000054U);
        }
    }
    if ((0U == this->__PVT__effective_write_count)) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_AXI"s, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_AXI"s, "No effective AXI write was observed"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000058U);
        }
    }
    if ((this->__PVT__actual_bytes.size() != this->__PVT__expected_bytes.size())) {
        this->__PVT__mismatch_count = ((IData)(1U) 
                                       + this->__PVT__mismatch_count);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_SIZE"s, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_SIZE"s, VL_SFORMATF_N_NX("AXI byte count differs: expected=%0d actual=%0d",2
                                                                                , '~',32,this->__PVT__expected_bytes.size()
                                                                                , '~',32,this->__PVT__actual_bytes.size()) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x0000005eU);
        }
    }
    compare_count = (VL_LTS_III(32, this->__PVT__actual_bytes.size(), this->__PVT__expected_bytes.size())
                      ? this->__PVT__actual_bytes.size()
                      : this->__PVT__expected_bytes.size());
    unnamedblk3__DOT__index = 0U;
    unnamedblk3__DOT__index = 0U;
    {
        while ((unnamedblk3__DOT__index < compare_count)) {
            if ((this->__PVT__actual_bytes.at(unnamedblk3__DOT__index) 
                 != this->__PVT__expected_bytes.at(unnamedblk3__DOT__index))) {
                this->__PVT__mismatch_count = ((IData)(1U) 
                                               + this->__PVT__mismatch_count);
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_DATA"s, __VlefCall_6__uvm_report_enabled);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_DATA"s, VL_SFORMATF_N_NX("Byte[%0d] expected=0x%02h actual=0x%02h",3
                                                                                , '~',32,unnamedblk3__DOT__index
                                                                                , '#',8,this->__PVT__expected_bytes.at(unnamedblk3__DOT__index)
                                                                                , '#',8,this->__PVT__actual_bytes.at(unnamedblk3__DOT__index)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000068U);
                }
                goto __Vlabel0;
            }
            unnamedblk3__DOT__index = ((IData)(1U) 
                                       + unnamedblk3__DOT__index);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(vlProcess, vlSymsp, phase);
    if (((0U == this->__PVT__mismatch_count) & (0U 
                                                != this->__PVT__effective_write_count))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "SB_SUMMARY"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SB_SUMMARY"s, VL_SFORMATF_N_NX("PASS expected_bytes=%0d actual_bytes=%0d writes=%0d",3
                                                                                , '~',32,this->__PVT__expected_bytes.size()
                                                                                , '~',32,this->__PVT__actual_bytes.size()
                                                                                , '#',32,this->__PVT__effective_write_count) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000074U);
        }
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SB_SUMMARY"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SB_SUMMARY"s, VL_SFORMATF_N_NX("FAIL expected_bytes=%0d actual_bytes=%0d writes=%0d mismatches=%0d",4
                                                                                , '~',32,this->__PVT__expected_bytes.size()
                                                                                , '~',32,this->__PVT__actual_bytes.size()
                                                                                , '#',32,this->__PVT__effective_write_count
                                                                                , '#',32,this->__PVT__mismatch_count) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_scoreboard.sv"s, 0x00000079U);
        }
    }
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__expected_bytes.atDefault() = 0;
    __PVT__actual_bytes.atDefault() = 0;
    __PVT__expected_transaction_count = 0;
    __PVT__effective_write_count = 0;
    __PVT__mismatch_count = 0;
    __PVT__bfm_completed = 0;
    __PVT__bfm_status = 0;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard::~\n"); );
}
