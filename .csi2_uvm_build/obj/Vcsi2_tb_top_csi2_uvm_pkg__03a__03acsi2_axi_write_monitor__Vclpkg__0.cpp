// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi20> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi20__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi20> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi20__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_axi_write_monitor"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__ap = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz64, vlProcess, vlSymsp, "ap"s, 
                             VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor>{this});
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config> __Vfunc_get__4__value;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__4__value = this->__PVT__cfg;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz36__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor>{this}, ""s, "env_cfg"s, __Vfunc_get__4__value, __VlefCall_0__get);
    this->__PVT__cfg = __Vfunc_get__4__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "AXI_MON"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "AXI_MON"s, "Missing environment configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv"s, 0x0000001bU);
        }
    }
    this->__PVT__axi_vif = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 28)
        ->__PVT__axi_vif;
    if ((VlNull{} == this->__PVT__axi_vif)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "AXI_MON"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "AXI_MON"s, "AXI virtual interface is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv"s, 0x0000001eU);
        }
    }
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> unnamedblk1__DOT__aw_item;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> unnamedblk2__DOT__item;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> unnamedblk2__DOT__aw_item;
    while (true) {
        {
            CData/*0:0*/ __VdynTrigger_hde9d9f4a__0;
            __VdynTrigger_hde9d9f4a__0 = 0;
            __VdynTrigger_hde9d9f4a__0 = 0U;
            VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 35)->mon_cb.clearFired();
            while ((1U & (~ (IData)(__VdynTrigger_hde9d9f4a__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([event] csi2_uvm_pkg::csi2_axi_write_monitor.axi_vif.mon_cb)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 
                                                             35);
                __VdynTrigger_hde9d9f4a__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                              && VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 35)
                                              ->mon_cb.isFired());
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hde9d9f4a__0);
                co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                             vlProcess, 
                                                             "@([event] csi2_uvm_pkg::csi2_axi_write_monitor.axi_vif.mon_cb)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 
                                                             35);
                VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 35)->mon_cb.clearFired();
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([event] csi2_uvm_pkg::csi2_axi_write_monitor.axi_vif.mon_cb)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 
                                                         35);
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 36)
                       ->mon_cb__DOT__areset_n))) {
                this->__PVT__pending_aw_q.clear();
                goto __Vlabel0;
            }
            if ((VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 41)
                 ->mon_cb__DOT__awvalid && VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 41)
                 ->mon_cb__DOT__awready)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi19__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "aw_item"s, VlNull{}, ""s, unnamedblk1__DOT__aw_item);
                VL_NULL_CHECK(unnamedblk1__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 44)->__PVT__address 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 44)
                    ->mon_cb__DOT__awaddr;
                VL_NULL_CHECK(unnamedblk1__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 45)->__PVT__awid 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 45)
                    ->mon_cb__DOT__awid;
                VL_NULL_CHECK(unnamedblk1__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 46)->__PVT__awlen 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 46)
                    ->mon_cb__DOT__awlen;
                VL_NULL_CHECK(unnamedblk1__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 47)->__PVT__awsize 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 47)
                    ->mon_cb__DOT__awsize;
                VL_NULL_CHECK(unnamedblk1__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 48)->__PVT__awburst 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 48)
                    ->mon_cb__DOT__awburst;
                this->__PVT__pending_aw_q.push_back(unnamedblk1__DOT__aw_item);
                this->__PVT__aw_handshake_count = ((IData)(1U) 
                                                   + this->__PVT__aw_handshake_count);
            }
            if ((VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 53)
                 ->mon_cb__DOT__wvalid && VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 53)
                 ->mon_cb__DOT__wready)) {
                this->__PVT__w_handshake_count = ((IData)(1U) 
                                                  + this->__PVT__w_handshake_count);
                if ((0U != this->__PVT__pending_aw_q.size())) {
                    unnamedblk2__DOT__aw_item = this->__PVT__pending_aw_q.pop_front();
                } else {
                    this->__PVT__orphan_w_count = ((IData)(1U) 
                                                   + this->__PVT__orphan_w_count);
                }
                if ((1U & (~ (0U != VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 65)
                              ->mon_cb__DOT__wstrb)))) {
                    this->__PVT__zero_strobe_count 
                        = ((IData)(1U) + this->__PVT__zero_strobe_count);
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi19__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "item"s, VlNull{}, ""s, unnamedblk2__DOT__item);
                if ((VlNull{} != unnamedblk2__DOT__aw_item)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 72)->__PVT__address 
                        = VL_NULL_CHECK(unnamedblk2__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 72)
                        ->__PVT__address;
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 73)->__PVT__awid 
                        = VL_NULL_CHECK(unnamedblk2__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 73)
                        ->__PVT__awid;
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 74)->__PVT__awlen 
                        = VL_NULL_CHECK(unnamedblk2__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 74)
                        ->__PVT__awlen;
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 75)->__PVT__awsize 
                        = VL_NULL_CHECK(unnamedblk2__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 75)
                        ->__PVT__awsize;
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 76)->__PVT__awburst 
                        = VL_NULL_CHECK(unnamedblk2__DOT__aw_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 76)
                        ->__PVT__awburst;
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 78)->__PVT__aw_seen = 1U;
                } else {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 78)->__PVT__aw_seen = 0U;
                }
                VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 79)->__PVT__wlast 
                    = VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 79)
                    ->mon_cb__DOT__wlast;
                if ((1U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata)));
                }
                if ((2U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 8U))));
                }
                if ((4U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 0x10U))));
                }
                if ((8U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 0x18U))));
                }
                if ((0x00000010U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 0x20U))));
                }
                if ((0x00000020U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 0x28U))));
                }
                if ((0x00000040U & VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 84)
                     ->mon_cb__DOT__wstrb)) {
                    VL_NULL_CHECK(unnamedblk2__DOT__item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 85)->__PVT__accepted_bytes.push_back(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 86)
                                                                                ->mon_cb__DOT__wdata 
                                                                                >> 0x30U))));
                }
                this->__PVT__effective_write_count 
                    = ((IData)(1U) + this->__PVT__effective_write_count);
                VL_NULL_CHECK(this->__PVT__ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 89)->__VnoInFunc_write(vlProcess, vlSymsp, unnamedblk2__DOT__item);
            }
            if ((VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 92)
                 ->mon_cb__DOT__bvalid && VL_NULL_CHECK(this->__PVT__axi_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/axi_agent/csi2_axi_write_monitor.sv", 92)
                 ->mon_cb__DOT__bready)) {
                this->__PVT__b_handshake_count = ((IData)(1U) 
                                                  + this->__PVT__b_handshake_count);
            }
            __Vlabel0: ;
        }
    }
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__axi_vif = nullptr;
    __PVT__w_handshake_count = 0;
    __PVT__aw_handshake_count = 0;
    __PVT__b_handshake_count = 0;
    __PVT__orphan_w_count = 0;
    __PVT__zero_strobe_count = 0;
    __PVT__effective_write_count = 0;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor::~\n"); );
}
