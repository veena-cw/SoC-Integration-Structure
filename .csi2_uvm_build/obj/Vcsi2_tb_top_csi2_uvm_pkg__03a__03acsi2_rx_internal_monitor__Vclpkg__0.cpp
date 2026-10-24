// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi21> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi21__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi21> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi21__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_rx_internal_monitor"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config> __Vfunc_get__3__value;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__3__value = this->__PVT__cfg;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz36__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor>{this}, ""s, "env_cfg"s, __Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__cfg = __Vfunc_get__3__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "INTERNAL_MON"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INTERNAL_MON"s, "Missing environment configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv"s, 0x00000015U);
        }
    }
    this->__PVT__status_vif = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 22)
        ->__PVT__status_vif;
    if ((VlNull{} == this->__PVT__status_vif)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "INTERNAL_MON"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INTERNAL_MON"s, "RX status virtual interface is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv"s, 0x00000018U);
        }
    }
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_monitor_rx_domain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_monitor_rx_domain\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h4dd28454__0;
        __VdynTrigger_h4dd28454__0 = 0;
        __VdynTrigger_h4dd28454__0 = 0U;
        VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 29)->rx_cb.clearFired();
        while ((1U & (~ (IData)(__VdynTrigger_h4dd28454__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.rx_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                         29);
            __VdynTrigger_h4dd28454__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 29)
                                          ->rx_cb.isFired());
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h4dd28454__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.rx_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                         29);
            VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 29)->rx_cb.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.rx_cb)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                     29);
        if ((VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 30)
             ->rx_cb__DOT__rst_n && VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 31)
             ->rx_cb__DOT__rx_pixel_dvalid)) {
            this->__PVT__pixel_valid_cycles = ((IData)(1U) 
                                               + this->__PVT__pixel_valid_cycles);
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_monitor_axi_domain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_monitor_axi_domain\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (true) {
        {
            CData/*0:0*/ __VdynTrigger_h7515dbb1__0;
            __VdynTrigger_h7515dbb1__0 = 0;
            __VdynTrigger_h7515dbb1__0 = 0U;
            VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 38)->axi_cb.clearFired();
            while ((1U & (~ (IData)(__VdynTrigger_h7515dbb1__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.axi_cb)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                             38);
                __VdynTrigger_h7515dbb1__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                              && VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 38)
                                              ->axi_cb.isFired());
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h7515dbb1__0);
                co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                             vlProcess, 
                                                             "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.axi_cb)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                             38);
                VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 38)->axi_cb.clearFired();
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_rx_internal_monitor.status_vif.axi_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                                         38);
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 39)
                       ->axi_cb__DOT__rst_n))) {
                goto __Vlabel0;
            }
            if (VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 41)
                ->axi_cb__DOT__axi_wr_en) {
                this->__PVT__axi_wr_en_cycles = ((IData)(1U) 
                                                 + this->__PVT__axi_wr_en_cycles);
            }
            if (VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 43)
                ->axi_cb__DOT__axi_full) {
                this->__PVT__axi_full_cycles = ((IData)(1U) 
                                                + this->__PVT__axi_full_cycles);
            }
            if (VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 45)
                ->axi_cb__DOT__axi_fifo_rd_vld) {
                this->__PVT__axi_fifo_read_cycles = 
                    ((IData)(1U) + this->__PVT__axi_fifo_read_cycles);
            }
            if (VL_NULL_CHECK(this->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 47)
                ->axi_cb__DOT__data_length_vld) {
                this->__PVT__data_length_vld_cycles 
                    = ((IData)(1U) + this->__PVT__data_length_vld_cycles);
            }
            __Vlabel0: ;
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, vlProcess);
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run_phase____Vfork_1__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                                      53);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase____Vfork_1__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase____Vfork_1__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_monitor_axi_domain(vlProcess, vlSymsp);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                         55);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_monitor_rx_domain(vlProcess, vlSymsp);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_rx_internal_monitor.sv", 
                         54);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__status_vif = nullptr;
    __PVT__pixel_valid_cycles = 0;
    __PVT__axi_wr_en_cycles = 0;
    __PVT__axi_full_cycles = 0;
    __PVT__axi_fifo_read_cycles = 0;
    __PVT__data_length_vld_cycles = 0;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor::~\n"); );
}
