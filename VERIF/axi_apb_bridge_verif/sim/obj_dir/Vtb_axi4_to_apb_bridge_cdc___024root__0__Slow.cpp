// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_to_apb_bridge_cdc.h for the primary calling header

#include "Vtb_axi4_to_apb_bridge_cdc__pch.h"

void Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_static(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_static\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r;
    vlSelfRef.__Vtrigprevexpr_hb61146a0__1 = (1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
    vlSelfRef.__Vtrigprevexpr_hb611562d__1 = (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
    Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___stl_sequent__TOP__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_stl(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_stl\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_axi4_to_apb_bridge_cdc___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
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
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__stl(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__stl\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__ico(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__ico\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__act(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__act\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__nba\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__obs(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__obs\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__react(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__react\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_final(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_final\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[0U] = 0x30000000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[1U] = 0x30010000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[2U] = 0x30020000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[3U] = 0x30030000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[4U] = 0x30040000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[5U] = 0x30050000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[6U] = 0x30060000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[7U] = 0x30070000U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[0U][(0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a);
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[1U][(0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a);
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[2U][(0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a);
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[3U][(0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a);
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[4U][(0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a)] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a);
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__d = 5U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count = 0U;
    vlSymsp->_vm_contextp__->dumpfile("axi4_to_apb_bridge_cdc.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[0U] = 0ULL;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[1U] = 0ULL;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[2U] = 0ULL;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[3U] = 0ULL;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[0U][0U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[0U][1U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[0U][2U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[1U][0U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[1U][1U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[1U][2U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[2U][0U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[2U][1U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[2U][2U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[3U][0U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[3U][1U] = 0U;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[3U][2U] = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__stl\n"); );
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

extern const VlWide<18>/*575:0*/ Vtb_axi4_to_apb_bridge_cdc__ConstPool__CONST_h634389fd_0;
extern const VlUnpacked<CData/*7:0*/, 9> Vtb_axi4_to_apb_bridge_cdc__ConstPool__TABLE_h7881ea31_0;

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___stl_sequent__TOP__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___stl_sequent__TOP__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID)) 
           & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
        = ((0xfffffff0U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r) 
           + ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
              << 2U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)) 
           & ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)) 
              | (5U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)) 
           & (3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty)) 
           & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)) 
           & ((3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)) 
              | (6U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active 
        = ((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           | (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    __Vtemp_1 = VL_MATCHMASKED_I(16, (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 0x00000010U), Vtb_axi4_to_apb_bridge_cdc__ConstPool__CONST_h634389fd_0);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = Vtb_axi4_to_apb_bridge_cdc__ConstPool__TABLE_h7881ea31_0
        [__Vtemp_1];
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en)))));
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[0U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
            [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
            [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
            [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][2U];
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[0U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] = 0U;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en)
            ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo
           [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr))]
            : 0ULL);
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 4U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 3U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 2U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 7U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 6U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 5U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r) 
           | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
              >> 0x00000020U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[0U] 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[0U];
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[1U] 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[1U];
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[2U] 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[2U];
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[3U] 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[3U];
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                             << 5U)), vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next, (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus 
        = ((((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel) 
               << 3U) | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
                         << 2U)) | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
                                     << 1U) | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel))) 
            << 4U) | ((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel) 
                        << 3U) | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((1U 
                                                 == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                   | ((4U 
                                                       == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                      | ((8U 
                                                          == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                         | ((0x10U 
                                                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                            | ((0x20U 
                                                                == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                               | ((0x40U 
                                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                                  | (0x80U 
                                                                     == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)))))))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA 
        = (((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
             ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                  ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                  : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                      ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                      : ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg
                          : ((0x0cU == (0x000000ffU 
                                        & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg 
                                      & (- (IData)(
                                                   (0x10U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))))
             : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                 ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                      ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg
                      : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg
                          : ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : ((0x0cU == (0x000000ffU 
                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                       ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg
                                       : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                          & (- (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                    & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel))))
                 : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                     ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg
                          : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : ((8U == (0x000000ffU 
                                              & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                       ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg
                                       : ((0x0cU == 
                                           (0x000000ffU 
                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                           ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg
                                           : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                              & (- (IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                        & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel))))
                     : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                         ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata
                         : ((0x10U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                             ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata
                             : ((0x20U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata
                                 : ((0x40U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                     ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata
                                     : vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata))))))) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_axi4_to_apb_bridge_cdc.PCLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_axi4_to_apb_bridge_cdc.PRESETn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_axi4_to_apb_bridge_cdc.ACLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_axi4_to_apb_bridge_cdc.ARESETn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_axi4_to_apb_bridge_cdc.ARESETn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_axi4_to_apb_bridge_cdc.PRESETn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___ctor_var_reset(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___ctor_var_reset\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6311803996125286908ull);
    }
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12618134079623640489ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__PCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16929288741733367090ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3248158861670303462ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__PRESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9094826836096212424ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWID = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17022761251035645269ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWADDR = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2197962766189607059ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4874805745781711657ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1042472716611137161ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11879518707439748965ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4390123603191971040ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13508351962138360600ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8907121257632210530ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10311016012803015608ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__WDATA, __VscopeHash, 12258851723849967928ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10324903281853914040ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__WLAST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2543938097125276390ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11118063978105123590ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4497075005876727556ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARID = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6129190812043147773ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARADDR = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15469456200150063144ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11388816941383911400ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6852262389496203504ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3968720561097422343ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2486055843805624198ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9581673907960131301ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16116416289585758694ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13210507669724844997ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1226689496575344647ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__psel_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11244012997864279562ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7556027652639548566ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4831550797505684385ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1508983732961533008ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16681574816350401726ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7327944714196499500ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 394445160574121212ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 758884504563731768ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3037317310833301405ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13221402364726827884ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6020026167087481839ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__timer_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14007200272462030679ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754863573912069575ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4530837176657072477ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__debug_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15103811864855143793ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2876646642399633674ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17798362212277232523ull);
        }
    }
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7381793045769342852ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14325163765312179064ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9763927442671163854ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__error_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8211046200029263567ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__test_data[__Vi0], __VscopeHash, 16083799710560401323ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__exp_data, __VscopeHash, 1496413896570533535ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11463321244675016839ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6119331803172494488ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1806816475753427459ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13543685321163977527ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12005809210573678729ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1595088512011956224ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14962084492009735020ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 373291368001766850ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882797272482661700ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7269799724357003958ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 866790593481644486ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17970780748971821579ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7263781971553180807ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9499721109077436102ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10620277659114522292ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5055733771856763605ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5177788665697781224ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18285679293632540423ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4493634158856679344ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2505443768884591169ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2922456968999773633ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11744609156177451701ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14543032588514265323ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17810008874004115873ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg, __VscopeHash, 1143952736349814458ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9798256134292829076ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12585980605785649852ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bid_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17100919040522458439ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1401598972839980427ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12503711765050189562ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rid_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 828115448486681105ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r, __VscopeHash, 3093933547751668704ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16083966328948985774ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10156909640941214997ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14382799891843069832ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r, __VscopeHash, 15781641732985830917ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10020197492343475941ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12185962292398186828ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next, __VscopeHash, 12459805810068330828ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10564914687514354638ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15534344973563234918ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16424138046659124025ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_prot_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13043740983634615375ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13357920013515018115ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5618495835182764032ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16947597624576044217ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2061962072073582623ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6801556691971007718ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12848468406617562303ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 430425196089640267ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6473917081593101855ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13851892493110733056ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2919947681084851738ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17896217648958981768ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12561353418872451013ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7058939677829804786ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6452342247558766335ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7345889922325520580ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__waddr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4484916542117825461ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__raddr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8867207263900414305ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8879119054052213913ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4676026312966238631ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7262556382023417685ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1247411594006932012ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11178266790515212368ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1768921096817427437ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__wrap_around = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 248034816767053291ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17358457258444663462ull);
    }
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 614712322766020117ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11655916680532223671ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4926665261328286475ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out, __VscopeHash, 14862664120191306862ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10574661837087033024ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10786175905397338640ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12251708815273917624ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4245943384595576992ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16070061234396598746ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14858392466574696177ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__waddr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13563819706496726034ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__raddr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 656312779347316419ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14309473131583081081ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11017053793195529092ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9323951688438207831ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15995051573478024467ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8936207044387017709ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2191357448001583753ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__wrap_around = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7653867020246132168ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[__Vi0], __VscopeHash, 4858071535880682490ull);
    }
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15019040482393252637ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6210286433866514852ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8886802142311699959ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17498215021056094359ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2873001393938076955ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17204246140123544823ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__status_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6662999160496074901ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559174778597222195ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4714286495021358710ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7957738983387764309ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8277916358008003481ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11433782906759526207ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10515977693197924104ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882033147155310958ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5446221887477872742ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7679942426993699060ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 197644166889757233ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14719809724492340103ull);
    vlSelf->tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11194764505562391174ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 0;
    vlSelf->__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r = 0;
    vlSelf->__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r = 0;
    vlSelf->__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v0 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v1 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v0 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v1 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v3 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v1 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v2 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v5 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v2 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v3 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v7 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v7 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v7 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v3 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v7 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v7 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v4 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v8 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v9 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v8 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v9 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v8 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v9 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v5 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v10 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v11 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v10 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v11 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v10 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v11 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v6 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v12 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v13 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6);
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v12 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v13 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v12 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v13 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v4 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v4 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v8 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v9 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v8 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v9 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v5 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v5 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v10 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v11 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v10 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v11 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v6 = 0;
    vlSelf->__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v6 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v12 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v13 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v12 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v13 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 = 0;
    vlSelf->__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0 = 0;
    vlSelf->__Vtrigprevexpr_hb61146a0__1 = 0;
    vlSelf->__Vtrigprevexpr_hb611562d__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
