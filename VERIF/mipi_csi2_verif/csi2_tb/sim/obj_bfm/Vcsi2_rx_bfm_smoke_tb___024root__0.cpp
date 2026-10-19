// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__2(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__3(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__4(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___eval_initial__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);

void Vcsi2_rx_bfm_smoke_tb___024root___eval_initial(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___eval_initial__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
}

void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h0bfc498f__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3;
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4;
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5;
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index = 0;
    IData/*31:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base = 0;
    QData/*63:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc = 0;
    CData/*5:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__data_type;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__data_type = 0;
    CData/*7:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_low;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_low = 0;
    CData/*7:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_high;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_high = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_2__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_2__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_1__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_1__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_0__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_0__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc = 0;
    CData/*5:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__data_type;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__data_type = 0;
    CData/*7:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_low;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_low = 0;
    CData/*7:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_high;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_high = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_2__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_2__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_1__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_1__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_0__crc16_byte;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_0__crc16_byte = 0;
    SData/*15:0*/ __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__previous_crc = 0;
    SData/*15:0*/ __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc = 0;
    VlQueue<QData/*63:0*/> __Vtask_transfer_1_packet__12__packet_words;
    __Vtask_transfer_1_packet__12__packet_words.atDefault() = 0;
    CData/*2:0*/ __Vtask_transfer_1_packet__12__send_sync_type;
    __Vtask_transfer_1_packet__12__send_sync_type = 0;
    CData/*0:0*/ __Vtask_transfer_1_packet__12__send_eot;
    __Vtask_transfer_1_packet__12__send_eot = 0;
    CData/*0:0*/ __Vtask_transfer_1_packet__12__completed;
    __Vtask_transfer_1_packet__12__completed = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__35__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__35__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->_vm_contextp__->dumpfile("csi2_rx_bfm_smoke.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n = 0U;
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                    "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
        co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                             "csi2_rx_bfm_smoke_tb.sv", 
                                                             314);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n = 1U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n = 1U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n = 1U;
    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n = 1U;
    if (VL_TESTPLUSARGS_I("SPEC_SYNC"s)) {
        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_sync_workaround = 0U;
    }
    if (VL_TESTPLUSARGS_I("SPEC_ULPS_POLARITY"s)) {
        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround = 0U;
    }
    if (VL_TESTPLUSARGS_I("SPEC_EOT"s)) {
        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_eot_workaround = 0U;
    }
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                    "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
        co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                             "csi2_rx_bfm_smoke_tb.sv", 
                                                             330);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc = 0;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.clear();
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_words.clear();
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_high = 1U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_low = 0x17U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__data_type = 0x29U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__previous_crc = 0xffffU;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value = 0U;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_0__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__2__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_0__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__data_type;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_1__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__3__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_1__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_low;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_2__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__4__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1____VlefCall_2__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_high;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__5__Vfuncout;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__data_type);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_low);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__word_count_high);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & (IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & ((IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__1__header_crc) 
                                                                    >> 8U)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_high = 1U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_low = 0x17U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__data_type = 0x29U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__previous_crc = 0xffffU;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value = 0U;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_0__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__7__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_0__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__data_type;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_1__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__8__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_1__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_low;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_2__crc16_byte 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__9__Vfuncout;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__previous_crc 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6____VlefCall_2__crc16_byte;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value 
        = __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_high;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__Vfuncout = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc = 0;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__previous_crc;
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value)))
            ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc 
        = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc) 
                  ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__byte_value) 
                     >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U))
            : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc), 1U));
    __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__Vfuncout 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__crc;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc 
        = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__10__Vfuncout;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__data_type);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_low);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__word_count_high);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & (IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & ((IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__add_rtl_header__6__header_crc) 
                                                                    >> 8U)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0xb8U);
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc = 0xffffU;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index = 0U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index = 0U;
    while (VL_GTS_III(32, 0x0000022eU, __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index)) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                    (0x000000ffU 
                                                                     & ((IData)(0x10U) 
                                                                        + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index)));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__previous_crc 
            = __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc;
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value 
            = (0x000000ffU & ((IData)(0x10U) + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__Vfuncout = 0;
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc = 0;
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__previous_crc;
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value)))
                ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 1U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 2U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 3U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 4U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 5U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 6U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc 
            = ((1U & ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc) 
                      ^ ((IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__byte_value) 
                         >> 7U))) ? (0x8408U ^ VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U))
                : VL_SHIFTR_III(16,16,32, (IData)(__Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc), 1U));
        __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__Vfuncout 
            = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__crc;
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc 
            = __Vfunc_csi2_rx_bfm_smoke_tb__DOT__crc16_byte__11__Vfuncout;
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index 
            = ((IData)(1U) + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk2__DOT__index);
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & (IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(
                                                                (0x000000ffU 
                                                                 & ((IData)(__Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__payload_crc) 
                                                                    >> 8U)));
    while ((0U != VL_MODDIVS_III(32, vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.size(), (IData)(8U)))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.push_back(0U);
    }
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base = 0U;
    __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base = 0U;
    while (VL_LTS_III(32, __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base, vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.size())) {
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word = 0;
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word = 0ULL;
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word 
            = ((0xffffffffffff0000ULL & __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word) 
               | (IData)((IData)(((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base)) 
                                   << 8U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(__Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base)))));
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word 
            = ((0xffffffff0000ffffULL & __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word) 
               | ((QData)((IData)(((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(3U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base)) 
                                    << 8U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(2U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base))))) 
                  << 0x00000010U));
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word 
            = ((0xffff0000ffffffffULL & __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word) 
               | ((QData)((IData)(((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(5U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base)) 
                                    << 8U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(4U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base))))) 
                  << 0x00000020U));
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word 
            = ((0x0000ffffffffffffULL & __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word) 
               | ((QData)((IData)(((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(7U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base)) 
                                    << 8U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_bytes.at(
                                                                                ((IData)(6U) 
                                                                                + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base))))) 
                  << 0x00000030U));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_words.push_back(__Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__unnamedblk4__DOT__packed_word);
        __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base 
            = ((IData)(8U) + __Vtask_csi2_rx_bfm_smoke_tb__DOT__build_current_rtl_raw7_packet__0__unnamedblk3__DOT__base);
    }
    __Vtask_transfer_1_packet__12__send_eot = 1U;
    __Vtask_transfer_1_packet__12__send_sync_type = 3U;
    __Vtask_transfer_1_packet__12__packet_words = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__packet_words;
    vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0 
        = VL_NEW(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1, vlSymsp);
    VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 542)->__PVT__send_sync_type 
        = __Vtask_transfer_1_packet__12__send_sync_type;
    VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 541)->__PVT__packet_words 
        = __Vtask_transfer_1_packet__12__packet_words;
    VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 543)->__PVT__send_eot 
        = __Vtask_transfer_1_packet__12__send_eot;
    {
        __Vtask_transfer_1_packet__12__completed = 0U;
        VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 546)->__PVT__started = 0U;
        VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 547)->__PVT__compl = 0U;
        __Vtask_transfer_1_packet__12__completed = 0U;
        VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 550)->__PVT__compl = 0U;
        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 0U;
        if (VL_UNLIKELY(((0U == VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 553)
                          ->__PVT__packet_words.size())))) {
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 3U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:555: Assertion failed in %m: C-PHY BFM: empty packet queue\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.transfer_1_packet", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 555, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))))) {
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:561: Assertion failed in %m: C-PHY BFM: packet requested during reset\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.transfer_1_packet", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 561, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 4U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:567: Assertion failed in %m: C-PHY BFM: packet requested while state=%0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.transfer_1_packet", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 567, "");
            goto __Vlabel0;
        }
        {
            VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "c_phy_bfm_if.sv", 
                                          571);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlProcess->disableFork();
        __Vtask_transfer_1_packet__12__completed = VL_NULL_CHECK(vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 612)
            ->__PVT__compl;
        if ((1U & (~ (IData)(__Vtask_transfer_1_packet__12__completed)))) {
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 1U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
            __Vfunc_normal_ulpsactivenot_value__35__Vfuncout = 0;
            __Vfunc_normal_ulpsactivenot_value__35__Vfuncout 
                = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                = __Vfunc_normal_ulpsactivenot_value__35__Vfuncout;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationprehs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationformat = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxerrcalhs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble0 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble1 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble2 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble3 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdataesc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsoths = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsotsynchs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.erresc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsyncesc = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontrol = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp0 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp1 = 0U;
        }
        __Vlabel0: ;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__completed 
        = __Vtask_transfer_1_packet__12__completed;
    VL_WRITEF_NX("RX state=%02h\n",1, '#',7,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__completed)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: csi2_rx_bfm_smoke_tb.sv:338: Assertion failed in %m: BFM transfer failed, status=%0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.smoke_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status));
        VL_STOP_MT("csi2_rx_bfm_smoke_tb.sv", 338, "", false);
    }
    csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x00000bb8U;
    while (VL_LTS_III(32, 0U, csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h0bfc498f__0(vlSelf, 
                                                                    "@(negedge csi2_rx_bfm_smoke_tb.aclk)");
        co_await vlSelfRef.__VtrigSched_h0bfc498f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge csi2_rx_bfm_smoke_tb.aclk)", 
                                                             "csi2_rx_bfm_smoke_tb.sv", 
                                                             340);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("BFM state=%0d status=%0d AXI write beats=%0d lane_err=%b llp_err=%b dtype=0x%h\n",6
                 , '#',4,vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state
                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status)
                 , '#',32,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats
                 , '#',1,(IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err)
                 , '#',1,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld
                 , '#',6,(IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg));
    if (VL_UNLIKELY(((0U == vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats)))) {
        VL_WRITEF_NX("[%0t] %%Error: csi2_rx_bfm_smoke_tb.sv:349: Assertion failed in %m: BFM/DUT integration produced no AXI write data\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.smoke_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("csi2_rx_bfm_smoke_tb.sv", 349, "");
    }
    vlProcess->disableFork();
    VL_FINISH_MT("csi2_rx_bfm_smoke_tb.sv", 351, "");
    vlProcess->state(VlProcess::FINISHED);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h190cc700__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h190cc700__0(vlSelf, 
                                                                "@(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)");
    co_await vlSelfRef.__VtrigSched_h190cc700__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)", 
                                                         "c_phy_bfm_if.sv", 
                                                         604);
    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
    __Vfork_1__sync.done("c_phy_bfm_if.sv", 603);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1> __Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0;
    IData/*31:0*/ __Vtask___VforkTask_0__14__unnamedblk2__DOT__index;
    __Vtask___VforkTask_0__14__unnamedblk2__DOT__index = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__14__unnamedblk2__DOT__index__Vloopsize;
    __Vtask___VforkTask_0__14__unnamedblk2__DOT__index__Vloopsize = 0;
    CData/*0:0*/ __Vtask_start_hs__15__started;
    __Vtask_start_hs__15__started = 0;
    CData/*0:0*/ __Vtask_start_hs__15__enable_seen;
    __Vtask_start_hs__15__enable_seen = 0;
    CData/*0:0*/ __Vtask_start_hs__15__prepared;
    __Vtask_start_hs__15__prepared = 0;
    CData/*0:0*/ __Vtask_start_hs__15__preamble_done;
    __Vtask_start_hs__15__preamble_done = 0;
    CData/*0:0*/ __Vtask_wait_for_rx_enable__16__enable_seen;
    __Vtask_wait_for_rx_enable__16__enable_seen = 0;
    IData/*31:0*/ __Vtask_wait_for_rx_enable__16__timeout_cycles;
    __Vtask_wait_for_rx_enable__16__timeout_cycles = 0;
    IData/*31:0*/ __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle;
    __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle = 0;
    CData/*0:0*/ __Vtask_drive_prepare_and_settle__17__prepared;
    __Vtask_drive_prepare_and_settle__17__prepared = 0;
    IData/*31:0*/ __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__18__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__18__Vfuncout = 0;
    CData/*0:0*/ __Vtask_drive_normal_preamble__20__preamble_done;
    __Vtask_drive_normal_preamble__20__preamble_done = 0;
    IData/*31:0*/ __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__21__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__21__Vfuncout = 0;
    CData/*2:0*/ __Vtask_drive_sync__23__sync_type;
    __Vtask_drive_sync__23__sync_type = 0;
    CData/*0:0*/ __Vtask_drive_sync__23__initial_sync;
    __Vtask_drive_sync__23__initial_sync = 0;
    CData/*3:0*/ __Vtask_drive_sync__23__segment_mask;
    __Vtask_drive_sync__23__segment_mask = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__24__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__24__Vfuncout = 0;
    QData/*63:0*/ __Vtask_drive_hs_word__25__data_word;
    __Vtask_drive_hs_word__25__data_word = 0;
    CData/*0:0*/ __Vtask_drive_hs_word__25__last_word;
    __Vtask_drive_hs_word__25__last_word = 0;
    CData/*3:0*/ __Vtask_drive_hs_word__25__segment_mask;
    __Vtask_drive_hs_word__25__segment_mask = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__26__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__26__Vfuncout = 0;
    IData/*31:0*/ __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__28__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__28__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__30__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__30__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0 
        = vlSelfRef.__Vtask_transfer_1_packet__12____VDynScope_transfer_1_packet_0;
    __Vtask___VforkTask_0__14__unnamedblk2__DOT__index = 0U;
    __Vtask___VforkTask_0__14__unnamedblk2__DOT__index__Vloopsize = 0;
    {
        {
            __Vtask_start_hs__15__started = 0U;
            __Vtask_start_hs__15__enable_seen = 0U;
            __Vtask_start_hs__15__prepared = 0U;
            __Vtask_start_hs__15__preamble_done = 0U;
            __Vtask_start_hs__15__started = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 0U;
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:316: Assertion failed in %m: C-PHY BFM: HS start requested during reset\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.start_hs", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("c_phy_bfm_if.sv", 316, "");
                goto __Vlabel1;
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 4U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:323: Assertion failed in %m: C-PHY BFM: HS start requested while state=%0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.start_hs", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                VL_STOP_MT("c_phy_bfm_if.sv", 323, "");
                goto __Vlabel1;
            }
            __Vtask_wait_for_rx_enable__16__timeout_cycles = 0x00000064U;
            {
                __Vtask_wait_for_rx_enable__16__enable_seen = 0U;
                __Vtask_wait_for_rx_enable__16__enable_seen = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 1U;
                __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle = 0U;
                __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle = 0U;
                while ((__Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle 
                        < __Vtask_wait_for_rx_enable__16__timeout_cycles)) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                        goto __Vlabel2;
                    }
                    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__enable) {
                        __Vtask_wait_for_rx_enable__16__enable_seen = 1U;
                        goto __Vlabel2;
                    }
                    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                                "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                    co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                         vlProcess, 
                                                                         "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                         "c_phy_bfm_if.sv", 
                                                                         233);
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle 
                        = ((IData)(1U) + __Vtask_wait_for_rx_enable__16__unnamedblk1__DOT__cycle);
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 2U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:237: Assertion failed in %m: C-PHY BFM: RX enable timeout after %0d cycles\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.wait_for_rx_enable", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_wait_for_rx_enable__16__timeout_cycles);
                VL_STOP_MT("c_phy_bfm_if.sv", 237, "");
                __Vlabel2: ;
            }
            __Vtask_start_hs__15__enable_seen = __Vtask_wait_for_rx_enable__16__enable_seen;
            if ((1U & (~ (IData)(__Vtask_start_hs__15__enable_seen)))) {
                goto __Vlabel1;
            }
            __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0 = 0;
            {
                __Vtask_drive_prepare_and_settle__17__prepared = 0U;
                __Vtask_drive_prepare_and_settle__17__prepared = 0U;
                if (VL_UNLIKELY(((1U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:245: Assertion failed in %m: C-PHY BFM: prepare called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_prepare_and_settle", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                    VL_STOP_MT("c_phy_bfm_if.sv", 245, "");
                    goto __Vlabel3;
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 2U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                __Vfunc_normal_ulpsactivenot_value__18__Vfuncout = 0;
                __Vfunc_normal_ulpsactivenot_value__18__Vfuncout 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                    = __Vfunc_normal_ulpsactivenot_value__18__Vfuncout;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 3U;
                __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0 = 4U;
                while (VL_LTS_III(32, 0U, __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0)) {
                    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                                "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                    co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                         vlProcess, 
                                                                         "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                         "c_phy_bfm_if.sv", 
                                                                         261);
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                        goto __Vlabel3;
                    }
                    __Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0 
                        = (__Vtask_drive_prepare_and_settle__17__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 4U;
                __Vtask_drive_prepare_and_settle__17__prepared = 1U;
                __Vlabel3: ;
            }
            __Vtask_start_hs__15__prepared = __Vtask_drive_prepare_and_settle__17__prepared;
            if ((1U & (~ (IData)(__Vtask_start_hs__15__prepared)))) {
                goto __Vlabel1;
            }
            __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1 = 0;
            {
                __Vtask_drive_normal_preamble__20__preamble_done = 0U;
                __Vtask_drive_normal_preamble__20__preamble_done = 0U;
                if (VL_UNLIKELY(((4U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:279: Assertion failed in %m: C-PHY BFM: preamble called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_normal_preamble", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                    VL_STOP_MT("c_phy_bfm_if.sv", 279, "");
                    goto __Vlabel4;
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 5U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                __Vfunc_normal_ulpsactivenot_value__21__Vfuncout = 0;
                __Vfunc_normal_ulpsactivenot_value__21__Vfuncout 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                    = __Vfunc_normal_ulpsactivenot_value__21__Vfuncout;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1 = 2U;
                while (VL_LTS_III(32, 0U, __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1)) {
                    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                                "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                    co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                         vlProcess, 
                                                                         "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                         "c_phy_bfm_if.sv", 
                                                                         294);
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                        goto __Vlabel4;
                    }
                    __Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1 
                        = (__Vtask_drive_normal_preamble__20__unnamedblk1_2__DOT____Vrepeat1 
                           - (IData)(1U));
                }
                __Vtask_drive_normal_preamble__20__preamble_done = 1U;
                __Vlabel4: ;
            }
            __Vtask_start_hs__15__preamble_done = __Vtask_drive_normal_preamble__20__preamble_done;
            if ((1U & (~ (IData)(__Vtask_start_hs__15__preamble_done)))) {
                goto __Vlabel1;
            }
            __Vtask_start_hs__15__started = 1U;
            __Vlabel1: ;
        }
        VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 573)->__PVT__started 
            = __Vtask_start_hs__15__started;
        if ((1U & (~ VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 575)
                   ->__PVT__started))) {
            goto __Vlabel0;
        }
        __Vtask_drive_sync__23__segment_mask = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.active_segment_mask;
        __Vtask_drive_sync__23__initial_sync = 1U;
        __Vtask_drive_sync__23__sync_type = VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 578)
            ->__PVT__send_sync_type;
        {
            if (VL_UNLIKELY(((0U == (IData)(__Vtask_drive_sync__23__segment_mask))))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 6U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:350: Assertion failed in %m: C-PHY BFM: zero Sync segment mask\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_sync", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("c_phy_bfm_if.sv", 350, "");
                goto __Vlabel5;
            }
            if (VL_UNLIKELY((((IData)(__Vtask_drive_sync__23__initial_sync) 
                              & (5U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state)))))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:357: Assertion failed in %m: C-PHY BFM: initial Sync called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_sync", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                VL_STOP_MT("c_phy_bfm_if.sv", 357, "");
                goto __Vlabel5;
            }
            if (VL_UNLIKELY((((~ (IData)(__Vtask_drive_sync__23__initial_sync)) 
                              & (7U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state)))))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:364: Assertion failed in %m: C-PHY BFM: additional Sync called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_sync", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                VL_STOP_MT("c_phy_bfm_if.sv", 364, "");
                goto __Vlabel5;
            }
            if ((1U & (~ (IData)(__Vtask_drive_sync__23__initial_sync)))) {
                Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                            "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                     vlProcess, 
                                                                     "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                     "c_phy_bfm_if.sv", 
                                                                     370);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                goto __Vlabel5;
            }
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 6U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
            __Vfunc_normal_ulpsactivenot_value__24__Vfuncout = 0;
            __Vfunc_normal_ulpsactivenot_value__24__Vfuncout 
                = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                = __Vfunc_normal_ulpsactivenot_value__24__Vfuncout;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
            vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
            if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_sync_workaround) {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word 
                    = __Vtask_drive_sync__23__initial_sync;
            } else {
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 
                    = __Vtask_drive_sync__23__initial_sync;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs 
                    = __Vtask_drive_sync__23__segment_mask;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs 
                    = __Vtask_drive_sync__23__segment_mask;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 
                    = __Vtask_drive_sync__23__sync_type;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 
                    = __Vtask_drive_sync__23__sync_type;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 
                    = __Vtask_drive_sync__23__sync_type;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 
                    = __Vtask_drive_sync__23__sync_type;
            }
            __Vlabel5: ;
        }
        if ((0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status))) {
            goto __Vlabel0;
        }
        __Vtask___VforkTask_0__14__unnamedblk2__DOT__index = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__14__unnamedblk2__DOT__index, VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 583)
                          ->__PVT__packet_words.size())) {
            __Vtask___VforkTask_0__14__unnamedblk2__DOT__index__Vloopsize 
                = VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 583)
                ->__PVT__packet_words.size();
            __Vtask_drive_hs_word__25__segment_mask 
                = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.active_segment_mask;
            __Vtask_drive_hs_word__25__last_word = 
                (VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 586)
                 ->__PVT__send_eot & (__Vtask___VforkTask_0__14__unnamedblk2__DOT__index 
                                      == (VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 586)
                                          ->__PVT__packet_words.size() 
                                          - (IData)(1U))));
            __Vtask_drive_hs_word__25__data_word = VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 585)
                ->__PVT__packet_words.at(__Vtask___VforkTask_0__14__unnamedblk2__DOT__index);
            {
                if (VL_UNLIKELY(((0U == (IData)(__Vtask_drive_hs_word__25__segment_mask))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 6U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:421: Assertion failed in %m: C-PHY BFM: zero data segment mask\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_hs_word", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("c_phy_bfm_if.sv", 421, "");
                    goto __Vlabel6;
                }
                if (VL_UNLIKELY(((1U & (~ ((6U == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state)) 
                                           | (7U == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state)))))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:428: Assertion failed in %m: C-PHY BFM: HS data called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_hs_word", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                    VL_STOP_MT("c_phy_bfm_if.sv", 428, "");
                    goto __Vlabel6;
                }
                Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                            "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                     vlProcess, 
                                                                     "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                     "c_phy_bfm_if.sv", 
                                                                     433);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
                if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                    goto __Vlabel6;
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 7U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                __Vfunc_normal_ulpsactivenot_value__26__Vfuncout = 0;
                __Vfunc_normal_ulpsactivenot_value__26__Vfuncout 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                    = __Vfunc_normal_ulpsactivenot_value__26__Vfuncout;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 
                    = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 
                    = ((IData)(__Vtask_drive_hs_word__25__last_word) 
                       & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_eot_workaround));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs 
                    = __Vtask_drive_hs_word__25__segment_mask;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs 
                    = __Vtask_drive_hs_word__25__data_word;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                __Vlabel6: ;
            }
            if ((0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status))) {
                goto __Vlabel0;
            }
            if ((__Vtask___VforkTask_0__14__unnamedblk2__DOT__index__Vloopsize 
                 <= VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 583)
                 ->__PVT__packet_words.size())) {
                __Vtask___VforkTask_0__14__unnamedblk2__DOT__index 
                    = ((IData)(1U) + __Vtask___VforkTask_0__14__unnamedblk2__DOT__index);
            }
        }
        if (VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 594)
            ->__PVT__send_eot) {
            __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2 = 0;
            {
                if (VL_UNLIKELY(((7U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:463: Assertion failed in %m: C-PHY BFM: Post/EoT called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.drive_post_and_eot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                    VL_STOP_MT("c_phy_bfm_if.sv", 463, "");
                    goto __Vlabel7;
                }
                Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                            "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                     vlProcess, 
                                                                     "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                     "c_phy_bfm_if.sv", 
                                                                     468);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
                if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                    goto __Vlabel7;
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 8U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                __Vfunc_normal_ulpsactivenot_value__28__Vfuncout = 0;
                __Vfunc_normal_ulpsactivenot_value__28__Vfuncout 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                    = __Vfunc_normal_ulpsactivenot_value__28__Vfuncout;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2 = 1U;
                while (VL_LTS_III(32, 0U, __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2)) {
                    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                                "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                    co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                         vlProcess, 
                                                                         "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                         "c_phy_bfm_if.sv", 
                                                                         495);
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                        vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                        goto __Vlabel7;
                    }
                    __Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_drive_post_and_eot__27__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 9U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_eot_workaround)));
                Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                            "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                     vlProcess, 
                                                                     "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                     "c_phy_bfm_if.sv", 
                                                                     507);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
                if ((1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 1U;
                    goto __Vlabel7;
                }
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 0U;
                __Vfunc_normal_ulpsactivenot_value__30__Vfuncout = 0;
                __Vfunc_normal_ulpsactivenot_value__30__Vfuncout 
                    = (1U & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround)));
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot 
                    = __Vfunc_normal_ulpsactivenot_value__30__Vfuncout;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationprehs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationformat = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxerrcalhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble1 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble2 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble3 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdataesc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsoths = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsotsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.erresc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsyncesc = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontrol = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp0 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp1 = 0U;
                __Vlabel7: ;
            }
        } else {
            {
                if (VL_UNLIKELY(((7U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state))))) {
                    vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status = 5U;
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:519: Assertion failed in %m: C-PHY BFM: missing-EoT stimulus called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm.finish_without_eot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',4,(IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state));
                    VL_STOP_MT("c_phy_bfm_if.sv", 519, "");
                    goto __Vlabel8;
                }
                Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(vlSelf, 
                                                                            "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
                co_await vlSelfRef.__VtrigSched_h7617d099__0.trigger(0U, 
                                                                     vlProcess, 
                                                                     "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)", 
                                                                     "c_phy_bfm_if.sv", 
                                                                     525);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4 = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs = 0ULL;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs = 1U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate = 0U;
                vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state = 7U;
                __Vlabel8: ;
            }
        }
        if ((0U == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status))) {
            VL_NULL_CHECK(__Vtask___VforkTask_0__14____VDynScope_transfer_1_packet_0, "c_phy_bfm_if.sv", 600)->__PVT__compl = 1U;
        }
        __Vlabel0: ;
    }
    __Vfork_1__sync.done("c_phy_bfm_if.sv", 572);
    vlProcess->state(VlProcess::FINISHED);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    co_return;
}

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000003b9aca00ULL, 
                                         nullptr, "csi2_rx_bfm_smoke_tb.sv", 
                                         355);
    VL_WRITEF_NX("[%0t] %%Fatal: csi2_rx_bfm_smoke_tb.sv:356: Assertion failed in %m: BFM/DUT smoke test timeout\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("csi2_rx_bfm_smoke_tb.sv", 356, "", false);
    co_return;
}

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__2(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "csi2_rx_bfm_smoke_tb.sv", 
                                             12);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk = 
            (1U & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk)));
    }
    co_return;
}

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__3(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "csi2_rx_bfm_smoke_tb.sv", 
                                             11);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk = 
            (1U & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk)));
    }
    co_return;
}

VlCoroutine Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__4(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "csi2_rx_bfm_smoke_tb.sv", 
                                             10);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk 
            = (1U & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk)));
    }
    co_return;
}

void Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__act(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__act\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,32, 
                                                 ((VL_EXTEND_II(16,1, vlSelfRef.__VdynSched.evaluate()) 
                                                   << 0x00000010U) 
                                                  | ((((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0)) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0)) 
                                                            << 1U) 
                                                           | ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__prst_n__0)))) 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__pclk__0))) 
                                                            << 3U) 
                                                           | (vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0.neq(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem) 
                                                              << 2U)) 
                                                          | ((vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0.neq(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem) 
                                                              << 1U) 
                                                             | vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0.neq(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem))) 
                                                         << 8U)) 
                                                     | (((((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__rd_rst_n__0)) 
                                                            << 3U) 
                                                           | (vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0.neq(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0))))) 
                                                         << 4U) 
                                                        | (((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__areset_n__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0))) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0) 
                                                               << 1U) 
                                                              | (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__areset_n__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__0.assign(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__rd_rst_n__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__0.assign(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__0.assign(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__0.assign(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem);
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__pclk__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__prst_n__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act\n"); );
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

void Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)) 
              | (0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsoths) 
           | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsotsynchs) 
              | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.erresc) 
                 | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsyncesc) 
                    | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontrol) 
                       | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp1) 
                          | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp0)))))));
}

void Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_next_state 
        = ((0x00000040U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
            ? ((0x00000020U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                ? 1U : ((0x00000010U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                         ? 1U : ((8U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                  ? 1U : ((4U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                           ? 1U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_6)
                                                        ? 4U
                                                        : 0x40U)))))))))
            : ((0x00000020U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                ? ((0x00000010U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                    ? 1U : ((8U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                             ? 1U : ((4U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                      ? 1U : ((2U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                                    ? 1U
                                                    : 0x20U))))))
                : ((0x00000010U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                    ? ((8U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                        ? 1U : ((4U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                 ? 1U : ((2U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                          ? 1U : ((1U 
                                                   & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                                    ? 1U
                                                    : 0x10U)))))
                    : ((8U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                        ? ((4U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                            ? 1U : ((2U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                     ? 1U : ((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                              ? 1U : 
                                             ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                               ? 1U
                                               : 8U))))
                        : ((4U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                            ? ((2U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                ? 1U : ((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                         ? 1U : ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_9)
                                                   ? 2U
                                                   : 4U))))
                            : ((2U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                ? ((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                    ? 1U : ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                             ? 1U : 
                                            ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_6)
                                              ? 4U : 2U)))
                                : ((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                    ? ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_2)
                                        ? 1U : (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7) 
                                                 & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_9))
                                                 ? 2U
                                                 : 
                                                ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__VdfgRegularize_h6e95ff9d_0_6)
                                                  ? 4U
                                                  : 
                                                 (((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs)) 
                                                   & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc))
                                                   ? 8U
                                                   : 
                                                  (((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs)) 
                                                    & (0U 
                                                       != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc)))
                                                    ? 0x10U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc) 
                                                     | ((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs)) 
                                                        & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot)))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en)
                                                      ? 0x40U
                                                      : 1U)))))))
                                    : 1U)))))));
}

void Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1 
        = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state))
            ? 0U : vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata);
}

void Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr_h6e95ff9d_0_1 
        = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state))
            ? 0U : vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr);
}

void Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__2(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__2\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)
            ? vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1
            : 0U);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_hf0dbc24a_0;

void Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__3(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__3\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
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

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);

void Vcsi2_rx_bfm_smoke_tb___024root___eval_act(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_act\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000006020ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__0(vlSelf);
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000006022ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000006021ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__3(vlSelf);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%d\n",1, '#',64,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem[1U]);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__1(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem[1U]);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__2(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__2\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem[1U]);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__3(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__3\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (2U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%d\n",1, '#',56,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem[1U]);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__4(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__4\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n) {
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_alp) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__empty)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_data_reg 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem
                [vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin];
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld_esc) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__empty)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_data_reg 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem
                [vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin];
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin)));
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin;
    } else {
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_data_reg = 0ULL;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_data_reg = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync1 = 0U;
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__5(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__5\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid = 0;
    SData/*8:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr = 0;
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready = 0;
    // Body
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bready;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid;
    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n) {
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid) 
             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bready))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready = 1U;
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid) 
             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wlast))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid = 1U;
        } else if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid) 
                    & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bready))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid = 0U;
        }
        if ((0x01dfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awvalid) 
             & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full) 
                | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld) 
                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld))))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awvalid = 0U;
        } else if (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) 
                      & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld)) 
                     & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full))) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awvalid = 1U;
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid) 
             & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full) 
                | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld) 
                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld))))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid = 0U;
        } else if (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) 
                      & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld)) 
                     & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full))) 
                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxalpnibble_reg_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__rxdataesc_reg_vld)))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid = 1U;
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awid = 7U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awaddr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awsize = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_width = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awlen = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__wready_wait_ctr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awburst = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awcache = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awprot = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awlock = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awqos = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awregion = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awuser = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__wuser = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_empty_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_rd 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_dvld;
    } else {
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awvalid = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awid = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awaddr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awsize = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_width = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awlen = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__wready_wait_ctr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awburst = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awcache = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awprot = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awlock = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awqos = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awregion = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awuser = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__wuser = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_empty_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_rd = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid = __Vdly__csi2_rx_bfm_smoke_tb__DOT__bvalid;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bready = __Vdly__csi2_rx_bfm_smoke_tb__DOT__bready;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr;
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__6(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__6\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0;
    __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0;
    __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0;
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 0;
    QData/*55:0*/ __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0;
    __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0;
    __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0;
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 0;
    // Body
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 0U;
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 0U;
    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n) {
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_alp) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__full)))) {
            __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 
                = (QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in_alp));
            __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin;
            __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0 = 1U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en_esc) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__full)))) {
            __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 
                = (QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in_esc));
            __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin;
            __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0 = 1U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full)))) {
            vlSelfRef.__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in;
            vlSelfRef.__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin;
            vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0 = 1U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin)));
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in 
            = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full)))
                ? (0x00ffffffffffffffULL & (0x0100000000000000ULL 
                                            | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data))
                : 0ULL);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_dvld 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid;
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_dvld = 0U;
    }
    if (__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem[__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0] 
            = __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__mem__v0;
    }
    if (__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem[__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0] 
            = __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__mem__v0;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n) 
           && (1U & (IData)(((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid) 
                               & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full)))
                               ? (0x0100000000000000ULL 
                                  | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data)
                               : 0ULL) >> 0x00000038U))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2) 
           == (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin))));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h004d7ade_0;

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__7(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__7\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = 0;
    SData/*8:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = 0;
    CData/*5:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = 0;
    SData/*11:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = 0;
    SData/*10:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = 0;
    SData/*11:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr = 0;
    SData/*11:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr = 0;
    SData/*11:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r = 0;
    CData/*2:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 = 0;
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld = 0;
    CData/*3:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg = 0;
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld = 0;
    CData/*3:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg = 0;
    SData/*9:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin = 0;
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld = 0;
    CData/*7:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg = 0;
    CData/*0:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = 0;
    CData/*3:0*/ __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = 0;
    CData/*7:0*/ __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0;
    __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 0;
    SData/*11:0*/ __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0;
    __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 0;
    CData/*0:0*/ __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0;
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 0;
    // Body
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 0U;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
    __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
    vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
    __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxerrcalhs_reg 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4)) 
              & ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxerrcalhs) 
                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxerrcalhs_reg))));
    __Vtableidx1 = ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxcalibrationformat_reg) 
                      << 5U) | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationformat) 
                                << 3U)) | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationprehs) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxcalibrationformat_reg 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h004d7ade_0
        [__Vtableidx1];
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT____Vcellout__llp_sync_fifo_inst__FIFO_Status_out 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turnrequest = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__rxalp_lpselect = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turndisable 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__forcerxmode 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__enable 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__pixel_dvalid_stop 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld_out 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_rd_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_vld));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en)) 
                  & (~ (0x0000000fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg)))) 
                 & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en))) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en))) 
               & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxactivehs_en))) 
              & (~ (0x0000000fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg)))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (IData)(((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3)) 
                               & (6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56)))
                               ? (0x0100000000000000ULL 
                                  | (0x00ffffffffffffffULL 
                                     & vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8))
                               : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7) 
                                   & (6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56)))
                                   ? (0x0100000000000000ULL 
                                      | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7)
                                   : 0ULL)) >> 0x00000038U))));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__empty_vld 
            = ((2U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__empty_vld) 
                      << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty));
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
            = ((0x0000007eU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld) 
                               << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty));
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
            = ((0x000003feU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r) 
                               << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable));
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24 
                = ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24))));
        }
        if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
              | (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r))) 
             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 
                = ((6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56))));
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (0x23U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72 
                = ((8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & ((0x22U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                | ((0x21U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                   | ((0x20U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                      | (0x2eU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))))))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16 
                = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (0x1cU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32 
                = ((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (0x19U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80 
                = ((9U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (0x18U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64 
                = ((7U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & (0x1aU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48 
                = ((5U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48))));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable) 
             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                | ((0x1dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                   | (0x19U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40 
                = ((4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40))));
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_sm_sts 
            = ((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                ? 1U : ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                         ? 2U : ((4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                  ? 4U : ((8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                           ? 6U : (
                                                   (0x10U 
                                                    == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                    ? 8U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                     ? 0x0aU
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state))
                                                      ? 0x0cU
                                                      : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_sm_sts))))))));
        if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = 0U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = 0U;
        } else {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld 
                = (1U & ((((((((0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs)) 
                               & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0))) 
                              & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1))) 
                             & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2))) 
                            & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3))) 
                           & (4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                           ? (0x00010000U | ((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble3) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble2) 
                                                 << 8U)) 
                                             | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble1) 
                                                 << 4U) 
                                                | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble0))))
                           : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld) 
                               << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg))) 
                         >> 4U));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg 
                = (0x0000000fU & (((((((0x0000000fU 
                                        == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs)) 
                                       & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0))) 
                                      & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1))) 
                                     & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2))) 
                                    & (0x0aU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3))) 
                                   & (4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                   ? (0x00010000U | 
                                      ((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble3) 
                                         << 0x0000000cU) 
                                        | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble2) 
                                           << 8U)) 
                                       | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble1) 
                                           << 4U) | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble0))))
                                   : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld) 
                                       << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg))));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld 
                = (1U & (((((0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs)) 
                            & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                           & (4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                           ? (0x00010000U | ((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2) 
                                                 << 8U)) 
                                             | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1) 
                                                 << 4U) 
                                                | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0))))
                           : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld) 
                               << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg))) 
                         >> 4U));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg 
                = (0x0000000fU & ((((0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs)) 
                                    & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                                   & (4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                   ? (0x00010000U | 
                                      ((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3) 
                                         << 0x0000000cU) 
                                        | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2) 
                                           << 8U)) 
                                       | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1) 
                                           << 4U) | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0))))
                                   : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld) 
                                       << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg))));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld 
                = (1U & (((((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc) 
                              & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc)) 
                             & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc))) 
                            & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                           & (8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                           ? (0x00000100U | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdataesc))
                           : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld) 
                               << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg))) 
                         >> 8U));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg 
                = (0x000000ffU & ((((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc) 
                                      & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc)) 
                                     & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc))) 
                                    & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                                   & (8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                   ? (0x00000100U | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdataesc))
                                   : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld) 
                                       << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg))));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
                = (1U & (((((((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc)) 
                              & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc)) 
                             & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc))) 
                            & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                           & (0x10U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                           ? (0x00000010U | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc))
                           : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld) 
                               << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg))) 
                         >> 4U));
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
                = (0x0000000fU & ((((((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc)) 
                                      & (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc)) 
                                     & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc))) 
                                    & (~ (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))) 
                                   & (0x10U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                   ? (0x00000010U | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc))
                                   : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld) 
                                       << 4U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg))));
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg 
                = (((((((((0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
                          | (0x059fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) 
                         | (0x077fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) 
                        | (0x01dfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) 
                       | (0x022fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) 
                      | (0x3fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) 
                     | (0x031fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) 
                    | (0x03bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)))
                    ? ((0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16))
                        ? 0x2fU : ((0x059fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))
                                    ? 0x23U : ((0x077fU 
                                                == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))
                                                ? 0x27U
                                                : (
                                                   (0x01dfU 
                                                    == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))
                                                    ? 0x28U
                                                    : 
                                                   ((0x022fU 
                                                     == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))
                                                     ? 0x29U
                                                     : 
                                                    ((0x3fU 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))
                                                      ? 0x2aU
                                                      : 
                                                     ((0x031fU 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))
                                                       ? 0x2bU
                                                       : 0x2cU)))))))
                    : (((((((((0x045fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)) 
                              | (0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) 
                             | (0x08bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) 
                            | (0x03bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) 
                           | (0x027fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) 
                          | (0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) 
                         | (0x031fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) 
                        | (0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)))
                        ? ((0x045fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))
                            ? 0x2dU : ((0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))
                                        ? 0x2fU : (
                                                   (0x08bfU 
                                                    == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))
                                                    ? 0x26U
                                                    : 
                                                   ((0x03bfU 
                                                     == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x027fU 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))
                                                      ? 0x1cU
                                                      : 
                                                     ((0x04ffU 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))
                                                       ? 0x1eU
                                                       : 
                                                      ((0x031fU 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))
                                                        ? 0x1dU
                                                        : 0x1fU)))))))
                        : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__full)))) {
            vlSelfRef.__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in;
            vlSelfRef.__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
            vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0 = 1U;
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld) 
             & (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
                = ((0x0fffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr))
                    ? 0U : (0x00000fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr))));
        }
        if (((7U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
             | (((1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty)) 
                & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty)) 
                           | (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx))) 
                          | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)));
        }
        if ((1U & ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)) 
                   | (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld))))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)));
        }
        if ((0x0cU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) {
            vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)));
        }
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
            = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                & (7U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))
                ? (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx) 
                    << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx))
                : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg));
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
            = ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld)) 
                & (0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data)
                : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx));
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
            = ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld)) 
                & (1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data)
                : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx 
            = ((((5U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)
                : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx 
            = ((((6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)
                : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx));
        if ((0x059fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666)));
        }
        if ((0x01dfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6)));
        }
        if ((0x022fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7)));
        }
        if ((0x3fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8)));
        }
        if ((0x031fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10)));
        }
        if ((0x03bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12)));
        }
        if ((0x045fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14)));
        }
        if ((0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20)));
        }
        if ((0x08bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28)));
        }
        if ((0x03bfU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208)));
        }
        if ((0x027fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd)));
        }
        if ((0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228)));
        }
        if ((0x031fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd)));
        }
        if ((0x063fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210)));
        }
        if ((0x077fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = 0U;
        } else if (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                      | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld)) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24)));
        }
        if ((0x04ffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = 0U;
        } else if (((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld)) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld)) 
                      | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)) 
                     & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                        | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                    & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
                = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)));
        }
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) 
             & (0x0fffU != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
                = ((0x0fffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr))
                    ? 0U : (0x00000fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr))));
        }
        if (((0x0fffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)) 
             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0x0fffU;
        } else if (((0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)) 
                    & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0U;
        } else if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) 
                     & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld))) 
                    & (0x0fffU != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)));
        } else if ((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld)) 
                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)) 
                    & (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
            __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
                = (0x00000fffU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
            = ((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long)) 
                 & (6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long)
                : (((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                      & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                         | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r))) 
                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short)) 
                    & (6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))
                    ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short)
                    : ((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                           | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                          & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                         & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long)) 
                        & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid))
                        ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long)
                        : (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r))));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__byte_data_vld_r 
            = ((0x0000007eU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__byte_data_vld_r) 
                               << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld6_r 
            = ((0x0000007eU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld6_r) 
                               << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1;
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 0U;
        } else {
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x10U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x11U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x12U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x13U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x14U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x15U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x16U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x18U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x19U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1aU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1cU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1dU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1eU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x1fU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (1U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (2U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (3U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (8U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (9U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0aU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0bU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0cU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0dU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0eU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x0fU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 1U;
            }
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data 
            = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
                & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r))
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data)
                : 0U);
        if (((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
             | (0x12U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg 
                = ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                     | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld)) 
                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld))
                    ? 3U : (((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld)) 
                                | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld)) 
                               | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld)) 
                              | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)) 
                             | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld))
                             ? 2U : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                      | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld))
                                      ? 0U : ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld)) 
                                               | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld))
                                               ? 1U
                                               : ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld)
                                                   ? 4U
                                                   : 0x0fU)))));
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (0x1dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[0U] 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[0U];
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[1U] 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[1U];
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[2U] 
                    = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data) 
                        << 8U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[2U]);
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[0U] = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[1U] = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[2U] = 0U;
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data 
            = (0x00ffffffffffffffULL & (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3)) 
                                         & (6U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56)))
                                         ? (0x0100000000000000ULL 
                                            | (0x00ffffffffffffffULL 
                                               & vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8))
                                         : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7) 
                                             & (6U 
                                                == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56)))
                                             ? (0x0100000000000000ULL 
                                                | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7)
                                             : 0ULL)));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs;
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__empty_vld = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_sm_sts = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr = 0U;
        __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status = 0U;
        vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__byte_data_vld_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld6_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[0U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[1U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10[2U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc))
                       : 0U) >> 0x00000010U)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc))
                       : 0U) >> 0x00000010U)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r)
                       ? (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc))
                       : 0U) >> 0x00000010U)));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_vld 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_en;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxactivehs_en 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in 
            = (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs) 
                & (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)))
                ? vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs
                : (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs) 
                    & (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs)))
                    ? (QData)((IData)(((((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3) 
                                         << 9U) | ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2) 
                                                   << 6U)) 
                                       | (((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1) 
                                           << 3U) | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0)))))
                    : 0ULL));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc)))
                : 0U);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc)))
                : 0U);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r)
                ? (0x0000ffffU & (0x00010000U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc)))
                : 0U);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld;
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxactivehs_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__full 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2) 
           == (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin))));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_en 
            = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs) 
               & ((0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs)) 
                  | (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs))));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg 
            = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs;
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 0U;
        } else {
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x24U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x23U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x22U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x21U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x20U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x27U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2fU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2eU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2dU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x28U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2aU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x29U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2bU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x2cU == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 1U;
            }
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk) 
                 & (0x26U == (0x0000003fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data))))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 1U;
            }
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[0U] 
                    = (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8);
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[1U] 
                    = (IData)((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8 
                               >> 0x00000020U));
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[2U] 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data;
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[0U] = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[1U] = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[2U] = 0U;
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx)
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc)
                : 0xffffU);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx)
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc)
                : 0xffffU);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld)
                ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc)
                : 0xffffU);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld 
            = ((((((((((((((((((1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16)) 
                               | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24))) 
                              | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666))) 
                             | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6))) 
                            | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7))) 
                           | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8))) 
                          | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10))) 
                         | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12))) 
                        | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14))) 
                       | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20))) 
                      | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208))) 
                     | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd))) 
                    | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228))) 
                   | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd))) 
                  | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210))) 
                 | (1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28))) 
                & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r))) 
               & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r));
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[0U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[1U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9[2U] = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc = 0xffffU;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc = 0xffffU;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc = 0xffffU;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28;
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
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8 
                    = (((QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data)) 
                        << 0x00000038U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7);
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8 = 0ULL;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7 
                    = (((QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data)) 
                        << 0x00000030U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6);
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7 = 0ULL;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6 
                    = (((QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data)) 
                        << 0x00000028U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5);
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6 = 0ULL;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5 
                    = (((QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4)));
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5 = 0ULL;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4 
                    = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data) 
                        << 0x00000018U) | vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3);
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4 = 0U;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3 
                    = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data) 
                        << 0x00000010U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2));
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3 = 0U;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1) {
            if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1)) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2 
                    = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data) 
                        << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1));
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2 = 0U;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2 = 0U;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) {
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1 = 1U;
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1 = 0U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8 = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7 = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6 = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5 = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2 = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1 = 0U;
    }
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
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) {
            if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data;
            }
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1 = 0U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1 = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)
                       ? (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en) 
                           & (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
                               | (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld))) 
                              | (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld))))
                           ? (0x00000100U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp))
                           : 0U) : 0U) >> 8U)));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r;
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r 
                = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en) 
                    & (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
                        | (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld))) 
                       | (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld))))
                    ? (0x000000ffU & (0x00000100U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp)))
                    : 0U);
            if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))))) {
                VL_WRITEF_NX("ERROR:FIFO IS EMPTY at time = %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow = 1U;
            } else {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM
                    [vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr];
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__over_flow = 0U;
            }
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en = 1U;
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r = 0U;
            if (((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld)) 
                 & (0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status)))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow = 1U;
            }
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en = 0U;
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld) {
            if (VL_UNLIKELY(((0x0fffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))))) {
                VL_WRITEF_NX("ERROR:FIFO IS FULL at time = %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__over_flow = 1U;
            } else {
                __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out;
                __VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 
                    = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
                __VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0 = 1U;
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow = 0U;
            }
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow = 1U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__over_flow = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__data_in_tmp = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr 
        = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr;
    if (__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM[__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0] 
            = __VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_MEM__v0;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
              & (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid) 
                       & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r) 
                          & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)))
                       ? (0x00000100U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r))
                       : 0U) >> 8U)));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out 
            = (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid) 
                & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r) 
                   & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)))
                ? (0x000000ffU & (0x00000100U | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r)))
                : 0U);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data;
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 0U;
        } else if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart) 
                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 1U;
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err)
                ? 0U : (0x000000ffU & ((((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                         & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                        & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                        ? (0x00000100U 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg)))
                                        : ((((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                            & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                            ? (0x00000100U 
                                               | (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                             >> 8U))))
                                            : ((((4U 
                                                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                ? (0x00000100U 
                                                   | (0x000000ffU 
                                                      & (IData)(
                                                                (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                 >> 0x10U))))
                                                : (
                                                   (((5U 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                    ? 
                                                   (0x00000100U 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                  >> 0x18U))))
                                                    : 
                                                   ((((6U 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                      & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                     ? 
                                                    (0x00000100U 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                   >> 0x20U))))
                                                     : 
                                                    ((((7U 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                       & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                      ? 
                                                     (0x00000100U 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                    >> 0x28U))))
                                                      : 
                                                     ((((0U 
                                                         == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                        & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                       ? 
                                                      (0x00000100U 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                     >> 0x30U))))
                                                       : 
                                                      ((((1U 
                                                          == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                         & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                        & (2U 
                                                           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                        ? 
                                                       (0x00000100U 
                                                        | (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                      >> 0x38U))))
                                                        : 0U))))))))));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart 
            = (0x17U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr));
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status 
            = __Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart = 0U;
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__8(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__8\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld_r 
            = ((2U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld_r) 
                      << 1U)) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata1;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata1;
        if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__dtype_reg = 0x0fU;
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_rx_err_reg = 0U;
        } else {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__dtype_reg 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg;
            if (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_err) 
                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err)) 
                  | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld)) 
                 | (0U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err)))) {
                vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_rx_err_reg = 1U;
            }
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__axim_rsp_sts_reg 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_sts;
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__dtype_reg = 0x0fU;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__axim_rsp_sts_reg = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_rx_err_reg = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__paddr_vld = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwrite_vld = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwdata_reg = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld1));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld1));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld1 = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata1 = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld1 = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata1 = 0U;
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__9(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__9\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_addr_vld 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n;
    if ((1U & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_addr = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_data = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pready = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_slve_err = 0U;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)
            ? (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_next_state)
            : 0U);
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld = 0U;
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__10(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__10\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid))) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats 
            = ((IData)(1U) + vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats);
        VL_WRITEF_NX("[%0t] AXI W data=%h strb=%h last=%b\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wdata
                     , '#',7,(IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wstrb)
                     , '#',1,vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wlast);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__11(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__11\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h41d40bef_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h44e71321_0;

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__12(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__12\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld 
        = (((0x20U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
            & (0x24U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))) 
           | ((0x26U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              & (0x2fU >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1 
        = ((0x24U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | ((0x28U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              | ((0x2cU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                 | (0x27U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = ((0x2bU 
                                                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                                 | (0x2fU 
                                                    == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4 
        = ((0x29U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | ((0x2dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
              | (0x26U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
    __Vtableidx3 = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h41d40bef_0
        [__Vtableidx3];
    __Vtableidx2 = ((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err) 
                        << 3U) | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err) 
                                  << 2U)) | (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err))) 
                     << 4U) | ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err) 
                                 << 3U) | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err) 
                                   << 1U) | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h44e71321_0
        [__Vtableidx2];
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & (((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err) 
                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err)) 
                  | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err)) 
                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err)) 
                | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld)) 
               | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err)) 
              | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err)));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6 
        = ((0x23U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
           | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                & ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                   | (0x12U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
               & (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))) 
              & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1) 
           | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 1U;
        }
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err 
            = ((~ ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                   & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)))) 
               & (((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r)) 
                      & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                         != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg))) 
                     & ((8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                        | (0x18U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
                    & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt))) 
                   | (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                         | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)) 
                        & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                           != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg))) 
                       & ((8U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                          | (0x18U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)))) 
                      & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r)))) 
                  | ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                       & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx) 
                          != ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx) 
                                << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx)) 
                              & (- (IData)(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                            & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr))))))))) 
                      & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r))) 
                     & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
        if ((0x17U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 0U;
        } else if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld) 
                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 1U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r 
            = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld = 0U;
    }
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
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if ((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) 
              | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r)) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld = 0U;
        } else if (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld) 
                      | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld)) 
                     | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld)) 
                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld = 1U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld = 0U;
    }
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld) 
                                                 | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld) 
                                                 | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld) 
                                                    | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld) 
                                                       | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           && (1U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err)
                       ? 0U : ((((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                ? (0x00000100U | (0x000000ffU 
                                                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg)))
                                : ((((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                    & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                    ? (0x00000100U 
                                       | (0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                     >> 8U))))
                                    : ((((4U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                         & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                        & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                        ? (0x00000100U 
                                           | (0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                         >> 0x10U))))
                                        : ((((5U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                             & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                            & (2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                            ? (0x00000100U 
                                               | (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                             >> 0x18U))))
                                            : ((((6U 
                                                  == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                ? (0x00000100U 
                                                   | (0x000000ffU 
                                                      & (IData)(
                                                                (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                 >> 0x20U))))
                                                : (
                                                   (((7U 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                     & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                    ? 
                                                   (0x00000100U 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                  >> 0x28U))))
                                                    : 
                                                   ((((0U 
                                                       == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                      & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                     ? 
                                                    (0x00000100U 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                   >> 0x30U))))
                                                     : 
                                                    ((((1U 
                                                        == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx)) 
                                                       & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state)))
                                                      ? 
                                                     (0x00000100U 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                                                                    >> 0x38U))))
                                                      : 0U))))))))) 
                     >> 8U)));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 0U;
        } else if ((0x17U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 1U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt = 0U;
    }
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r 
        = ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 1U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r = 0U;
    }
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
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err 
        = ((~ ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt) 
               | (0U == (0x0000001fU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                        >> 3U))))) 
           & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
              & (1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (((1U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                  & (4U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))) 
                 | ((0x11U <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                    & (0x14U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r 
        = ((0x17U != (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10));
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
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) 
           & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld) 
                                                 & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld) 
                                                    | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r)));
    if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err 
            = ((((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en) 
                   & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld))) 
                  & (~ (0x0000000fU == (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs)))) 
                 & (((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc)) 
                     & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc))) 
                    & (~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc)))) 
                | ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en)) 
                   & (((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld) 
                         | (0U != (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs))) 
                        | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc)) 
                       | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc)) 
                      | (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc)))) 
               | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_next_state;
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem
                [vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin];
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin)));
        }
        if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 0U;
        } else if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 1U;
        }
        if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en = 0U;
        } else if (vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en = 1U;
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state = 1U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld) 
                                                | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r));
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
    if (vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem[vlSelfRef.__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__mem__v0;
    }
    __VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8));
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
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((0x3fU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld)) 
              & (0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld 
        = ((IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty)) 
              & (0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
           & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
              & (0x14U >= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))));
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
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx 
        = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin));
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

extern const VlUnpacked<CData/*1:0*/, 8> Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h6eda804b_0;

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__13(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__13\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_sts 
            = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axim_stats;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wdata 
            = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid)
                ? vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg
                : 0ULL);
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_err = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wstrb = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wlast = 1U;
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_sts = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wdata = 0ULL;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_err = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wstrb = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wlast = 0U;
    }
    __Vtableidx4 = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n;
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axim_stats 
        = Vcsi2_rx_bfm_smoke_tb__ConstPool__TABLE_h6eda804b_0
        [__Vtableidx4];
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__3(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__3\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin));
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__14(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__14\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n) {
        if (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld) 
             & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty)))) {
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg 
                = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem
                [vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin];
            vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin)));
        }
    } else {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin = 0U;
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg = 0ULL;
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__15(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__15\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0) {
        vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem[vlSelfRef.__VdlyDim0__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__mem__v0;
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__16(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__16\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n) 
           & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid) 
              & (~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty))));
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid = vlSelfRef.__Vdly__csi2_rx_bfm_smoke_tb__DOT__wvalid;
}

void Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__7(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__7\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty 
        = ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin) 
           == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin));
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);
void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);
void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);
void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);

void Vcsi2_rx_bfm_smoke_tb___024root___eval_nba(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_nba\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000084ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000820ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000084ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[12U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__13(vlSelf);
        vlSelfRef.__Vm_traceActivity[13U] = 1U;
    }
    if ((0x0000000000006020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__0(vlSelf);
        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1((&vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm));
    }
    if ((0x0000000000001802ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000001801ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000009cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000084ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000006030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000007822ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000007821ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x000000000000009cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcsi2_rx_bfm_smoke_tb___024root___nba_comb__TOP__7(vlSelf);
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___timing_ready(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___timing_ready\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000002000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7617d099__0.ready("@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h190cc700__0.ready("@(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)");
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0bfc498f__0.ready("@(negedge csi2_rx_bfm_smoke_tb.aclk)");
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___timing_resume(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___timing_resume\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h7617d099__0.moveToResumeQueue(
                                                          "@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
    vlSelfRef.__VtrigSched_h190cc700__0.moveToResumeQueue(
                                                          "@(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)");
    vlSelfRef.__VtrigSched_h0bfc498f__0.moveToResumeQueue(
                                                          "@(negedge csi2_rx_bfm_smoke_tb.aclk)");
    vlSelfRef.__VtrigSched_h7617d099__0.resume("@(negedge csi2_rx_bfm_smoke_tb.bfm_clk)");
    vlSelfRef.__VtrigSched_h190cc700__0.resume("@(negedge csi2_rx_bfm_smoke_tb.phy_bfm.rst_n)");
    vlSelfRef.__VtrigSched_h0bfc498f__0.resume("@(negedge csi2_rx_bfm_smoke_tb.aclk)");
    vlSelfRef.__VdynSched.resume();
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcsi2_rx_bfm_smoke_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__act(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__act\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root___eval_triggers_vec__act(vlSelf);
    Vcsi2_rx_bfm_smoke_tb___024root___timing_ready(vlSelf);
    Vcsi2_rx_bfm_smoke_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcsi2_rx_bfm_smoke_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcsi2_rx_bfm_smoke_tb___024root___timing_resume(vlSelf);
        Vcsi2_rx_bfm_smoke_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__inact(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__inact\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("csi2_rx_bfm_smoke_tb.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcsi2_rx_bfm_smoke_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__nba(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__nba\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcsi2_rx_bfm_smoke_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcsi2_rx_bfm_smoke_tb___024root___eval_nba(vlSelf);
        Vcsi2_rx_bfm_smoke_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcsi2_rx_bfm_smoke_tb___024root___eval(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("csi2_rx_bfm_smoke_tb.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("csi2_rx_bfm_smoke_tb.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vcsi2_rx_bfm_smoke_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("csi2_rx_bfm_smoke_tb.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcsi2_rx_bfm_smoke_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h7617d099__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0)) 
                                  << 0x0000000dU)));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__bfm_clk__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk;
    if ((0x0000000000002000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7617d099__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h190cc700__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h190cc700__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__rst_n__0 
        = vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h190cc700__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h0bfc498f__0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root____VbeforeTrig_h0bfc498f__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0)) 
                                  << 0x0000000eU)));
    vlSelfRef.__Vtrigprevexpr___TOP__csi2_rx_bfm_smoke_tb__DOT__aclk__0 
        = vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk;
    if ((0x0000000000004000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0bfc498f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vcsi2_rx_bfm_smoke_tb___024root___eval_debug_assertions(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root___eval_debug_assertions\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
