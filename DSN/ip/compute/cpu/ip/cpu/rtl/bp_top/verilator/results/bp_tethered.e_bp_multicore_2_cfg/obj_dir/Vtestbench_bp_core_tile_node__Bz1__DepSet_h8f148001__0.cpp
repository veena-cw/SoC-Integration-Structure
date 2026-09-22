// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi18.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi21.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi22.h"
#include "Vtestbench_bp_me_xbar_stream__pi92.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__32(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__32\n"); );
    // Init
    CData/*3:0*/ tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i;
    tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i = 0;
    // Body
    tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i 
        = (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__rt_clk) 
            << 2U) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clk_ds_lo) 
                       << 1U) | (IData)(vlSymsp->TOP.testbench__DOT__dut_clk)));
    if ((1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut_clk)))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                << 3U) | (((IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__pr_v_o) 
                           << 2U) | ((2U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                            << 1U)) 
                                     | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[1U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[1U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[2U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[2U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[3U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
            = (((vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                 << 0x18U) | (0xfffff8U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                           >> 8U))) 
               | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[3U] 
                  >> 0x1dU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
            = ((7U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                      >> 8U)) | ((vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                  << 0x18U) | (0xfffff8U 
                                               & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                                                  >> 8U))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                << 0xfU) | (((IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__pr_v_o) 
                             << 0xeU) | ((7U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                                >> 8U)) 
                                         | (0x3ff8U 
                                            & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                               >> 8U)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[1U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[1U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[2U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[2U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[3U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
            = ((0xffff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                               << 4U)) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[3U] 
                                          >> 0x11U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
            = (((0x7ff0U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                            << 4U)) | (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                       >> 0x1cU)) | 
               (0xffff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                               << 4U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
            = (((0x7ff0U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                            << 4U)) | (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                                       >> 0x1cU)) | 
               (0x3ff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                              << 4U)));
    }
    if (vlSymsp->TOP.testbench__DOT__dut_clk) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
                << 4U) | ((8U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                                 << 3U)) | (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__pr_ready_and_o) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__pr_ready_and_o) 
                                                << 1U) 
                                               | (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__pr_ready_and_o)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[1U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[2U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[3U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[4U] 
            = (((IData)((0xfffffffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
                          >> 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
            = (((IData)((0xfffffffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                >> 0x1cU) | ((IData)(((0xfffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))) 
                                      >> 0x20U)) << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U] 
            = (((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                 << 0x16U) | (0x3ffffeU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                           >> 0xaU))) 
               | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__empty_r))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
                << 1U) | (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                                >> 0xaU)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
                >> 0x1fU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                             << 1U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][0U] 
                << 0xdU) | ((0x1000U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
                                        << 0xcU)) | 
                            ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                              >> 0x1fU) | (0xffeU & 
                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                            << 1U)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xdU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][0U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][1U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xeU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][1U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][2U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xfU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][2U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][3U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x10U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][3U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][4U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x11U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][4U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][5U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
            = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
               [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][5U] 
               >> 0x13U);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__rt_clk_lo 
        = (1U & ((IData)(tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i) 
                 >> (IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtimesel_reg__DOT__data_r)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
             << 0x1cU) | (0xffff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
                                        >> 4U))) | 
           (0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                      >> 3U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
        = ((0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
                      >> 4U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                                  << 0x1cU) | (0xffff800U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
                                                  >> 4U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
        = ((0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                      >> 4U)) | (0x3ff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                                              >> 4U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                     >> 2U)));
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                >> 1U) : (~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))) 
           & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o));
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)
             ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U]
             : (~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))) 
           & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__empty_r)) 
                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0U] 
                    >> 1U)));
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                     >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                                                >> 4U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o));
    }
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                     >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                                                >> 0x1bU))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o));
    }
    if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                     >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x18U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (0xcU & (((IData)(1U) + (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                >> 0x19U))) 
                          << 2U)));
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o = 6U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o = 4U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x17U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = (0xcU | (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x17U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
                     & (1U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
               & ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis 
        = (((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
            << 1U) | (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o)));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
                     & (1U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
               & ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis 
        = (((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
            << 1U) | (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o)));
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
         & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
         & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__31(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__31\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__dut_clk) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
                << 4U) | ((8U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                                 << 3U)) | (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__pr_ready_and_o) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__pr_ready_and_o) 
                                                << 1U) 
                                               | (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__pr_ready_and_o)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[1U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[2U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[3U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
                >> 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
                             << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[4U] 
            = (((IData)((0xfffffffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
                          >> 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
            = (((IData)((0xfffffffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                >> 0x1cU) | ((IData)(((0xfffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))) 
                                      >> 0x20U)) << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U] 
            = (((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                 << 0x16U) | (0x3ffffeU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                           >> 0xaU))) 
               | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__empty_r))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
            = ((1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                      >> 0xaU)) | ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                                    << 0x16U) | (0x3ffffeU 
                                                 & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                                                    >> 0xaU))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
                << 1U) | (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                                >> 0xaU)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
                >> 0x1fU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                             << 1U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][0U] 
                << 0xdU) | ((0x1000U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
                                        << 0xcU)) | 
                            ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                              >> 0x1fU) | (0xffeU & 
                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                            << 1U)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xdU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][0U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][1U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xeU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][1U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][2U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xfU] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][2U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][3U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x10U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][3U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][4U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x11U] 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][4U] 
                >> 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
                             [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][5U] 
                             << 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
            = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
               [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__head_r][5U] 
               >> 0x13U);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut_clk)))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                << 3U) | (((IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__pr_v_o) 
                           << 2U) | ((2U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                            << 1U)) 
                                     | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[1U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[1U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[2U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
            = ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[2U] 
                >> 0x1dU) | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[3U] 
                             << 3U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
            = (((vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                 << 0x18U) | (0xfffff8U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                           >> 8U))) 
               | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[3U] 
                  >> 0x1dU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
            = ((7U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                      >> 8U)) | ((vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                  << 0x18U) | (0xfffff8U 
                                               & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                                                  >> 8U))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                << 0xfU) | (((IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__pr_v_o) 
                             << 0xeU) | ((7U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                                >> 8U)) 
                                         | (0x3ff8U 
                                            & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                                               >> 8U)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[1U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[1U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[2U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
            = ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[2U] 
                >> 0x11U) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[3U] 
                             << 0xfU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
            = ((0xffff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                               << 4U)) | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[3U] 
                                          >> 0x11U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
            = (((0x7ff0U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                            << 4U)) | (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                       >> 0x1cU)) | 
               (0xffff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                               << 4U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
            = (((0x7ff0U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                            << 4U)) | (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                                       >> 0x1cU)) | 
               (0x3ff8000U & (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                              << 4U)));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__empty_r)) 
                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0U] 
                    >> 1U)));
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                     >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                                                >> 4U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                            >> 3U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0x12U] 
                        >> 3U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o));
    }
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                     >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                                                >> 0x1bU))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                            >> 0x1aU)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[5U] 
                        >> 0x1aU)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o));
    }
    if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                     >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x18U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (0xcU & (((IData)(1U) + (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                >> 0x19U))) 
                          << 2U)));
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o = 6U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o = 4U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x17U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = (0xcU | (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                        >> 0x17U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[5U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
             << 0x1cU) | (0xffff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
                                        >> 4U))) | 
           (0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                      >> 3U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
        = ((0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
                      >> 4U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                                  << 0x1cU) | (0xffff800U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xbU] 
                                                  >> 4U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
        = ((0x7ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                      >> 4U)) | (0x3ff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xcU] 
                                              >> 4U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[1U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[2U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[4U] 
            << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[3U] 
                         >> 3U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[7U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[8U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0xaU] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[9U] 
                         >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[6U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                     >> 2U)));
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                >> 1U) : (~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))) 
           & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o));
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)
             ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U]
             : (~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))) 
           & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
                     & (1U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
               & ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis 
        = (((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
            << 1U) | (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o)));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
                     & (1U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
               & ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis 
        = (((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
            << 1U) | (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o));
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o)));
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->data_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
         & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis)))) {
        vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer->data_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o) 
         & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}
