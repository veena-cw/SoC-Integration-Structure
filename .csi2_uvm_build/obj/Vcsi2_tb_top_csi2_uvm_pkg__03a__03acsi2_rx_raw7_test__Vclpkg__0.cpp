// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi25> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi25__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_rx_raw7_test"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_run_scenario(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_run_scenario\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence> sequence_h;
    co_await this->__VnoInFunc_apply_reset(vlProcess, vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "raw7_sequence"s, VlNull{}, ""s, sequence_h);
    co_await VL_NULL_CHECK(sequence_h, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 13)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 13)
                                                                                ->__PVT__ppi_agent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 13)
                                                                                ->__PVT__sequencer, VlNull{}, 0xffffffffU, 1U);
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000bb8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_ha053e934__1;
        __VdynTrigger_ha053e934__1 = 0;
        __VdynTrigger_ha053e934__1 = 0U;
        if ((VlNull{} != Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg)) {
            VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)
                          ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)->mon_cb.clearFired();
        }
        while ((1U & (~ (IData)(__VdynTrigger_ha053e934__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 
                                                         16);
            __VdynTrigger_ha053e934__1 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg) 
                                              && VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)
                                                               ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)
                                              ->mon_cb.isFired()));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha053e934__1);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 
                                                         16);
            if ((VlNull{} != Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg)) {
                VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)
                              ->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 16)->mon_cb.clearFired();
            }
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] csi2_uvm_pkg::csi2_base_test.env_cfg.axi_vif.mon_cb)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 
                                                     16);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "RX_RAW7_STATUS"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RX_RAW7_STATUS"s, VL_SFORMATF_N_NX("BFM status=%0d state=%0d dtype=0x%02h lane_err=%0b llp_err=%0b  pixel_valid=%0d axi_wr_en=%0d fifo_read=%0d fifo_full=%0d length_vld=%0d AW=%0d W handshakes=%0d B=%0d orphan-W=%0d zero-strobe=%0d effective=%0d",16
                                                                                , '#',4,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__last_status
                                                                                , '#',4,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__bfm_state
                                                                                , '#',6,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->dtype
                                                                                , '#',1,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->lane_err
                                                                                , '#',1,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env_cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__status_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->llp_err_vld
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__internal_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__pixel_valid_cycles
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__internal_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_wr_en_cycles
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__internal_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_fifo_read_cycles
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__internal_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_full_cycles
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__internal_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__data_length_vld_cycles
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__aw_handshake_count
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__w_handshake_count
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__b_handshake_count
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__orphan_w_count
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__zero_strobe_count
                                                                                , '#',32,VL_NULL_CHECK(VL_NULL_CHECK(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_base_test::__PVT__env, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__axi_monitor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv", 35)
                                                                                ->__PVT__effective_write_count) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/tests/csi2_rx_raw7_test.sv"s, 0x00000023U);
    }
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_raw7_test::~\n"); );
}
