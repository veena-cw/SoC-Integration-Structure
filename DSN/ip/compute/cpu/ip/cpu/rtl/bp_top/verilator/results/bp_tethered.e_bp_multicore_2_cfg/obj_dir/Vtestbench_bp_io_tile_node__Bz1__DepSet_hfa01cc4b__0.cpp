// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"
#include "Vtestbench_bp_me_stream_pump_in__pi72.h"
#include "Vtestbench_bp_me_stream_pump_in__pi74.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"
#include "Vtestbench_bp_me_stream_pump_out__pi75.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"
#include "Vtestbench_bsg_wormhole_router__pi33.h"

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__1(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__1\n"); );
    // Body
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
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
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
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
    vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSelf->io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o) 
           & (vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[4U] 
              >> 1U));
    if (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r) {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_v_li = 
            (1U & (vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[4U] 
                   >> 1U));
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
    } else {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_v_li = 
            (1U & ((~ (6U >> (0xfU & (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                      >> 0xaU)))) & 
                   (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r))));
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo = 0U;
    if (((0x80000000ULL > (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)))) 
         & (3U == (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
                   >> 0x1cU)))) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo 
            = (1U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
                     >> 0xbU));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo 
        = (((1U < (0x7fU & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 9U))) | ((0x80000000ULL 
                                         > (0xffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                  >> 8U)))) 
                                        & (1U == (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                  >> 0x1cU))))
            ? (7U & ((IData)(2U) + (1U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                          >> 0x14U))))
            : ((0x80000000ULL > (0xffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U))))
                ? (7U & vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])
                : (((~ (IData)((0U != (0x7fU & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 9U))))) 
                    & (0x80000000ULL <= (0xffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 8U)))))
                    ? ((6U & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo)) 
                       | (1U & (VL_STREAML_FAST_III(6, 
                                                    (0x3fU 
                                                     & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                        >> 0xeU)), 0) 
                                >> 5U))) : 2U)));
    vlSelf->io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
                  ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__PVT__gearbox__DOT__fifo__DOT__full_r))
                  : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))));
    vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSelf->io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o) 
           & (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
              >> 1U));
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
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
    vlSelf->io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
                  ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__full_r))
                  : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))));
    vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSelf->io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o) 
           & (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[4U] 
              >> 1U));
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U))))))));
    vlSelf->io_tile__DOT____Vcellout__mem_rev_wormhole_to_stream__link_ready_and_o 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)
                  ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__PVT__gearbox__DOT__fifo__DOT__full_r))
                  : (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))));
    vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSelf->io_tile__DOT____Vcellout__mem_rev_wormhole_to_stream__link_ready_and_o) 
           & (vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
              >> 1U));
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_n 
        = ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))
            : ((IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U))))))));
    vlSelf->__PVT__io_tile__DOT__reset_r = vlSymsp->TOP.testbench__DOT__dut_reset;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_v_li));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (6U >> (0xfU & vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__stream_size)
            : 0U);
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0 
        = ((~ (6U >> (0xfU & vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
           & ((6U >> (0xfU & vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
              & (0U < (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__stream_size))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
        = (((QData)((IData)((7U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                   >> 0x10U)))) << 0x30U) 
           | ((0xffffffffff00ULL & (((QData)((IData)(
                                                     vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                     << 0x20U) | (0xffffffffffffff00ULL 
                                                  & (QData)((IData)(
                                                                    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
              | (QData)((IData)(((1U == (0xfU & vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                  ? 3U : 2U)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
        = ((0xf007ffffffffffffULL & vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li) 
           | ((QData)((IData)((((IData)(vlSelf->__PVT__io_tile__DOT__lce_id_li) 
                                << 6U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo) 
                                           << 3U) | 
                                          (7U & (vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U)))))) 
              << 0x33U));
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i)));
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
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li 
        = (1U & (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__VdfgExtracted_h5933db0c__1)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (((IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r))) {
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo 
        = ((3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
                           >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__size_li))) 
           == (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo));
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
