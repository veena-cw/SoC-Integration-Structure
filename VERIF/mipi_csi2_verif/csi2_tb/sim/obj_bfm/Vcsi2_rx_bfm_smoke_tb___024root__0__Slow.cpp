// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_static__TOP(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb___024root___timing_ready(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_static(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_static\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__areset_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__rd_rst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__pclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__prst_n__0 = 0U;
    Vcsi2_rx_bfm_smoke_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_static__TOP(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_static__TOP\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__completed = 0U;
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("depth=1024\ndepth=8192\ndepth=8192\ndepth=8192\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 2U;
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_final(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_final\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__stl(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_settle(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_settle\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("csi2_rx_bfm_smoke_tb.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__stl(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__stl\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata 
                                                       != vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0) 
                                                      << 1U) 
                                                     | (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr 
                                                        != vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] csi2_rx_bfm_smoke_tb.dut.csi2_rx_reg_inst.apb_slave_inst.s_paddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] csi2_rx_bfm_smoke_tb.dut.csi2_rx_reg_inst.apb_slave_inst.s_pwdata)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h41d40bef_0;

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___stl_sequent__TOP__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___stl_sequent__TOP__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld 
        = (((0x20U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
            & (0x24U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))) 
           | ((0x26U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              & (0x2fU >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2) 
           == (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)) 
              | (0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs))));
    __Vtableidx3 = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h41d40bef_0
        [__Vtableidx3];
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err 
        = ((~ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
               | (0U == (0x0000001fU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                        >> 3U))))) 
           & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
              & (1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    if (VL_UNLIKELY((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__j = 8U;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 1U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 2U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 3U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 4U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 5U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 6U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data) 
                      >> 7U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc);
        }
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1 
        = ((0x24U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | ((0x28U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              | ((0x2cU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                 | (0x27U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = ((0x2bU 
                                                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                                 | (0x2fU 
                                                    == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (((1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                  & (4U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) 
                 | ((0x11U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                    & (0x14U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4 
        = ((0x29U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | ((0x2dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              | (0x26U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5) 
                       | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6) 
                          | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7) 
                             | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8) 
                                | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9) 
                                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10))))))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid 
        = ((0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
           | ((0x077fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24)) 
              | ((0x059fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666)) 
                 | ((0x01dfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6)) 
                    | ((0x022fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7)) 
                       | ((0x3fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8)) 
                          | ((0x031fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10)) 
                             | ((0x03bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)) 
                                | ((0x045fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)) 
                                   | ((0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20)) 
                                      | ((0x08bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28)) 
                                         | ((0x03bfU 
                                             == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208)) 
                                            | ((0x027fU 
                                                == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd)) 
                                               | ((0x04ffU 
                                                   == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228)) 
                                                  | ((0x031fU 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd)) 
                                                     | (0x063fU 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)))))))))))))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsoths) 
           | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsotsynchs) 
              | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.erresc) 
                 | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsyncesc) 
                    | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontrol) 
                       | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp1) 
                          | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp0)))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld)))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld) 
                       | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld) 
                          | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld)))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld) 
                       | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld) 
                          | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld)))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                       | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                          | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                             | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld) 
                                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld))))))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld) 
                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld) 
           | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld) 
              | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld) 
                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld) 
                       | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld) 
                          | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld) 
                             | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld))))))));
    __VdfgRegularize_h6e95ff9d_0_14 = ((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                       | (0x13U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    __VdfgRegularize_h6e95ff9d_0_15 = ((4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                       | (0x14U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    __VdfgRegularize_h6e95ff9d_0_7 = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                      | (0x11U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((2U 
                                                 == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                                | (0x12U 
                                                   == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6 
        = ((0x23U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld) 
                                                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld) 
                                                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld) 
                                                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld) 
                                                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld));
    __VdfgRegularize_h6e95ff9d_0_19 = ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    __VdfgRegularize_h6e95ff9d_0_18 = ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r)) 
              & (IData)(__VdfgRegularize_h6e95ff9d_0_7)));
    __VdfgRegularize_h6e95ff9d_0_20 = ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r 
        = ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r 
        = ((0x17U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10));
    __VdfgRegularize_h6e95ff9d_0_16 = ((0x000000f8U 
                                        & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                           & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))) 
                                              << 3U))) 
                                       | (7U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                                & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))))));
    __VdfgRegularize_h6e95ff9d_0_17 = ((0x000000c0U 
                                        & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                           & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                              << 6U))) 
                                       | (0x0000003fU 
                                          & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1) 
           | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) 
                                                 & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                                                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                                                | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx 
        = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
            & (IData)(__VdfgRegularize_h6e95ff9d_0_20))
            ? (IData)(__VdfgRegularize_h6e95ff9d_0_16)
            : (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_17)
                : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_19))
                    ? ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))))
                    : ((- (IData)(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_18)))) 
                       & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                          & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err 
        = ((~ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
               | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data) 
                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg)))) 
           & ((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err 
        = ((~ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
               | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data) 
                  == (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld))
                       ? 0xbfU : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                   ? 0xcfU : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                                                  | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
                                                     | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
                                                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)))))
                                               ? 0x7fU
                                               : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                   ? 0xefU
                                                   : 
                                                  (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                    ? 0x17U
                                                    : 
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                                                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld)))
                                                     ? 0x1fU
                                                     : 
                                                    (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                      ? 0x8fU
                                                      : 
                                                     (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                       ? 0xdfU
                                                       : 
                                                      (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                        ? 0x2fU
                                                        : 
                                                       (0x5fU 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))))))))))))))) 
           & ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)));
    __VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8));
    if (VL_UNLIKELY((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__j = 8U;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 1U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 2U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 3U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 4U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 5U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 6U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx) 
                      >> 7U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc);
        }
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (0x14U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
            & (IData)(__VdfgRegularize_h6e95ff9d_0_20))
            ? (IData)(__VdfgRegularize_h6e95ff9d_0_16)
            : (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_17)
                : (((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_19))
                    ? ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                       & (- (IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))))
                    : ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_18)))) 
                       & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                          & (- (IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)))))))));
    if (VL_UNLIKELY((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__j = 8U;
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx))
                     , '#',1,(1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 1U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 1U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 2U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 2U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 3U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 3U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 4U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 4U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 5U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 5U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 6U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 6U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
        VL_WRITEF_NX("hdr_data_rx = %0h\nreg_crc[0] = %0h\n",2
                     , '#',1,(1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                                    >> 7U)), '#',1,
                     (1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)));
        if ((1U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc) 
                   ^ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx) 
                      >> 7U)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U));
            VL_WRITEF_NX("reg_crc1 = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc 
                = VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc), 1U);
            VL_WRITEF_NX("reg_crc = %0h\n",1, '#',16,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc);
        }
    }
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1 
        = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state))
            ? 0U : vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)
            ? vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1
            : 0U);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_hf0dbc24a_0;

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr_h6e95ff9d_0_1 
        = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state))
            ? 0U : vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)
            ? vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr_h6e95ff9d_0_1
            : 0U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__pslverr 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_slve_err) 
           | ((0U != vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr) 
              & ((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state)) 
                 | (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state)))));
    __Vtableidx5 = ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pready) 
                      << 4U) | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__pslverr) 
                                << 3U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_next_state 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_hf0dbc24a_0
        [__Vtableidx5];
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root____Vm_traceActivitySetAll(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);
void Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_stl(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_stl\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcsi2_rx_bfm_smoke_tb___024root____Vm_traceActivitySetAll(vlSelf);
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vcsi2_rx_bfm_smoke_tb___024root___stl_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__stl(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__stl\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcsi2_rx_bfm_smoke_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] csi2_rx_bfm_smoke_tb.dut.csi2_rx_reg_inst.apb_slave_inst.s_paddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] csi2_rx_bfm_smoke_tb.dut.csi2_rx_reg_inst.apb_slave_inst.s_pwdata)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge csi2_rx_bfm_smoke_tb.aclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge csi2_rx_bfm_smoke_tb.areset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge csi2_rx_bfm_smoke_tb.bfm_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( csi2_rx_bfm_smoke_tb.dut.lane_merging_rx_inst.async_fifo_binary_inst.mem)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge csi2_rx_bfm_smoke_tb.rd_rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( csi2_rx_bfm_smoke_tb.dut.axim_inst.async_fifo_binary_axi_inst.mem)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( csi2_rx_bfm_smoke_tb.dut.axim_inst.async_fifo_binary_axi_inst_alp.mem)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( csi2_rx_bfm_smoke_tb.dut.axim_inst.async_fifo_binary_axi_inst_esc.mem)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge csi2_rx_bfm_smoke_tb.pclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(negedge csi2_rx_bfm_smoke_tb.prst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge csi2_rx_bfm_smoke_tb.bfm_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(negedge csi2_rx_bfm_smoke_tb.aclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root____Vm_traceActivitySetAll(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[10U] = 1U;
    vlSelfRef.__Vm_traceActivity[11U] = 1U;
    vlSelfRef.__Vm_traceActivity[12U] = 1U;
    vlSelfRef.__Vm_traceActivity[13U] = 1U;
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___ctor_var_reset\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11689978690926659447ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13709923827318097464ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3294867748023238293ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__wstrb = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6107400783176503776ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15269909199836672039ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14410052578494007792ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11094497302256804696ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9408803607275498752ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14053888953190119622ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6473305850919996072ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6911331550547851570ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6706585423762331455ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7115603192378522989ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__awregion = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17592887264756656437ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8168529749896824366ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2808753291648895908ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__alpwakestate = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__rxdatawidthhs = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__rxalp_lpselect = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__enable = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__forcerxmode = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turndisable = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turnrequest = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__packet_bytes.atDefault() = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__packet_words.atDefault() = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14193257089938242048ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12734133792230197178ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awuser = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3515152056581037890ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15243369942751048604ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__wuser = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5372197359833176553ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340730174434288993ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13386275562406746723ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15541176945684031454ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6678155343959806868ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7137324181346874864ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3322838330624327676ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11031242008893649116ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2823416126608637198ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14505008664052584997ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11675641107747244252ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2170959085906474628ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299386652901807245ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_sts = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4027640294855445220ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 9613575328882358897ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6287620781698820985ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17060058132819811967ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3816164610141459690ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9802616742765935596ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16113980587817374845ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4878328173840521382ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13852518008040249165ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 185690488884776602ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12414192214317282825ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11490660876509732299ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11854548836038129670ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7 = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10596917399074390930ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1846507792564104575ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9, __VscopeHash, 14075009517996525491ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10, __VscopeHash, 840791042251264996ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2509006002108622588ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15788929976727510314ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4645574012586642547ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12776336204835681056ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18267535879139388807ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12045558906676254210ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11065663180149601643ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12629465726841833025ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16175953281191087257ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__enable_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3405041887674595660ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxerrcalhs_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4895615354181238767ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxcalibrationformat_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13638310429309390145ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16447855161732584512ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8593931046642551109ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16320529079079574038ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14368481406381897324ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5294249769776148844ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109017501814766795ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10596210943093410204ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16710844703976437858ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6742967664185074682ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17835328668511001646ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18208383879518063167ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_rd_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4463144311674591256ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4558173831238621689ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1791931230179110147ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313478855493646957ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__empty_vld = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6390882632873454765ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10224421628199414865ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8072186135747380656ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9050594103657696124ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4436062164715931773ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_sm_sts = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17823363008365772119ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1930776338740631839ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_next_state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13841113502728907779ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13429658498995658791ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2663174912291839428ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6117342186335477219ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13932229048838875269ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17779944500271755629ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2643843627134094136ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxactivehs_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8364068583075152432ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15684338009277082009ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5993271668171713236ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6470666884638002958ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10729411371041698425ull);
    }
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9144664064113836722ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7939697612049099070ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5087276990013507181ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3465860421532227744ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15215022148759784934ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18109234044206847398ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15879356150773988102ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 21552044390476507ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4234950708245219109ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1295263090531022295ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14548109018653489429ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1805375251503220624ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16910561665539374798ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466759460584975476ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15608113323337946101ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1174950569931357875ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15782761644217768352ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14963710067813375186ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4026032032359684399ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8264154456638297023ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152926566207044889ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3632577311798242417ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7033630110790415698ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13173311529716233641ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17795139555059966561ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18156992238482381016ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9669280355364550879ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14624400069737344075ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13747364452819121053ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3637737529280414909ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12097930178773865364ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12887437708011639182ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 204741198544122512ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15166278518832875916ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6895986025830584198ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6035974615184436055ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218409341103835585ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15333743975918630631ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14483572517782554116ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15677391782152039506ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15547046163743354552ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17941190639575743334ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9498691364514336762ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16740814272751085607ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16483110021110191854ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12850426464920427640ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18124933736002864083ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1456860825390736019ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340685788711076401ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8362572829940517405ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11600722191226199640ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5966833401107730438ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15921146391004117682ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8845001326211273592ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2124797213942063292ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17643632020579378574ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13255958685217821610ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1912447654463317008ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4353815629844430476ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4753739075011650060ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1129896168018448692ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262852409803979106ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10636908680295636360ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15584052334208655526ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13546644298951603477ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18308079373094320746ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8708444469812276944ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12452882541836914179ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14795226007797721213ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9898270209481295249ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5305743018667470825ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1972778918315252475ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6416312053950216446ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17423547502036256895ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9004179265303113685ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8423789474200906076ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9138720841547420216ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10266488526593572260ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10456941395736349169ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6362009151073570946ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16187334149045337311ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1798817019538111314ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16869095482808327091ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9090283492194345320ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4033826780565873135ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2908491975094406551ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13788530952607688764ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14690608691267264878ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11880940616893739959ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4195420872755907802ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11754312315892709974ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9855905404702917673ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11728238276405383648ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2166816762722580182ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11434454561093508013ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_out_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2371595361260050902ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1050820442376685689ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7009628263652013889ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1456772806149277348ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2441583063064921206ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16408732470524521002ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 902097465486297687ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12248702619882628024ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6386935335848050239ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14111419640470254222ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15203161560741508500ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5921812129141642290ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11164447175816039236ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18388087258683213599ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10170316874437369086ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18229722355320504448ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2362007403668027065ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11804881931802295670ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11664548074789092816ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9543679812484020006ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17607335510580181325ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2108063408048424928ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2329312783417448783ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT____Vcellout__llp_sync_fifo_inst__FIFO_Status_out = 0;
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12707953125137250556ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__over_flow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 267689144703087148ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9294157932775723820ull);
    }
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12548075638091735523ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7828204445429529052ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10967755830692742001ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__data_in_tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2728918102108164549ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16864200505209968129ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11464930090335634564ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2606299645362438977ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13832523643573346802ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__aligned_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4811711875337173157ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8136272741945388297ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14566338094148398424ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357716268139011758ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9593977256594577322ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9771178748936398938ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2299311177860070995ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__aligned_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12078938742877074516ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17834063247281944675ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11915084636720722338ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2022413412689108782ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18086355560646074983ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__aligned_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16108658316282121817ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16018610516109894332ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8111305541627035152ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11779059505557906321ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10957997351509181889ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15475311054606241001ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4913111846728065561ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3058777459151094058ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__byte_data_vld_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13636210899138758090ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld6_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4616076007621667784ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7955351059877602791ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9124607050032430015ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9808040476637025884ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16900999054488311324ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15058547037929221040ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10863360990455132549ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16630133280992917311ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9990971861341063967ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__rx_byte_ctr48 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 150483311350610225ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__data_type_rx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3776570543728987579ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__data_type_rx_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14776113283906430190ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__pixel_dvalid_stop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8683578007567823500ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__bp_data_in = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10948916280679697340ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__bp_rd_data = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 12003494293309933754ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17827017920362639817ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11533602045788902826ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_dvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11839817278358580998ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848505755629963289ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8626347439878589737ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6122397370924044410ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8479499875482780048ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_empty_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14403902154386119600ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axim_stats = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 58642109863405510ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axim_status = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12587055820977807849ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__wready_wait_ctr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16154928421123589693ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_esc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18354580526048715581ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_esc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 498749538558320403ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_alp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1149302742942949945ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_alp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13787709471161366496ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9508811967094505833ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9945688045481994774ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_width = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 11910574207879891071ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16473551476629475754ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in_alp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14107616082694415937ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in_esc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13908434716723275799ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5351791730107583646ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11803143654109165975ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4955974744117060075ull);
    }
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1909742263514173843ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11771851148984507096ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10175158579096263210ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4885625700324534529ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1816114294340795906ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16631103341052256938ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 9940586645875418558ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13554487285474174857ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5349091153697584535ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 3825218924504497730ull);
    }
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1200107001176555733ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8690834003826277619ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11030461914393124149ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5237000914391357612ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 746678473473501707ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3842524856072099618ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_data_reg = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10641204591522669584ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16658061848568570762ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6767894389630057372ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 149655549144309943ull);
    }
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7632224425352505428ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14391650669793585042ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11904848792924664366ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 531005892319543971ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7883491261032255893ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3623476059919696077ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_data_reg = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 8786062781056195061ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__rxalpnibble_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13757698775937577552ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__rxalpcode_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10629494191726323767ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__rxerrcalhs_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5399537310129947169ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__rxcalibrationformat_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5101024868603784298ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10704513080494697311ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_slve_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139091643504039118ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_addr_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 553071301407560593ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwrite_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9910810255318203385ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2011908709927908884ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14366461953463562638ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17589268857640733881ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__cxs_fdi_bridge_cfg_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11421733862696745101ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__cxs_fdi_bridge_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17090192975785955961ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_addr_range = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17370286829785806133ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13257327771706082687ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12183616224991639030ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__paddr_vld = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15606953813962518509ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwdata_vld = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8099743327614391440ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5488449570818895083ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2009274854115073308ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6834601416976899394ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_rx_err_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7587921336316199209ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__dtype_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6627791793242371671ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__axim_rsp_sts_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6250419586840603429ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10987938121587963034ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025725453438240169ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8765753563597117266ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11904205840219966401ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2127861530713452356ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10721011718923388276ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2716209630190127994ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8890492450768887047ull);
    vlSelf->csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18056483151706934561ull);
    vlSelf->__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin = 0;
    vlSelf->__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin = 0;
    vlSelf->__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__areset_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__rd_rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__pclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__prst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
