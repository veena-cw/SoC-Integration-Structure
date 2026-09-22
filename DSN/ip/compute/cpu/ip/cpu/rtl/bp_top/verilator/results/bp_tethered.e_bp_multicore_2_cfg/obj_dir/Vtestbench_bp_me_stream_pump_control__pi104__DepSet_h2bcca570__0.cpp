// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_control__pi104.h"

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__1__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__2__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__3__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__0(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__nz__DOT__cnt_r;
    __Vdly__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__nz__DOT__cnt_r = vlSelf->__PVT__nz__DOT__cnt_r;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) {
            __Vdly__nz__DOT__cnt_r = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__nz__DOT__cnt_r = (3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                          << 0x14U) 
                                         | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                            >> 0xcU)) 
                                        + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i)));
    }
    vlSelf->__PVT__nz__DOT__cnt_r = __Vdly__nz__DOT__cnt_r;
    vlSelf->__PVT__nz__DOT__state_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                       & (IData)(vlSelf->__PVT__nz__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__1(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__sink_comb__BRA__4__KET____DOT__pump_control__1\n"); );
    // Body
    vlSelf->__PVT__nz__DOT__size_li = ((1U & (6U >> 
                                              (0xfU 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U])))
                                        ? (3U & (((1U 
                                                   < 
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                         >> 0x10U))) 
                                                    >> 4U))
                                                   ? 
                                                  (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[5U] 
                                                        >> 0x10U))) 
                                                   >> 4U)
                                                   : 1U) 
                                                 - (IData)(1U)))
                                        : 0U);
    vlSelf->__PVT__nz__DOT__cnt_lo = (3U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                             ? (IData)(vlSelf->__PVT__nz__DOT__cnt_r)
                                             : ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU))));
    vlSelf->__PVT__last_o = ((3U & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                      << 0x14U) | (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.__PVT__data_o[4U] 
                                                   >> 0xcU)) 
                                    + (IData)(vlSelf->__PVT__nz__DOT__size_li))) 
                             == (IData)(vlSelf->__PVT__nz__DOT__cnt_lo));
    vlSelf->__PVT__nz__DOT__state_n = (1U & ((IData)(vlSelf->__PVT__nz__DOT__state_r)
                                              ? (~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) 
                                                  & (IData)(vlSelf->__PVT__last_o)))
                                              : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i) 
                                                 & (~ (IData)(vlSelf->__PVT__last_o)))));
}
