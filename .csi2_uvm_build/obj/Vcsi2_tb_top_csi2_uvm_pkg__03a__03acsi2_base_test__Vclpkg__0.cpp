// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi24> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi24__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi24> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi24__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_base_test"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_test::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_build_phase\n"); );
    // Locals
    Vcsi2_tb_top_c_phy_bfm_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    Vcsi2_tb_top_csi2_axi_write_if* __Vfunc_get__7__value;
    __Vfunc_get__7__value = nullptr;
    Vcsi2_tb_top_csi2_reset_if* __Vfunc_get__10__value;
    __Vfunc_get__10__value = nullptr;
    Vcsi2_tb_top_csi2_rx_status_if* __Vfunc_get__13__value;
    __Vfunc_get__13__value = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi5__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env_cfg"s, VlNull{}, ""s, this->__PVT__env_cfg);
    VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 15)->__PVT__mode = 0U;
    __Vfunc_get__4__value = VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 18)
        ->__PVT__phy_vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, VlNull{}, ""s, "phy_vif"s, __Vfunc_get__4__value, __VlefCall_0__get);
    VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 18)->__PVT__phy_vif 
        = __Vfunc_get__4__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "BASE_TEST"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BASE_TEST"s, "Failed to get C-PHY BFM interface"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x00000013U);
        }
    }
    __Vfunc_get__7__value = VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 21)
        ->__PVT__axi_vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz2__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, VlNull{}, ""s, "axi_vif"s, __Vfunc_get__7__value, __VlefCall_2__get);
    VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 21)->__PVT__axi_vif 
        = __Vfunc_get__7__value;
    if ((1U & (~ (IData)(__VlefCall_2__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "BASE_TEST"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BASE_TEST"s, "Failed to get AXI write interface"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x00000016U);
        }
    }
    __Vfunc_get__10__value = VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 24)
        ->__PVT__rst_vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, VlNull{}, ""s, "rst_vif"s, __Vfunc_get__10__value, __VlefCall_4__get);
    VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 24)->__PVT__rst_vif 
        = __Vfunc_get__10__value;
    if ((1U & (~ (IData)(__VlefCall_4__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "BASE_TEST"s, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BASE_TEST"s, "Failed to get reset interface"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x00000019U);
        }
    }
    __Vfunc_get__13__value = VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 27)
        ->__PVT__status_vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, VlNull{}, ""s, "status_vif"s, __Vfunc_get__13__value, __VlefCall_6__get);
    VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 27)->__PVT__status_vif 
        = __Vfunc_get__13__value;
    if ((1U & (~ (IData)(__VlefCall_6__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "BASE_TEST"s, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BASE_TEST"s, "Failed to get RX status interface"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x0000001cU);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "rst_cfg"s, VlNull{}, ""s, this->__PVT__rst_cfg);
    VL_NULL_CHECK(this->__PVT__rst_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 31)->__PVT__vif 
        = VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 31)
        ->__PVT__rst_vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz36__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test>{this}, "*"s, "env_cfg"s, this->__PVT__env_cfg);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test>{this}, "*"s, "rst_cfg"s, this->__PVT__rst_cfg);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi23__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test>{this}, ""s, this->__PVT__env);
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_apply_reset(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_apply_reset\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence> sequence_h;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi10__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reset_sequence"s, VlNull{}, ""s, sequence_h);
    VL_NULL_CHECK(sequence_h, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 40)->__PVT__delay_cycles = 0U;
    VL_NULL_CHECK(sequence_h, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 41)->__PVT__assertion_cycles = 0x0000000aU;
    co_await VL_NULL_CHECK(sequence_h, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 42)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 42)
                                                                                ->__PVT__reset_agent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 42)
                                                                                ->__PVT__rst_sr, VlNull{}, 0xffffffffU, 1U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_scenario(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_scenario\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "BASE_TEST"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BASE_TEST"s, "run_scenario() must be implemented"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x0000002eU);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 50)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test>{this}, ""s, 1U);
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(1U, vlProcess);
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run_phase____Vfork_1__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                                      51);
    }
    vlProcess->disableFork();
    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 59)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test>{this}, ""s, 1U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase____Vfork_1__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase____Vfork_1__1\n"); );
    // Locals
    IData/*31:0*/ __Vtask___VforkTask_0__26____VlefCall_0__uvm_report_enabled;
    __Vtask___VforkTask_0__26____VlefCall_0__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0 = 0x00002710U;
    while (VL_LTS_III(32, 0U, __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_ha053e934__0;
        __VdynTrigger_ha053e934__0 = 0;
        __VdynTrigger_ha053e934__0 = 0U;
        if ((VlNull{} != this->__PVT__env_cfg)) {
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)
                          ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)->mon_cb.clearFired();
        }
        while ((1U & (~ (IData)(__VdynTrigger_ha053e934__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                                                         54);
            __VdynTrigger_ha053e934__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__env_cfg) 
                                              && VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)
                                                               ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)
                                              ->mon_cb.isFired()));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha053e934__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                                                         54);
            if ((VlNull{} != this->__PVT__env_cfg)) {
                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)
                              ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 54)->mon_cb.clearFired();
            }
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                                                     54);
        __Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask___VforkTask_0__26__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "TIMEOUT"s, __Vfunc_uvm_report_enabled__27__Vfuncout);
    __Vtask___VforkTask_0__26____VlefCall_0__uvm_report_enabled 
        = __Vfunc_uvm_report_enabled__27__Vfuncout;
    if ((0U != __Vtask___VforkTask_0__26____VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TIMEOUT"s, "CSI-2 RX test timed out"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv"s, 0x00000037U);
    }
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                         53);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_run_scenario(vlProcess, vlSymsp);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_base_test.sv", 
                         52);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::~\n"); );
}
