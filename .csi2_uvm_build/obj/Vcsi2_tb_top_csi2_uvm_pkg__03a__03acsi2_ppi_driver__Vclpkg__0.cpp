// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi16> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi16__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi16> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi16__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_ppi_driver"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz38_TBz38::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__expected_ap = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz38, vlProcess, vlSymsp, "expected_ap"s, 
                                      VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver>{this});
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_build_phase\n"); );
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
                                                                               VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver>{this}, ""s, "env_cfg"s, __Vfunc_get__4__value, __VlefCall_0__get);
    this->__PVT__cfg = __Vfunc_get__4__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "PPI_DRV"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PPI_DRV"s, "Missing environment configuration"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv"s, 0x00000010U);
        }
    }
    this->__PVT__phy_vif = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 17)
        ->__PVT__phy_vif;
    if ((VlNull{} == this->__PVT__phy_vif)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "PPI_DRV"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PPI_DRV"s, "C-PHY BFM virtual interface is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv"s, 0x00000013U);
        }
    }
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_drive_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_drive_item\n"); );
    // Locals
    CData/*0:0*/ __Vtask_start_hs__14__started;
    __Vtask_start_hs__14__started = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_1__convert2string;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__index;
    unnamedblk1__DOT__index = 0;
    IData/*31:0*/ unnamedblk1__DOT__index__Vloopsize;
    unnamedblk1__DOT__index__Vloopsize = 0;
    CData/*0:0*/ started;
    QData/*63:0*/ header_word;
    VlQueue<QData/*63:0*/> payload_words;
    {
        started = 0U;
        header_word = 0;
        payload_words.clear();
        payload_words.atDefault() = 0;
        if ((((0x29U != VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 27)
               ->__PVT__datatype) || (0x0118U != VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 27)
                                      ->__PVT__rtl_word_count)) 
             || (0x00000230U != VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 28)
                 ->__PVT__payload.size()))) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "RTL_PROFILE"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 31)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RTL_PROFILE"s, VL_SFORMATF_N_NX("Unsupported current-RTL transaction: %s",1
                                                                                , 'S',&(__VlefCall_1__convert2string)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv"s, 0x0000001fU);
            }
        }
        vlSymsp->TOP__csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg.__VnoInFunc_build_header_word(vlSymsp, item, header_word);
        vlSymsp->TOP__csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg.__VnoInFunc_build_payload_words(vlSymsp, item, payload_words);
        VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 36)->__PVT__active_segment_mask 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 36)
            ->__PVT__active_segment_mask;
        VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 37)->__PVT__rtl_sync_workaround 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 37)
            ->__PVT__rtl_sync_workaround;
        VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 38)->__PVT__rtl_ulps_polarity_workaround 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 38)
            ->__PVT__rtl_ulps_polarity_workaround;
        VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 39)->__PVT__rtl_eot_workaround 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 39)
            ->__PVT__rtl_eot_workaround;
        co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 41)->__VnoInFunc_start_hs_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, __Vtask_start_hs__14__started);
        started = __Vtask_start_hs__14__started;
        if ((1U & (~ (IData)(started)))) {
            VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 43)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 47)->__VnoInFunc_drive_sync_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 47)
                                                                                ->__PVT__sync_type, 1U, VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 47)
                                                                                ->__PVT__active_segment_mask);
        if ((0U != VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 48)
             ->__PVT__last_status)) {
            VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 49)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 53)->__VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, header_word, 0U, VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 53)
                                                                                ->__PVT__active_segment_mask);
        if ((0U != VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 54)
             ->__PVT__last_status)) {
            VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 55)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 58)->__VnoInFunc_drive_rtl_inter_header_sync_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 58)
                                                                                ->__PVT__sync_type, VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 59)
                                                                                ->__PVT__active_segment_mask);
        if ((0U != VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 60)
             ->__PVT__last_status)) {
            VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 61)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 64)->__VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, header_word, 0U, VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 64)
                                                                                ->__PVT__active_segment_mask);
        if ((0U != VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 65)
             ->__PVT__last_status)) {
            VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 66)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
            goto __Vlabel0;
        }
        unnamedblk1__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__index, payload_words.size())) {
            unnamedblk1__DOT__index__Vloopsize = payload_words.size();
            co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 71)->__VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp, payload_words.at(unnamedblk1__DOT__index), 
                                                                                (VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 72)
                                                                                ->__PVT__send_eot 
                                                                                && (unnamedblk1__DOT__index 
                                                                                == 
                                                                                (payload_words.size() 
                                                                                - (IData)(1U)))), VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 73)
                                                                                ->__PVT__active_segment_mask);
            if ((0U != VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 74)
                 ->__PVT__last_status)) {
                VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 75)->__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(vlSymsp);
                goto __Vlabel0;
            }
            if ((unnamedblk1__DOT__index__Vloopsize 
                 <= payload_words.size())) {
                unnamedblk1__DOT__index = ((IData)(1U) 
                                           + unnamedblk1__DOT__index);
            }
        }
        if (VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 80)
            ->__PVT__send_eot) {
            co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 81)->__VnoInFunc_drive_post_and_eot_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp);
        } else {
            co_await VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 83)->__VnoInFunc_finish_without_eot_TOP__csi2_tb_top__DOT__phy_bfm(vlProcess, vlSymsp);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> __Vtask_get_next_item__28__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> req;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> expected;
    while (true) {
        if ((1U & (~ VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 91)
                                   ->__PVT__rst_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 91)
                   ->rst_n))) {
            CData/*0:0*/ __VdynTrigger_h08eac311__0;
            __VdynTrigger_h08eac311__0 = 0;
            __VdynTrigger_h08eac311__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h08eac311__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] csi2_uvm_pkg::csi2_ppi_driver.cfg.rst_vif.rst_n)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 
                                                             91);
                __VdynTrigger_h08eac311__0 = VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 91)
                                                           ->__PVT__rst_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 91)
                    ->rst_n;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h08eac311__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] csi2_uvm_pkg::csi2_ppi_driver.cfg.rst_vif.rst_n)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 
                                                         91);
        }
        co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz38_TBz38::__PVT__seq_item_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 92)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__28__t);
        req = __Vtask_get_next_item__28__t;
        co_await this->__VnoInFunc_drive_item(vlProcess, vlSymsp, req);
        VL_NULL_CHECK(req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 95)->__PVT__bfm_status 
            = VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 95)
            ->__PVT__last_status;
        VL_NULL_CHECK(req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 96)->__PVT__bfm_completed 
            = ((0U == VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 96)
                ->__PVT__last_status) && (0U == VL_NULL_CHECK(this->__PVT__phy_vif, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 97)
                                          ->__PVT__bfm_state));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "expected"s, VlNull{}, ""s, expected);
        VL_NULL_CHECK(expected, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 100)->__VnoInFunc_copy_from(vlSymsp, req);
        VL_NULL_CHECK(this->__PVT__expected_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 101)->__VnoInFunc_write(vlProcess, vlSymsp, expected);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz38_TBz38::__PVT__seq_item_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_ppi_driver.sv", 102)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__phy_vif = nullptr;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver::~\n"); );
}
