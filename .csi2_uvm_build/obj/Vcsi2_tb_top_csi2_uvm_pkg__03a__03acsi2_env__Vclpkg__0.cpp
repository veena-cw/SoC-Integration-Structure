// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi23> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi23__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi23> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi23__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_env"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_env::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_build_phase\n"); );
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
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, "env_cfg"s, __Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__cfg = __Vfunc_get__3__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "ENV"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ENV"s, "Missing environment configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv"s, 0x00000012U);
        }
    }
    if ((0U != VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 19)
         ->__PVT__mode)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "ENV_MODE"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ENV_MODE"s, "Current repository contains RX RTL only"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv"s, 0x00000014U);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi18__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "ppi_agent"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, this->__PVT__ppi_agent);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi20__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "axi_monitor"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, this->__PVT__axi_monitor);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi21__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "internal_monitor"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, this->__PVT__internal_monitor);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi13__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reset_agent"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, this->__PVT__reset_agent);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi22__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "scoreboard"s, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env>{this}, ""s, this->__PVT__scoreboard);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__ppi_agent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 32)
                                ->__PVT__driver, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 32)
                  ->__PVT__expected_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 32)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__scoreboard, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 32)
                                                                                ->__PVT__expected_fifo, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 32)
                                                                                ->__PVT__analysis_export);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 33)
                  ->__PVT__ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 33)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__scoreboard, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 33)
                                                                                ->__PVT__actual_fifo, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_env.sv", 33)
                                                                                ->__PVT__analysis_export);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env::~\n"); );
}
