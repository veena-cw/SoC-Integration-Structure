// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi24.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__4(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__4\n"); );
    // Body
    if (vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__tile__lce_cmd_link_o[4U] = 
        (((IData)(vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__link_v_o) 
          << 1U) | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->__PVT__full_r))));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[0U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[1U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[2U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[3U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__tile__lce_cmd_link_o[4U]);
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[1U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[2U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[3U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[4U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[5U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[6U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[7U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[8U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[9U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xaU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xbU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xcU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xdU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xeU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xfU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_cmd_link_i[0x10U] 
                         << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__4(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__4\n"); );
    // Body
    if (vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__tile__lce_cmd_link_o[4U] = 
        (((IData)(vlSelf->__PVT__tile__DOT__lce_cmd_stream_to_wh->__PVT__link_v_o) 
          << 1U) | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_twofer->__PVT__full_r))));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[0U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[1U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[2U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__tile__lce_cmd_link_o[3U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__tile__lce_cmd_link_o[4U]);
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[1U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[2U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[3U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[4U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[5U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[6U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[7U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[8U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[9U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xaU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xbU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xcU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xdU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xeU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xfU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_cmd_link_i[0x10U] 
                         << 2U));
}
