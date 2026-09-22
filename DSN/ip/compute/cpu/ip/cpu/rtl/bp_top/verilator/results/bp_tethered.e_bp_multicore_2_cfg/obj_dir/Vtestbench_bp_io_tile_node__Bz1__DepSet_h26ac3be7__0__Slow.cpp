// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"
#include "Vtestbench_bp_me_stream_pump_in__pi72.h"
#include "Vtestbench_bp_me_stream_pump_in__pi74.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"
#include "Vtestbench_bp_me_stream_pump_out__pi75.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi10.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi9.h"

VL_ATTR_COLD void Vtestbench_bp_io_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__1(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__1\n"); );
    // Body
    if (vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__mem_fwd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__mem_fwd_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_stream_to_wormhole->link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o));
    if (vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__mem_rev_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__mem_rev_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__mem_rev_wormhole_to_stream__link_ready_and_o));
    if ((2U > (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = ((3U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x17U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = (8U | (3U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo)));
    } else if ((2U > (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo = 4U;
    } else {
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo 
            = (3U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__VdfgExtracted_hd82698c1__0)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
    if ((4U > (7U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x17U)));
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = ((3U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo)) 
               | (0xcU & (((IData)(1U) + (1U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x18U))) 
                          << 2U)));
    } else if ((4U > (7U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo = 6U;
    } else if ((4U > (7U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo = 4U;
    } else if ((4U > (7U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = (0xcU | (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo));
    } else {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo 
            = (3U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U] 
        = (IData)(((0xffffffffff00ULL & (((QData)((IData)(
                                                          vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                          << 0x20U) 
                                         | (0xffffffffffffff00ULL 
                                            & (QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                   | (QData)((IData)(((0xcU == (0xfU 
                                                & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                       ? 1U : 0U)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
        = ((0x70000U & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
           | (IData)((((0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                       | (QData)((IData)(((0xcU == 
                                           (0xfU & 
                                            vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 1U : 0U)))) 
                      >> 0x20U)));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[2U] = 0U;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
        = ((0xfe3fffffU & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U]) 
           | (0x1c00000U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            << 3U)));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[0U] 
        = (IData)(((0xffffffffff00ULL & (((QData)((IData)(
                                                          vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                          << 0x20U) 
                                         | (0xffffffffffffff00ULL 
                                            & (QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                   | (QData)((IData)(((3U == (0xfU 
                                              & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                       ? 1U : 0U)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[1U] 
        = ((0x70000U & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
           | (IData)((((0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                       | (QData)((IData)(((3U == (0xfU 
                                                  & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 1U : 0U)))) 
                      >> 0x20U)));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[2U] = 0U;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[1U] 
        = ((0xf03fffffU & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[1U]) 
           | (0xffc00000U & ((0xe000000U & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                             | (0x1c00000U & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              << 3U)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[1U] 
        = (0x100000U | vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li[1U]);
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li[0U] 
        = (IData)(((0xffffffffff00ULL & (((QData)((IData)(
                                                          vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                          << 0x20U) 
                                         | (0xffffffffffffff00ULL 
                                            & (QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                   | (QData)((IData)(((1U == (0xfU 
                                              & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                       ? 0xcU : 0xbU)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li[1U] 
        = ((0x70000U & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
           | (IData)((((0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                       | (QData)((IData)(((1U == (0xfU 
                                                  & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 0xcU : 0xbU)))) 
                      >> 0x20U)));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li[2U] = 0U;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li[1U] 
        = ((0xf007ffffU & vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li[1U]) 
           | (0xfff80000U & (((IData)(vlSelf->__PVT__io_tile__DOT__cce_id_li) 
                              << 0x19U) | (0x1f80000U 
                                           & (vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              >> 3U)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo 
        = ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo) 
               & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li))
            : (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))
                  : ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))));
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U])) 
                                        >> 8U))) & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (5U >> (0xfU & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U])))
            ? (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1 
        = ((5U >> (0xfU & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U])) 
           & ((~ (5U >> (0xfU & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U]))) 
              & (0U < (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__stream_size))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li 
        = (1U & (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__VdfgExtracted_h5933db0c__1)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_last_lo 
        = ((3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                           >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
           == (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    if (vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li) 
               & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li;
    } else {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li;
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo;
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_last_lo)))
                  : ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_last_lo)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo));
}
