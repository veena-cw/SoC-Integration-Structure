// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__0(Vcsi2_tb_top___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__1(Vcsi2_tb_top___024root* vlSelf);
VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__2(Vcsi2_tb_top___024root* vlSelf);
void Vcsi2_tb_top_c_phy_bfm_if___eval_initial__TOP__csi2_tb_top__DOT__phy_bfm(Vcsi2_tb_top_c_phy_bfm_if* vlSelf);

void Vcsi2_tb_top___024root___eval_initial(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_initial\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if (VL_UNLIKELY((VL_TESTPLUSARGS_I("WAVES"s)))) {
            VL_WRITEF_NX("WAVE_INFO: waveform dumping enabled\n",0);
            vlSelfRef.csi2_tb_top__DOT____VlemExpr_0 
                = VL_VALUEPLUSARGS_INN(64, "WAVE_FILE=%s"s, 
                                       vlSelfRef.csi2_tb_top__DOT__waveform_dump__DOT__wave_file);
            if ((! vlSelfRef.csi2_tb_top__DOT____VlemExpr_0)) {
                vlSelfRef.csi2_tb_top__DOT__waveform_dump__DOT__wave_file = "/tmp/opencode/csi2_uvm/csi2_wave.fst"s;
            }
            vlSymsp->_vm_contextp__->dumpfile(vlSelfRef.csi2_tb_top__DOT__waveform_dump__DOT__wave_file);
            VL_PRINTF_MT("-Info: /home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/../top/csi2_tb_top.sv:183: $dumpvar ignored, as Verilated without --trace\n");
        }
        VL_WRITEF_NX("depth=8192\ndepth=8192\ndepth=8192\ndepth=1024\n",0);
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    }
    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vcsi2_tb_top_c_phy_bfm_if___eval_initial__TOP__csi2_tb_top__DOT__phy_bfm((&vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm));
}

void Vcsi2_tb_top___024root___eval_sample(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_sample\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__bready 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__bready;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__bvalid 
        = vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.bvalid;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wstrb 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wstrb;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wdata 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wdata;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__wlast 
        = vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.wlast;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wvalid 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awburst 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awburst;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awsize 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awsize;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awlen 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awlen;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awaddr 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awaddr;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awid 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awid;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awvalid 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awvalid;
    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n 
        = vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en;
}

void Vcsi2_tb_top___024root___eval_triggers_vec__ico(Vcsi2_tb_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_tb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcsi2_tb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vcsi2_tb_top___024root___eval_ico(Vcsi2_tb_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_ico\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
    Vcsi2_tb_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsi2_tb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcsi2_tb_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((0x0000000008040000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                        = ((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)) 
                           & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs)));
                }
            }
            if ((0x0000080000040000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                           & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)));
                }
            }
            if ((0x0000080800040000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld 
                        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                           & ((0x0000000fU == (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)) 
                              | (0x0000000fU == (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs))));
                }
            }
            if ((0x000000000000fe00ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__3
                    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err 
                        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths) 
                           | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs) 
                              | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc) 
                                 | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc) 
                                    | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol) 
                                       | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0) 
                                          | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1)))))));
                }
            }
            if ((0x000010000000fe00ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__4
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate) 
                           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
                }
            }
        }
    }
    return (__VicoExecute);
}

void Vcsi2_tb_top___024root___eval_triggers_vec__act(Vcsi2_tb_top___024root* vlSelf);
void Vcsi2_tb_top___024root___timing_ready(Vcsi2_tb_top___024root* vlSelf);
void Vcsi2_tb_top___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 4> &out, const VlUnpacked<QData/*63:0*/, 3> &in);
void Vcsi2_tb_top___024root___eval_triggers_ext__act(Vcsi2_tb_top___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 3> &latched);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_tb_top___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 4> &ext, const std::string &tag);
#endif  // VL_DEBUG
void Vcsi2_tb_top___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 4> &in);
bool Vcsi2_tb_top___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in);
void Vcsi2_tb_top___024root___timing_resume(Vcsi2_tb_top___024root* vlSelf);
void Vcsi2_tb_top___024root___eval_body__act(Vcsi2_tb_top___024root* vlSelf);

bool Vcsi2_tb_top___024root___eval_act(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_act\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcsi2_tb_top___024root___eval_triggers_vec__act(vlSelf);
    Vcsi2_tb_top___024root___timing_ready(vlSelf);
    Vcsi2_tb_top___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    Vcsi2_tb_top___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsi2_tb_top___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcsi2_tb_top___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcsi2_tb_top___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcsi2_tb_top___024root___timing_resume(vlSelf);
        Vcsi2_tb_top___024root___eval_body__act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcsi2_tb_top___024root___eval_inact(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_inact\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

bool Vcsi2_tb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 3> &in);
void Vcsi2_tb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 3> &in);
void Vcsi2_tb_top___024root___eval_body__nba(Vcsi2_tb_top___024root* vlSelf);
void Vcsi2_tb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 3> &out);

bool Vcsi2_tb_top___024root___eval_nba(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_nba\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcsi2_tb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcsi2_tb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VobsTriggered, vlSelfRef.__VnbaTriggered);
        Vcsi2_tb_top___024root___eval_body__nba(vlSelf);
        Vcsi2_tb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vcsi2_tb_top_csi2_reset_if___obs_sequent__TOP__csi2_tb_top__DOT__rst_vif__0(Vcsi2_tb_top_csi2_reset_if* vlSelf);
void Vcsi2_tb_top_csi2_axi_write_if___obs_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf);
void Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__0(Vcsi2_tb_top_csi2_rx_status_if* vlSelf);
void Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__1(Vcsi2_tb_top_csi2_rx_status_if* vlSelf);

bool Vcsi2_tb_top___024root___eval_obs(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_obs\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VobsExecute;
    // Body
    __VobsExecute = Vcsi2_tb_top___024root___trigger_anySet__act(vlSelfRef.__VobsTriggered);
    if (__VobsExecute) {
        Vcsi2_tb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VreactTriggered, vlSelfRef.__VobsTriggered);
        {
            // Inlined CFunc: _eval_body__obs
            if ((0x0000000000000020ULL & vlSelfRef.__VobsTriggered[1U])) {
                Vcsi2_tb_top_csi2_reset_if___obs_sequent__TOP__csi2_tb_top__DOT__rst_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__rst_vif));
            }
            if ((4ULL & vlSelfRef.__VobsTriggered[0U])) {
                Vcsi2_tb_top_csi2_axi_write_if___obs_sequent__TOP__csi2_tb_top__DOT__axi_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__axi_vif));
                Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__status_vif));
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VobsTriggered[1U])) {
                Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__1((&vlSymsp->TOP__csi2_tb_top__DOT__status_vif));
            }
        }
        Vcsi2_tb_top___024root___trigger_clear__act(vlSelfRef.__VobsTriggered);
    }
    return (__VobsExecute);
}

void Vcsi2_tb_top_csi2_reset_if___react_sequent__TOP__csi2_tb_top__DOT__rst_vif__0(Vcsi2_tb_top_csi2_reset_if* vlSelf);

bool Vcsi2_tb_top___024root___eval_react(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_react\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VreactExecute;
    // Body
    __VreactExecute = Vcsi2_tb_top___024root___trigger_anySet__act(vlSelfRef.__VreactTriggered);
    if (__VreactExecute) {
        {
            // Inlined CFunc: _eval_body__react
            if ((0x0000000000000060ULL & vlSelfRef.__VreactTriggered[1U])) {
                Vcsi2_tb_top_csi2_reset_if___react_sequent__TOP__csi2_tb_top__DOT__rst_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__rst_vif));
                {
                    // Inlined CFunc: _react_sequent__TOP__0
                    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n 
                        = vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n;
                }
            }
        }
        Vcsi2_tb_top___024root___trigger_clear__act(vlSelfRef.__VreactTriggered);
    }
    return (__VreactExecute);
}

void Vcsi2_tb_top___024root___eval_postponed(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_postponed\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__0(Vcsi2_tb_top___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__5__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "phy_vif"s, (&vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm));
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz2__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "axi_vif"s, (&vlSymsp->TOP__csi2_tb_top__DOT__axi_vif));
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz3__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "rst_vif"s, (&vlSymsp->TOP__csi2_tb_top__DOT__rst_vif));
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "status_vif"s, (&vlSymsp->TOP__csi2_tb_top__DOT__status_vif));
    vlSelfRef.__Vtask_run_test__4__test_name = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top = __Vfunc_get__5__Vfuncout;
    co_await VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 40)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vtask_run_test__4__test_name);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__1(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/../top/csi2_tb_top.sv", 
                                             12);
        vlSelfRef.csi2_tb_top__DOT__aclk = (1U & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__aclk)));
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__2(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/../top/csi2_tb_top.sv", 
                                             11);
        vlSelfRef.csi2_tb_top__DOT__bfm_clk = (1U & 
                                               (~ (IData)(vlSelfRef.csi2_tb_top__DOT__bfm_clk)));
    }
    co_return;
}

void Vcsi2_tb_top___024root___eval_triggers_vec__ico(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_triggers_vec__ico\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xffffdfffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__ulpsactivenot)))) 
                                        << 0x0000002dU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__ulpsactivenot 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffefffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__stopstate)))) 
                                        << 0x0000002cU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__stopstate 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffff7ffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidhs)))) 
                                        << 0x0000002bU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffbffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidesc)))) 
                                        << 0x0000002aU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffdffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxulpsesc)))) 
                                        << 0x00000029U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxulpsesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffeffffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxtriggeresc)))) 
                                        << 0x00000028U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxtriggeresc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffff7fffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs3)))) 
                                        << 0x00000027U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs3;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffbfffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs2)))) 
                                        << 0x00000026U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs2;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffdfffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs1)))) 
                                        << 0x00000025U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs1;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffefffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs0)))) 
                                        << 0x00000024U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs0;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffff7ffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynchs)))) 
                                        << 0x00000023U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxsynchs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffbffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxlpdtesc)))) 
                                        << 0x00000022U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxlpdtesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffdffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxinvalidcodehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxinvalidcodehs)))) 
                                        << 0x00000021U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxinvalidcodehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxinvalidcodehs;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffeffffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxerrcalhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxerrcalhs)))) 
                                        << 0x00000020U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxerrcalhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxerrcalhs;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffff7fffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdatahs 
                                                         != vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxdatahs))) 
                                        << 0x0000001fU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxdatahs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdatahs;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffbfffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdataesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxdataesc)))) 
                                        << 0x0000001eU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxdataesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdataesc;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffdfffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationprehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationprehs)))) 
                                        << 0x0000001dU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationprehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationprehs;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffefffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationformat) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationformat)))) 
                                        << 0x0000001cU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationformat 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationformat;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffff7ffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpvalidhs)))) 
                                        << 0x0000001bU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpvalidhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffbffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble3)))) 
                                        << 0x0000001aU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble3;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffdffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble2)))) 
                                        << 0x00000019U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble2;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffeffffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble1)))) 
                                        << 0x00000018U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble1;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffff7fffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble0)))) 
                                        << 0x00000017U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble0;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffbfffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode3)))) 
                                        << 0x00000016U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode3;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffdfffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode2)))) 
                                        << 0x00000015U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode2;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffefffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode1)))) 
                                        << 0x00000014U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode1;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffff7ffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode0)))) 
                                        << 0x00000013U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode0;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffbffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxactivehs)))) 
                                        << 0x00000012U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rxactivehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffdffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg7)))) 
                                        << 0x00000011U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg7 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffeffffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg4)))) 
                                        << 0x00000010U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg4 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffff7fffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsyncesc)))) 
                                        << 0x0000000fU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsyncesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffbfffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsotsynchs)))) 
                                        << 0x0000000eU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsotsynchs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffdfffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsoths)))) 
                                        << 0x0000000dU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errsoths 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffefffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__erresc)))) 
                                        << 0x0000000cU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__erresc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffff7ffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontrol)))) 
                                        << 0x0000000bU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontrol 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffbffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp1)))) 
                                        << 0x0000000aU));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffdffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp0)))) 
                                        << 9U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffeffULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.direction) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__direction)))) 
                                        << 8U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm__direction 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.direction;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffff7fULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_ulps_polarity_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_ulps_polarity_workaround)))) 
                                        << 7U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_ulps_polarity_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_ulps_polarity_workaround;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_sync_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_sync_workaround)))) 
                                        << 6U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_sync_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_sync_workaround;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_eot_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_eot_workaround)))) 
                                        << 5U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_eot_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_eot_workaround;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__pending_sot_on_first_word) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__pending_sot_on_first_word)))) 
                                        << 4U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__pending_sot_on_first_word 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__pending_sot_on_first_word;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__last_status) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__last_status)))) 
                                        << 3U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__last_status 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__last_status;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__bfm_state) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__bfm_state)))) 
                                        << 2U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__bfm_state 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__bfm_state;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__active_segment_mask) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__active_segment_mask)))) 
                                        << 1U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__csi2_tb_top__DOT__phy_bfm____PVT__active_segment_mask 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__active_segment_mask;
}

bool Vcsi2_tb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcsi2_tb_top___024root___eval_triggers_ext__act(Vcsi2_tb_top___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 3> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_triggers_ext__act\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(3U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

void Vcsi2_tb_top___024root___eval_triggers_vec__act(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_triggers_vec__act\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc8ffa771__0;
    __Vtrigprevexpr_hc8ffa771__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[2U] = ((0xffffefffffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__ulpsactivenot)))) 
                                        << 0x0000002cU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__ulpsactivenot 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot;
    vlSelfRef.__VactTriggered[2U] = ((0xfffff7ffffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__stopstate)))) 
                                        << 0x0000002bU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__stopstate 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffbffffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidhs)))) 
                                        << 0x0000002aU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffdffffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidesc)))) 
                                        << 0x00000029U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxvalidesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffeffffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxulpsesc)))) 
                                        << 0x00000028U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxulpsesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc;
    vlSelfRef.__VactTriggered[2U] = ((0xffffff7fffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxtriggeresc)))) 
                                        << 0x00000027U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxtriggeresc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffbfffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs3)))) 
                                        << 0x00000026U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs3;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffdfffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs2)))) 
                                        << 0x00000025U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs2;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffefffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs1)))) 
                                        << 0x00000024U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs1;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffff7ffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs0)))) 
                                        << 0x00000023U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynctypehs0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs0;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffbffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynchs)))) 
                                        << 0x00000022U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxsynchs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffdffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxlpdtesc)))) 
                                        << 0x00000021U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxlpdtesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffeffffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxinvalidcodehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxinvalidcodehs)))) 
                                        << 0x00000020U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxinvalidcodehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxinvalidcodehs;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffff7fffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxerrcalhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxerrcalhs)))) 
                                        << 0x0000001fU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxerrcalhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxerrcalhs;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffbfffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdatahs 
                                                         != vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxdatahs))) 
                                        << 0x0000001eU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxdatahs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdatahs;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffdfffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdataesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxdataesc)))) 
                                        << 0x0000001dU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxdataesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdataesc;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffefffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationprehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationprehs)))) 
                                        << 0x0000001cU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationprehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationprehs;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffff7ffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationformat) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationformat)))) 
                                        << 0x0000001bU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxcalibrationformat 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxcalibrationformat;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffbffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpvalidhs)))) 
                                        << 0x0000001aU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpvalidhs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffdffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble3)))) 
                                        << 0x00000019U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble3;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffeffffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble2)))) 
                                        << 0x00000018U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble2;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffff7fffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble1)))) 
                                        << 0x00000017U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble1;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffbfffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble0)))) 
                                        << 0x00000016U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpnibble0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpnibble0;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffdfffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode3) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode3)))) 
                                        << 0x00000015U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode3 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode3;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffefffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode2) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode2)))) 
                                        << 0x00000014U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode2 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode2;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffff7ffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode1)))) 
                                        << 0x00000013U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode1;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffbffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode0)))) 
                                        << 0x00000012U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxalpcode0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpcode0;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffdffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxactivehs)))) 
                                        << 0x00000011U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rxactivehs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffeffffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg7)))) 
                                        << 0x00000010U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg7 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffff7fffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg4)))) 
                                        << 0x0000000fU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__rx_lane_sts_reg4 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffbfffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsyncesc)))) 
                                        << 0x0000000eU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsyncesc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffdfffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsotsynchs)))) 
                                        << 0x0000000dU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsotsynchs 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffefffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsoths)))) 
                                        << 0x0000000cU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errsoths 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffff7ffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__erresc)))) 
                                        << 0x0000000bU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__erresc 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffbffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontrol)))) 
                                        << 0x0000000aU));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontrol 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffdffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp1)))) 
                                        << 9U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp1 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffeffULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp0)))) 
                                        << 8U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__errcontentionlp0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffff7fULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.direction) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__direction)))) 
                                        << 7U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm__direction 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.direction;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_ulps_polarity_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_ulps_polarity_workaround)))) 
                                        << 6U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_ulps_polarity_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_ulps_polarity_workaround;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_sync_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_sync_workaround)))) 
                                        << 5U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_sync_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_sync_workaround;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_eot_workaround) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_eot_workaround)))) 
                                        << 4U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__rtl_eot_workaround 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__rtl_eot_workaround;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__pending_sot_on_first_word) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__pending_sot_on_first_word)))) 
                                        << 3U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__pending_sot_on_first_word 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__pending_sot_on_first_word;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__last_status) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__last_status)))) 
                                        << 2U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__last_status 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__last_status;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__bfm_state) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__bfm_state)))) 
                                        << 1U));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__bfm_state 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__bfm_state;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | (IData)((IData)(
                                                       ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__active_segment_mask) 
                                                        != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__active_segment_mask)))));
    vlSelfRef.__Vtrigprevvif_act_TOP__csi2_tb_top__DOT__phy_bfm____PVT__active_segment_mask 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.__PVT__active_segment_mask;
    __Vtrigprevexpr_hc8ffa771__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxclkesc) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rxclkesc__0))) 
                                                       << 6U) 
                                                      | ((((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxwordclkhs) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rxwordclkhs__0))) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxwordclkhs) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxwordclkhs__0))) 
                                                            << 4U))) 
                                                     | (((((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__rst_n__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.csi2_tb_top__DOT__aclk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__aclk__0))) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rst_n__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.cphy_rxwordclkhs) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__cphy_rxwordclkhs__0))))))));
    vlSelfRef.__VactTriggered[1U] = VL_EXTEND_QI(64,16, 
                                                 ((VL_EXTEND_II(8,2, 
                                                                ((vlSelfRef.__VdynSched.evaluate() 
                                                                  << 1U) 
                                                                 | ((IData)(__Vtrigprevexpr_hc8ffa771__0) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_hc8ffa771__1)))) 
                                                   << 8U) 
                                                  | (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.drv_cb__DOT__rst_n) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__drv_cb__DOT__rst_n__0)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.clk)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__clk__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.csi2_tb_top__DOT__bfm_clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__bfm_clk__0))))) 
                                                      << 4U) 
                                                     | (((vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0.neq(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem) 
                                                          << 3U) 
                                                         | (vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0.neq(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem) 
                                                            << 2U)) 
                                                        | ((vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0.neq(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem) 
                                                            << 1U) 
                                                           | vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0.neq(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem))))));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__cphy_rxwordclkhs__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.cphy_rxwordclkhs;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rst_n__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__aclk__0 
        = vlSelfRef.csi2_tb_top__DOT__aclk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__rst_n__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxwordclkhs__0 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxwordclkhs;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rxwordclkhs__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxwordclkhs;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__rxclkesc__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxclkesc;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0.assign(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0.assign(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0.assign(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0.assign(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__bfm_clk__0 
        = vlSelfRef.csi2_tb_top__DOT__bfm_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__clk__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_tb_top__DOT__rst_vif__drv_cb__DOT__rst_n__0 
        = vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.drv_cb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_hc8ffa771__1 = __Vtrigprevexpr_hc8ffa771__0;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vcsi2_tb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void Vcsi2_tb_top___024root___act_sequent__TOP__6(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___act_sequent__TOP__6\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__dtype_sts_reg 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
    vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 0U;
    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turnrequest 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turnrequest;
    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect;
    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turndisable 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turndisable;
    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__forcerxmode 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__forcerxmode;
    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__enable 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__enable;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg;
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10;
}

extern const VlUnpacked<CData/*2:0*/, 256> Vcsi2_tb_top__ConstPool__TABLE_hf645469e_0;

void Vcsi2_tb_top___024root___act_sequent__TOP__14(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___act_sequent__TOP__14\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
            = ((0x0000007eU & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld) 
                               << 1U)) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty));
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
            = ((0x000003feU & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r) 
                               << 1U)) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable));
        if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
              | (0U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r))) 
             & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56 
                = ((6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56))));
        }
        if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__dtype_sts_reg 
                = (((((((((0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
                          | (0x059fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) 
                         | (0x077fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) 
                        | (0x01dfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) 
                       | (0x022fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) 
                      | (0x3fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) 
                     | (0x031fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) 
                    | (0x03bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)))
                    ? ((0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16))
                        ? 0x2fU : ((0x059fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))
                                    ? 0x23U : ((0x077fU 
                                                == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))
                                                ? 0x27U
                                                : (
                                                   (0x01dfU 
                                                    == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))
                                                    ? 0x28U
                                                    : 
                                                   ((0x022fU 
                                                     == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))
                                                     ? 0x29U
                                                     : 
                                                    ((0x3fU 
                                                      == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))
                                                      ? 0x2aU
                                                      : 
                                                     ((0x031fU 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))
                                                       ? 0x2bU
                                                       : 0x2cU)))))))
                    : (((((((((0x045fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)) 
                              | (0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) 
                             | (0x08bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) 
                            | (0x03bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) 
                           | (0x027fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) 
                          | (0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) 
                         | (0x031fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) 
                        | (0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)))
                        ? ((0x045fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))
                            ? 0x2dU : ((0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))
                                        ? 0x2fU : (
                                                   (0x08bfU 
                                                    == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))
                                                    ? 0x26U
                                                    : 
                                                   ((0x03bfU 
                                                     == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x027fU 
                                                      == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))
                                                      ? 0x1cU
                                                      : 
                                                     ((0x04ffU 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))
                                                       ? 0x1eU
                                                       : 
                                                      ((0x031fU 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))
                                                        ? 0x1dU
                                                        : 0x1fU)))))))
                        : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)));
        }
        if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld) 
             & (0U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
                = ((0x0fffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr))
                    ? 0U : (0x00000fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr))));
        }
        if (((7U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
             | (((1U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty)) 
                & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty)) 
                           | (0U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx))) 
                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)));
        }
        if ((0x17U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = 0U;
        } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
            = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                & (7U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))
                ? (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx) 
                    << 8U) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx))
                : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg));
        if ((1U & ((2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)) 
                   | (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld))))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = 0U;
        } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)));
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
            = ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld)) 
                & (0U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data)
                : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx));
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
            = ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld)) 
                & (1U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data)
                : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx));
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx 
            = ((((5U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)) 
                & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)
                : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx));
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx 
            = ((((6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)) 
                & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)
                : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx));
        if ((0x059fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666)));
        }
        if ((0x01dfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6)));
        }
        if ((0x022fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7)));
        }
        if ((0x3fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8)));
        }
        if ((0x031fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10)));
        }
        if ((0x03bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)));
        }
        if ((0x045fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)));
        }
        if ((0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20)));
        }
        if ((0x08bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28)));
        }
        if ((0x03bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208)));
        }
        if ((0x027fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd)));
        }
        if ((0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228)));
        }
        if ((0x031fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd)));
        }
        if ((0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)));
        }
        if ((0x077fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = 0U;
        } else if (((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld)) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24)));
        }
        if ((0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = 0U;
        } else if (((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld)) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld)) 
                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)));
        }
        if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) 
             & (0x0fffU != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
                = ((0x0fffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr))
                    ? 0U : (0x00000fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr))));
        }
        if (((0x0fffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)) 
             & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0x0fffU;
        } else if (((0U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)) 
                    & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0U;
        } else if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) 
                     & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld))) 
                    & (0x0fffU != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)));
        } else if ((((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld)) 
                     & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)) 
                    & (0U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
                = (0x00000fffU & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
            = ((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                   | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                  & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long)) 
                 & (6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) 
                & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long)
                : (((((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                      & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                         | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r))) 
                     & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short)) 
                    & (6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))
                    ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short)
                    : ((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long)) 
                        & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid))
                        ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long)
                        : (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r))));
        if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 0U;
        } else {
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (1U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (2U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (3U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (8U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (9U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0aU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0bU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0cU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0dU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0eU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0fU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x10U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x11U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x12U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x13U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x14U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x15U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x16U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x18U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x19U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1aU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1cU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1dU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1eU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1fU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 1U;
            }
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data 
            = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
                & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r))
                ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data)
                : 0U);
        if (((2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
             | (0x12U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg 
                = ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                     | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld)) 
                    | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld))
                    ? 3U : (((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                 | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld)) 
                                | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld)) 
                               | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld)) 
                              | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)) 
                             | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld))
                             ? 2U : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld))
                                      ? 0U : ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld)) 
                                               | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld))
                                               ? 1U
                                               : ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld)
                                                   ? 4U
                                                   : 0x0fU)))));
        }
        if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9) {
            if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                  & (0x1dU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10 = 1U;
            }
        } else {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10 = 0U;
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turnrequest = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turndisable = 1U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__forcerxmode = 1U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__enable = 1U;
    } else {
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__dtype_sts_reg = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10 = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turnrequest = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turndisable = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__forcerxmode = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__enable = 0U;
    }
    __Vtableidx1 = ((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err) 
                        << 3U) | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err) 
                                  << 2U)) | (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err))) 
                     << 4U) | ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err) 
                                 << 3U) | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err) 
                                   << 1U) | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n))));
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err 
        = Vcsi2_tb_top__ConstPool__TABLE_hf645469e_0
        [__Vtableidx1];
}

void Vcsi2_tb_top___024root___act_sequent__TOP__16(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___act_sequent__TOP__16\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
        if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en) 
             & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2) 
                != (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin)))))) {
            vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in;
            vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
            vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 1U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin)));
        }
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state 
            = ((0x00000040U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                ? ((0x00000020U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                    ? 1U : ((0x00000010U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                             ? 1U : ((8U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                      ? 1U : ((4U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                               ? 1U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                       ? 4U
                                                       : 0x40U)))))))))
                : ((0x00000020U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                    ? ((0x00000010U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                        ? 1U : ((8U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                 ? 1U : ((4U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                          ? 1U : ((2U 
                                                   & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                     ? 1U
                                                     : 0x20U))))))
                    : ((0x00000010U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                        ? ((8U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                            ? 1U : ((4U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                     ? 1U : ((2U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                              ? 1U : 
                                             ((1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                               ? 1U
                                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                   ? 1U
                                                   : 0x10U)))))
                        : ((8U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                            ? ((4U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                ? 1U : ((2U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                         ? 1U : ((1U 
                                                  & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                   ? 1U
                                                   : 8U))))
                            : ((4U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                ? ((2U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                    ? 1U : ((1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                             ? 1U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                              ? 1U : 
                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                               ? 2U
                                               : 4U))))
                                : ((2U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                    ? ((1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                        ? 1U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                  ? 4U
                                                  : 2U)))
                                    : ((1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                            ? 1U : 
                                           (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                             ? 2U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                              ? 4U : 
                                             (((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)) 
                                               & (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc))
                                               ? 8U
                                               : ((
                                                   (~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc)))
                                                   ? 0x10U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc) 
                                                    | ((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)) 
                                                       & (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en)
                                                     ? 0x40U
                                                     : 1U)))))))
                                        : 1U)))))));
    } else {
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state = 1U;
    }
}

void Vcsi2_tb_top___024root___act_sequent__TOP__25(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___act_sequent__TOP__25\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long 
        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc))
                       : 0U) >> 0x00000010U)));
    if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long 
            = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc)))
                : 0U);
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short 
            = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc)))
                : 0U);
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long 
            = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc)))
                : 0U);
        if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 0U;
        } else {
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x24U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x27U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2fU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x23U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x22U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x21U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x20U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2eU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2dU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x28U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2aU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x29U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2bU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2cU == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x26U == (0x0000003fU & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 1U;
            }
        }
        if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8) {
            if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8))) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9 = 1U;
            }
        } else {
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9 = 0U;
        }
    } else {
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 0U;
        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9 = 0U;
    }
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short 
        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc))
                       : 0U) >> 0x00000010U)));
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long 
        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc))
                       : 0U) >> 0x00000010U)));
    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld 
        = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
           & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld));
}

void Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf);
void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__0(Vcsi2_tb_top_c_phy_bfm_if* vlSelf);
void Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__1(Vcsi2_tb_top_csi2_axi_write_if* vlSelf);
void Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__0(Vcsi2_tb_top_csi2_rx_status_if* vlSelf);
void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__1(Vcsi2_tb_top_c_phy_bfm_if* vlSelf);
void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__2(Vcsi2_tb_top_c_phy_bfm_if* vlSelf);
void Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__1(Vcsi2_tb_top_csi2_rx_status_if* vlSelf);
extern const VlUnpacked<CData/*0:0*/, 64> Vcsi2_tb_top__ConstPool__TABLE_h8d38eebf_0;

void Vcsi2_tb_top___024root___eval_body__act(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_body__act\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__0
            if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                              & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
                VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem[1U]);
            }
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__1
            if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                              & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
                VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem[1U]);
            }
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__2
            if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                              & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
                VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem[1U]);
            }
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__3
            if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                              & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
                VL_WRITEF_NX("%d\n",1, '#',64,vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem[1U]);
            }
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__4
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awvalid 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awvalid;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__bready 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__bready;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wvalid 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awid 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awid;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awaddr 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awaddr;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awsize 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awsize;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awlen 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awlen;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awburst 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awburst;
        }
        Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__axi_vif));
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__5
            vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin;
            vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin;
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__0((&vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm));
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        Vcsi2_tb_top___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000042ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__7
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__8
            vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state;
        }
    }
    if ((9ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__9
            vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 0U;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__1((&vlSymsp->TOP__csi2_tb_top__DOT__axi_vif));
        Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__status_vif));
        {
            // Inlined CFunc: _act_sequent__TOP__10
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                if (VL_UNLIKELY((vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid))) {
                    vlSelfRef.csi2_tb_top__DOT__dbg_w_count 
                        = ((IData)(1U) + vlSelfRef.csi2_tb_top__DOT__dbg_w_count);
                    VL_WRITEF_NX("[%0t] AXI_W #%0d data=%016h strb=%0h last=%b\n",6, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.csi2_tb_top__DOT__dbg_w_count
                                 , '#',64,vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wdata
                                 , '#',7,(IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wstrb)
                                 , '#',1,vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.wlast);
                }
            } else {
                vlSelfRef.csi2_tb_top__DOT__dbg_w_count = 0U;
            }
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__1((&vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__11
            vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.clk 
                = vlSelfRef.csi2_tb_top__DOT__bfm_clk;
            vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.bfm_clk 
                = vlSelfRef.csi2_tb_top__DOT__bfm_clk;
        }
        Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__2((&vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[1U])) {
        Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__1((&vlSymsp->TOP__csi2_tb_top__DOT__status_vif));
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__12
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_esc) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin) 
                        != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin)))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin)));
                }
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_alp) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin) 
                        != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin)))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin)));
                }
                if (vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awvalid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awvalid = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_start) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awvalid = 1U;
                }
                if (vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt 
                        = ((0x004fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt))
                            ? 0U : (0x000001ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt))));
                }
                if (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.bvalid) 
                     & (IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__bready))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__bready = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__bready = 1U;
                }
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wvalid = 1U;
                } else if (vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wvalid = 0U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awid = 7U;
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awaddr = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awsize = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awlen = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awburst = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awaddr = 0x07000000U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awsize = 3U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awlen = 0x4fU;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awburst = 1U;
                }
                if (((IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) 
                     & (IData)(vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.wlast))) {
                    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vdly__bvalid = 1U;
                } else if (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.bvalid) 
                            & (IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__bready))) {
                    vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vdly__bvalid = 0U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld 
                    = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_empty)) 
                       & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld)) 
                          & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld)) 
                             & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid)) 
                                & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active)))));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awvalid = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__bready = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wvalid = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awid = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awaddr = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awsize = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awlen = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awburst = 0U;
                vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vdly__bvalid = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld = 0U;
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__13
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_esc) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2) 
                        != (0x00001fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin)))))) {
                    vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 
                        = (QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in_esc));
                    vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin;
                    vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 1U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin)));
                }
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_alp) 
                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2) 
                        != (0x00001fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin)))))) {
                    vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 
                        = (QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in_alp));
                    vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin;
                    vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 1U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin)));
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000000042ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__15
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = 0U;
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
                        = (1U & (((((((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc)) 
                                      & (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc)) 
                                     & (~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc))) 
                                    & (~ (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)))) 
                                   & (0x10U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                   ? (0x00000010U | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc))
                                   : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld) 
                                       << 4U) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg))) 
                                 >> 4U));
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
                        = (0x0000000fU & ((((((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc)) 
                                              & (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc)) 
                                             & (~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc))) 
                                            & (~ (0U 
                                                  != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)))) 
                                           & (0x10U 
                                              == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                           ? (0x00000010U 
                                              | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxtriggeresc))
                                           : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg))));
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = 0U;
            }
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__17
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) 
                     & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full)))) {
                    vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in;
                    vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin;
                    vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 1U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin)));
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 = 0U;
            }
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__18
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wdata 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wdata;
            vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wstrb 
                = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wstrb;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active;
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__19
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__20
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9;
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__21
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en;
        }
    }
    if ((((0x0000000000000380ULL & vlSelfRef.__VactTriggered[1U]) 
          | (0x0000000004020000ULL & vlSelfRef.__VactTriggered[2U])) 
         | (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                = ((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs)) 
                   & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs)));
        }
    }
    if ((((0x0000000000000380ULL & vlSelfRef.__VactTriggered[1U]) 
          | (0x0000040000020000ULL & vlSelfRef.__VactTriggered[2U])) 
         | (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                   & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)));
        }
    }
    if ((9ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__22
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__23
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wdata 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg;
                }
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wstrb = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active = 0U;
                } else {
                    if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wstrb = 0x7fU;
                    }
                    if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_start) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wdata = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wstrb = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active = 0U;
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__24
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_tb_top___024root___act_sequent__TOP__25(vlSelf);
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__26
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in 
                    = (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                        & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)))
                        ? (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                            & (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs)))
                            ? (QData)((IData)(((((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs3) 
                                                 << 9U) 
                                                | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs2) 
                                                   << 6U)) 
                                               | (((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs1) 
                                                   << 3U) 
                                                  | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynctypehs0)))))
                            : vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxdatahs)
                        : 0ULL);
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en 
                    = (1U & ((((((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en)) 
                                 & (~ (0x0000000fU 
                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg)))) 
                                & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en))) 
                               & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en))) 
                              & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en))) 
                             & (~ (0x0000000fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg)))));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en = 0U;
            }
        }
    }
    if ((9ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__27
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in 
                    = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid) 
                        & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full)))
                        ? (0x00ffffffffffffffULL & 
                           (0x0100000000000000ULL | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_data))
                        : 0ULL);
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 = 0U;
            }
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__28
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld;
        }
    }
    if ((9ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__29
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en;
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__30
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__31
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8;
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__32
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__33
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld) 
                     & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_empty)))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem
                        [vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin];
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin)));
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld 
                    = ((IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) 
                       & (0x004fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt)));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld = 0U;
            }
        }
    }
    if ((9ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__34
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) 
                   && (1U & (IData)(((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid) 
                                       & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full)))
                                       ? (0x0100000000000000ULL 
                                          | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_data)
                                       : 0ULL) >> 0x00000038U))));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__35
            if (vlSymsp->TOP__csi2_tb_top__DOT__rst_vif.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__36
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_long) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r = 1U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc;
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc = 0xffffU;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc 
                    = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_shrt)
                        ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)
                        : 0xffffU);
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc 
                    = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld)
                        ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)
                        : 0xffffU);
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8 = 1U;
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8 = 0U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_shrt;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc = 0xffffU;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc = 0xffffU;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc = 0xffffU;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld = 0U;
            }
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__37
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.ulpsactivenot;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en 
                    = vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__38
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_data 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_data;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__39
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   && (1U & (IData)(((((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3)) 
                                       & (6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56)))
                                       ? (0x0100000000000000ULL 
                                          | (0x00ffffffffffffffULL 
                                             & vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg8))
                                       : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7) 
                                           & (6U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56)))
                                           ? (0x0100000000000000ULL 
                                              | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg7)
                                           : 0ULL)) 
                                     >> 0x00000038U))));
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_data 
                    = (0x00ffffffffffffffULL & (((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3)) 
                                                 & (6U 
                                                    == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56)))
                                                 ? 
                                                (0x0100000000000000ULL 
                                                 | (0x00ffffffffffffffULL 
                                                    & vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg8))
                                                 : 
                                                (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7) 
                                                  & (6U 
                                                     == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56)))
                                                  ? 
                                                 (0x0100000000000000ULL 
                                                  | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg7)
                                                  : 0ULL)));
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld 
                    = ((((((((((((((((((1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
                                       | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) 
                                      | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) 
                                     | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) 
                                    | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) 
                                   | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) 
                                  | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) 
                                 | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12))) 
                                | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))) 
                               | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) 
                              | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) 
                             | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) 
                            | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) 
                           | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) 
                          | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210))) 
                         | (1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) 
                        & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r))) 
                       & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_data = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__40
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg8 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg8;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__41
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg8 
                            = (((QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data)) 
                                << 0x00000038U) | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg7);
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg8 = 0ULL;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg8 = 0ULL;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__42
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg7 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg7;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__43
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg7 
                            = (((QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data)) 
                                << 0x00000030U) | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg6);
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg7 = 0ULL;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg7 = 0ULL;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__44
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg6 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg6;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__45
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg6 
                            = (((QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data)) 
                                << 0x00000028U) | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg5);
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg6 = 0ULL;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg6 = 0ULL;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__46
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg5 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg5;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__47
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg5 
                            = (((QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg4)));
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg5 = 0ULL;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg5 = 0ULL;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__48
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg4 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg4;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__49
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg4 
                            = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data) 
                                << 0x00000018U) | vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg3);
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg4 = 0U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg4 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__50
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg3 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg3;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__51
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3)) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg3 
                            = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data) 
                                << 0x00000010U) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg2));
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg3 = 0U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg3 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__52
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg2 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg2;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__53
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1) {
                    if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                          & Vcsi2_tb_top__ConstPool__TABLE_h8d38eebf_0
                          [vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg]) 
                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1))) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg2 
                            = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data) 
                                << 8U) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg1));
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg2 = 0U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg2 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__54
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg1 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg1;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__55
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) {
                    if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
                         & Vcsi2_tb_top__ConstPool__TABLE_h8d38eebf_0
                         [vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg])) {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1 = 1U;
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg1 
                            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data;
                    }
                } else {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1 = 0U;
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg1 = 0U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1 = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg1 = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__56
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_data 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__57
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_data 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n)
                    ? (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r)
                    : 0U);
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_vld 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   && (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__58
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__59
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n)
                    ? ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)
                        ? (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en) 
                            & (((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
                                | (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld))) 
                               | (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err_vld))))
                            ? (0x000000ffU & (0x00000100U 
                                              | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp)))
                            : 0U) : 0U) : 0U);
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   && (1U & (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)
                               ? (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en) 
                                   & (((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
                                       | (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld))) 
                                      | (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err_vld))))
                                   ? (0x00000100U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp))
                                   : 0U) : 0U) >> 8U)));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__60
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__61
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err_vld 
                    = (((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err) 
                            | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err)) 
                           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err)) 
                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err)) 
                         | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld)) 
                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err));
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld) {
                    if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))))) {
                        VL_WRITEF_NX("ERROR:FIFO IS EMPTY at time = %0t\n",2, 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    } else {
                        vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp 
                            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM
                            [vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr];
                    }
                }
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) {
                    if (VL_UNLIKELY(((0x0fffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))))) {
                        VL_WRITEF_NX("ERROR:FIFO IS FULL at time = %0t\n",2, 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    } else {
                        vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 
                            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out;
                        vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 
                            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
                        vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__62
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__63
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err 
                    = ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                         & ((2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                            | (0x12U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
                        & (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)))) 
                       & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)));
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld 
                    = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                       & (0U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)));
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out 
                    = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid) 
                        & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r) 
                           & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)))
                        ? (0x000000ffU & (0x00000100U 
                                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)))
                        : 0U);
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out = 0U;
            }
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   && (1U & ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid) 
                               & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r) 
                                  & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)))
                               ? (0x00000100U | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r))
                               : 0U) >> 8U)));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__64
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__65
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data;
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 0U;
                } else if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                            | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 1U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__66
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__67
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data 
                    = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_err)
                        ? 0U : (0x000000ffU & ((((2U 
                                                  == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                ? (0x00000100U 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg)))
                                                : (
                                                   (((3U 
                                                      == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                     & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                    ? 
                                                   (0x00000100U 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                  >> 8U))))
                                                    : 
                                                   ((((4U 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                      & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                     ? 
                                                    (0x00000100U 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                   >> 0x10U))))
                                                     : 
                                                    ((((5U 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                       & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                      ? 
                                                     (0x00000100U 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                    >> 0x18U))))
                                                      : 
                                                     ((((6U 
                                                         == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                        & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                       ? 
                                                      (0x00000100U 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                     >> 0x20U))))
                                                       : 
                                                      ((((7U 
                                                          == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                        & (2U 
                                                           == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                        ? 
                                                       (0x00000100U 
                                                        | (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                      >> 0x28U))))
                                                        : 
                                                       ((((0U 
                                                           == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                          & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                         & (2U 
                                                            == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                         ? 
                                                        (0x00000100U 
                                                         | (0x000000ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                       >> 0x30U))))
                                                         : 
                                                        ((((1U 
                                                            == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                           & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                          & (2U 
                                                             == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                          ? 
                                                         (0x00000100U 
                                                          | (0x000000ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                        >> 0x38U))))
                                                          : 0U))))))))));
                if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 1U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart 
                    = (0x17U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__68
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__69
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   & ((~ ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                          & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))) 
                      & (((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                              | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r)) 
                             & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                                != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg))) 
                            & ((8U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                               | (0x18U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
                           & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                          | (((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                                | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                               & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                                  != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg))) 
                              & ((8U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                 | (0x18U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
                             & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r)))) 
                         | ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                              & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                                 != ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx) 
                                       << 8U) | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx)) 
                                     & (- (IData)(((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                   & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr))))))))) 
                             & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r))) 
                            & (2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr))))));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__70
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__long_pkt_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__71
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
                if ((0x17U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 0U;
                } else if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld) 
                            | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 1U;
                }
                if ((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) 
                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r)) 
                     & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld)))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__long_pkt_vld = 0U;
                } else if (((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld) 
                              | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld)) 
                             | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld)) 
                            | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__long_pkt_vld = 1U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r 
                    = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld;
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__long_pkt_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__72
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__73
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 0U;
                } else if ((0x17U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 1U;
                }
                if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 1U;
                }
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 0U;
            }
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) 
                   && (1U & (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_err)
                               ? 0U : ((((2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                        & (2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                        ? (0x00000100U 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg)))
                                        : ((((3U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                             & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                            & (2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                            ? (0x00000100U 
                                               | (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                             >> 8U))))
                                            : ((((4U 
                                                  == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                 & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                ? (0x00000100U 
                                                   | (0x000000ffU 
                                                      & (IData)(
                                                                (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                 >> 0x10U))))
                                                : (
                                                   (((5U 
                                                      == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                     & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                    ? 
                                                   (0x00000100U 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                  >> 0x18U))))
                                                    : 
                                                   ((((6U 
                                                       == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                      & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                     ? 
                                                    (0x00000100U 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                   >> 0x20U))))
                                                     : 
                                                    ((((7U 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                       & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                      ? 
                                                     (0x00000100U 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                    >> 0x28U))))
                                                      : 
                                                     ((((0U 
                                                         == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                        & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                       ? 
                                                      (0x00000100U 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                     >> 0x30U))))
                                                       : 
                                                      ((((1U 
                                                          == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                         & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                        & (2U 
                                                           == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                        ? 
                                                       (0x00000100U 
                                                        | (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                      >> 0x38U))))
                                                        : 0U))))))))) 
                             >> 8U)));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__74
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_err 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_err;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__75
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld) 
                     & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty)))) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem
                        [vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin];
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin)));
                }
                if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 0U;
                } else if (vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 1U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_err 
                    = ((((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__pkt_en) 
                           & (~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld))) 
                          & (~ (0x0000000fU == (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs)))) 
                         & (((~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc)) 
                             & (~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc))) 
                            & (~ (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc)))) 
                        | ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__pkt_en)) 
                           & (((((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld) 
                                 | (0U != (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalpvalidhs))) 
                                | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidesc)) 
                               | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxlpdtesc)) 
                              | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxulpsesc)))) 
                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg = 0ULL;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_err = 0U;
            }
        }
    }
    if ((((0x0000000000000380ULL & vlSelfRef.__VactTriggered[1U]) 
          | (0x0000040400020000ULL & vlSelfRef.__VactTriggered[2U])) 
         | (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__2
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxactivehs) 
                   & ((0x0000000fU == (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxvalidhs)) 
                      | (0x0000000fU == (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxsynchs))));
        }
    }
    if ((((0x0000000000000380ULL & vlSelfRef.__VactTriggered[1U]) 
          | (0x0000000000007f00ULL & vlSelfRef.__VactTriggered[2U])) 
         | (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__3
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsoths) 
                   | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsotsynchs) 
                      | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.erresc) 
                         | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errsyncesc) 
                            | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontrol) 
                               | ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp0) 
                                  | (IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.errcontentionlp1)))))));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__76
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__pkt_en 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__pkt_en;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop;
            vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld 
                = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld;
        }
    }
    if ((((0x0000000000000380ULL & vlSelfRef.__VactTriggered[1U]) 
          | (0x0000080000007f00ULL & vlSelfRef.__VactTriggered[2U])) 
         | (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__4
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                = ((IData)(vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.stopstate) 
                   | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__77
            if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rst_n) {
                if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg4) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__pkt_en = 0U;
                } else if (vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rx_lane_sts_reg7) {
                    vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__pkt_en = 1U;
                }
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop 
                    = ((0x3fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld)) 
                       & (0U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)));
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld 
                    = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty)) 
                       & (0U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)));
            } else {
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__pkt_en = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop = 0U;
                vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld = 0U;
            }
        }
    }
}

void Vcsi2_tb_top___024root___nba_sequent__TOP__0(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___nba_sequent__TOP__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt;
    csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt = 0;
    CData/*7:0*/ csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long;
    csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    // Body
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_data 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_data;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dstart;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_err;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__pkt_en = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__pkt_en;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_pixel_data 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_pixel_data;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_byte_ctr56;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg1 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg1;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg2 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg2;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg3 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg3;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg4 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg4;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg5 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg5;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg6 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg6;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg7 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg7;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg8 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg8;
    if (vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0) {
        vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM[vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0] 
            = vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0;
    }
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_err;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_err 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_err;
    vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turnrequest 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turnrequest;
    vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turndisable 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__turndisable;
    vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__forcerxmode 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__forcerxmode;
    vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect;
    vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__enable 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__enable;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_bp_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__long_pkt_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
        = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.llp_err_vld 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err_vld;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.llp_err 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_err;
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.lane_err 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_err;
    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.turnrequest 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turnrequest;
    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.turndisable 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__turndisable;
    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.forcerxmode 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__forcerxmode;
    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.rxalp_lpselect 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__rxalp_lpselect;
    vlSymsp->TOP__csi2_tb_top__DOT__phy_bfm.enable 
        = vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__enable;
    if (VL_UNLIKELY((vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld))) {
        vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 1U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 2U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 3U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 4U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 5U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 6U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 7U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
    }
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_bp_vld) 
           & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld1) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld2) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld3) 
                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld4) 
                       | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld5) 
                          | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld6) 
                             | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld7) 
                                | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld8) 
                                   | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld9) 
                                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buff_reg_vld10)))))))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid 
        = ((0x04ffU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
           | ((0x077fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24)) 
              | ((0x059fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666)) 
                 | ((0x01dfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6)) 
                    | ((0x022fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7)) 
                       | ((0x3fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8)) 
                          | ((0x031fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10)) 
                             | ((0x03bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)) 
                                | ((0x045fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)) 
                                   | ((0x063fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20)) 
                                      | ((0x08bfU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28)) 
                                         | ((0x03bfU 
                                             == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208)) 
                                            | ((0x027fU 
                                                == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd)) 
                                               | ((0x04ffU 
                                                   == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228)) 
                                                  | ((0x031fU 
                                                      == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd)) 
                                                     | (0x063fU 
                                                        == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)))))))))))))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld) 
           & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r));
    vlSymsp->TOP__csi2_tb_top__DOT__status_vif.dtype 
        = vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4 
        = ((0x29U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
           | ((0x2dU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
              | (0x26U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld) 
                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld) 
                       | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld) 
                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld)))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld) 
                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld) 
                       | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld) 
                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld)))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld) 
                 | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld) 
                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld) 
                       | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld) 
                          | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld) 
                             | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld))))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                    | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld)))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
           | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld) 
              | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                       | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                          | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                             | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld) 
                                   | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld))))))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
           & ((~ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
                  | (0U == (0x0000001fU & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                           >> 3U))))) 
              & (1U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_long 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
           & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (((1U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                  & (4U >= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) 
                 | ((0x11U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                    & (0x14U >= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))))));
    __VdfgRegularize_h6e95ff9d_0_12 = ((3U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                       | (0x13U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    __VdfgRegularize_h6e95ff9d_0_13 = ((4U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                       | (0x14U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    __VdfgRegularize_h6e95ff9d_0_6 = ((1U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                      | (0x11U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    __VdfgRegularize_h6e95ff9d_0_0 = ((2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                      | (0x12U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6 
        = ((0x23U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld) 
                                                 | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld) 
                                                 | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld) 
                                                    | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld) 
                                                       | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld))));
    __VdfgRegularize_h6e95ff9d_0_17 = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    __VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    __VdfgRegularize_h6e95ff9d_0_16 = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
    __VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld) 
           & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r)) 
              & (IData)(__VdfgRegularize_h6e95ff9d_0_6)));
    __VdfgRegularize_h6e95ff9d_0_19 = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    __VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    __VdfgRegularize_h6e95ff9d_0_18 = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    __VdfgRegularize_h6e95ff9d_0_22 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4 
        = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6) 
           | ((0x2bU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
              | (0x2fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r 
        = ((0x17U != (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r 
        = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25));
    __VdfgRegularize_h6e95ff9d_0_14 = ((0x000000f8U 
                                        & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                           & ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_23))) 
                                              << 3U))) 
                                       | (7U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                                & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_23))))));
    __VdfgRegularize_h6e95ff9d_0_15 = ((0x000000c0U 
                                        & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                           & ((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_22))) 
                                              << 6U))) 
                                       | (0x0000003fU 
                                          & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                             & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_22))))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3 
        = (((0x24U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
            | ((0x28U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
               | ((0x2cU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
                  | (0x27U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))))) 
           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4));
    __VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                                      | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r));
    __VdfgRegularize_h6e95ff9d_0_24 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_vld) 
                                       & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__long_pkt_vld) 
                                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)));
    csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long 
        = (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
            & (IData)(__VdfgRegularize_h6e95ff9d_0_19))
            ? (IData)(__VdfgRegularize_h6e95ff9d_0_14)
            : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_18))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_15)
                : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_17))
                    ? ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_21))))
                    : ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & ((- (IData)(((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_16)))) 
                          & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_20))))))));
    __VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
           & ((~ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
                  | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data) 
                     == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg)))) 
              & (3U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
           & ((~ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
                  | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__rx_lm_byte_data) 
                     == (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                          | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld))
                          ? 0xbfU : (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                      ? 0xcfU : (((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                  & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                                                     | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
                                                        | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
                                                           | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)))))
                                                  ? 0x7fU
                                                  : 
                                                 (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                   ? 0xefU
                                                   : 
                                                  (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                    ? 0x17U
                                                    : 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                     & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                                                        | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld)))
                                                     ? 0x1fU
                                                     : 
                                                    (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                      ? 0x8fU
                                                      : 
                                                     (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                       ? 0xdfU
                                                       : 
                                                      (((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                        ? 0x2fU
                                                        : 
                                                       (0x5fU 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                                                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_0))))))))))))))))) 
              & (2U == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    if (VL_UNLIKELY((vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_long))) {
        vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ (IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 1U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 2U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 3U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 4U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 5U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 6U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_long) 
                      >> 7U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
    }
    vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_shrt 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
           & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (0x14U >= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
            & (IData)(__VdfgRegularize_h6e95ff9d_0_19))
            ? (IData)(__VdfgRegularize_h6e95ff9d_0_14)
            : (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                & (IData)(__VdfgRegularize_h6e95ff9d_0_18))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_15)
                : (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_17))
                    ? ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & (- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_21)))))
                    : ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_16)))) 
                          & (- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_20)))))))));
    if (VL_UNLIKELY((vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__hdr_vld_rx_shrt))) {
        vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
            = vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ (IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 1U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 2U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 3U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 4U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 5U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 6U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx_shrt) 
                      >> 7U)))) {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                              >> 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   >> 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_tb_top__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
    }
}

void Vcsi2_tb_top_csi2_axi_write_if___nba_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf);

void Vcsi2_tb_top___024root___eval_body__nba(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_body__nba\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_tb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rd_dvld;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awaddr 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awaddr;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awsize 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awsize;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wstrb 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wstrb;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awlen 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awlen;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wdata 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wdata;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awid 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awid;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awvalid 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awvalid;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__awburst 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__awburst;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__bready 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__bready;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt;
            vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT____Vcellout__dut__wvalid;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin;
            vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.wlast 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT____Vcellout__dut__wvalid) 
                   & (0x004fU == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__beat_cnt)));
        }
        Vcsi2_tb_top_csi2_axi_write_if___nba_sequent__TOP__csi2_tb_top__DOT__axi_vif__0((&vlSymsp->TOP__csi2_tb_top__DOT__axi_vif));
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_data_in;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1;
            if (vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0) {
                vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem[vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0;
            }
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2) 
                   == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin))));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2;
            if (vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0) {
                vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem[vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0) {
                vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem[vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0;
            }
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2;
            if (vlSelfRef.__VdlySet__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0) {
                vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem[vlSelfRef.__VdlyDim0__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0;
            }
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
        }
    }
    if ((0x0000000000000042ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
                = vlSelfRef.__Vdly__csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
        }
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_empty 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin) 
                   == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin));
        }
    }
    if ((0x0000000000000023ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty 
                = ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin) 
                   == (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin));
        }
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_start 
                = ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_empty)) 
                   & ((~ (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__burst_active)) 
                      & (((0x20U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
                          & (0x24U >= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))) 
                         | (((0x26U <= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg)) 
                             & (0x2fU >= (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__dtype_sts_reg))) 
                            | ((IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld) 
                               | (IData)(vlSelfRef.csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld))))));
        }
    }
}

void Vcsi2_tb_top___024root___timing_ready(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___timing_ready\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h1cc7e3ad__0.ready("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vcsi2_tb_top___024root___timing_resume(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___timing_resume\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1cc7e3ad__0.moveToResumeQueue(
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VtrigSched_h1cc7e3ad__0.resume("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VdynSched.resume();
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcsi2_tb_top___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 4> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

void Vcsi2_tb_top___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

bool Vcsi2_tb_top___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((4U > n));
    return (0U);
}

void Vcsi2_tb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

void Vcsi2_tb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 3> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((3U > n));
}

void Vcsi2_tb_top___024root____VbeforeTrig_h1cc7e3ad__0(Vcsi2_tb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root____VbeforeTrig_h1cc7e3ad__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 3> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hc8ffa771__0;
    __Vtrigprevexpr_hc8ffa771__0 = 0;
    // Body
    __Vtrigprevexpr_hc8ffa771__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hc8ffa771__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hc8ffa771__1)) 
                                  << 8U)));
    vlSelfRef.__Vtrigprevexpr_hc8ffa771__1 = __Vtrigprevexpr_hc8ffa771__0;
    if ((0x0000000000000100ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h1cc7e3ad__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

#ifdef VL_DEBUG
void Vcsi2_tb_top___024root___eval_debug_assertions(Vcsi2_tb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_tb_top___024root___eval_debug_assertions\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
