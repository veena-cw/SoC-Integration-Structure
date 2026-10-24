// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi12> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_reset_monitor"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_config> __Vfunc_get__3__value;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__3__value = this->__PVT__rst_cfg;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor>{this}, ""s, "rst_cfg"s, __Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__rst_cfg = __Vfunc_get__3__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "RESET_MON"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RESET_MON"s, "Missing reset configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv"s, 0x0000000aU);
        }
    }
    this->__PVT__vif = VL_NULL_CHECK(this->__PVT__rst_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 11)
        ->__PVT__vif;
    if ((VlNull{} == this->__PVT__vif)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "RESET_MON"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RESET_MON"s, "Null reset interface"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv"s, 0x0000000dU);
        }
    }
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h49fd916f__0;
    __Vtrigprevexpr_h49fd916f__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h3c01ba86__0;
        __VdynTrigger_h3c01ba86__0 = 0;
        __VdynTrigger_h3c01ba86__0 = 0U;
        __Vtrigprevexpr_h49fd916f__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 17)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3c01ba86__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge csi2_uvm_pkg::csi2_reset_monitor.vif.clk)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 
                                                         17);
            __VdynTrigger_h3c01ba86__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 17)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h49fd916f__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3c01ba86__0);
            __Vtrigprevexpr_h49fd916f__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 17)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge csi2_uvm_pkg::csi2_reset_monitor.vif.clk)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 
                                                     17);
        if (VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 18)
            ->rst_n) {
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 20)
                       ->rst_n))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "RESET_MON"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "RESET_MON"s, VL_SFORMATF_N_NX("Reset unknown: raw=%b sampled=%b",2
                                                                                , '#',1,VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 21)
                                                                                ->rst_n
                                                                                , '#',1,VL_NULL_CHECK(this->__PVT__vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv", 21)
                                                                                ->rst_n) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/reset_agent/csi2_reset_monitor.sv"s, 0x00000015U);
                }
            }
        } else {
            this->__PVT__asserted_cycles = ((IData)(1U) 
                                            + this->__PVT__asserted_cycles);
        }
    }
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __PVT__asserted_cycles = 0;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_monitor::~\n"); );
}
