// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi72.h"
#include "Vtestbench_bp_me_stream_pump_in__pi74.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"
#include "Vtestbench_bp_me_stream_pump_out__pi73.h"
#include "Vtestbench_bp_me_stream_pump_out__pi75.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi10.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi18.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi24.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi9.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"
#include "Vtestbench_bsg_wormhole_router__pi33.h"

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__2(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__2\n"); );
    // Body
    vlSelf->__PVT__io_tile__DOT__lce_cmd_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (0x810U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_req_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (0x18U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__mem_rev_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (5U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xaU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
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
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->pr_ready_and_o));
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
    if (vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__lce_req_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__lce_req_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__lce_req_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o));
    if (vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__lce_cmd_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_req_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__VdfgExtracted_h5933db0c__3)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_rev_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__VdfgExtracted_hd82698c1__0)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[0U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[1U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[2U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[3U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[4U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x11U] 
            << 0x1cU) | (0xffffff0U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x10U] 
                                       >> 4U)));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x11U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x12U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x11U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x12U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x13U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x12U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x13U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x14U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x13U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x14U] 
                    >> 4U)) | (0x30U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x14U] 
                                        >> 4U)));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[0U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[1U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[2U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[3U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[4U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] = 0U;
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x11U] 
            << 0x1cU) | (0xffffff0U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x10U] 
                                       >> 4U)));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x11U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x12U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x11U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x12U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x13U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x12U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x13U] 
                    >> 4U)) | ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x14U] 
                                << 0x1cU) | (0xffffff0U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x13U] 
                                                >> 4U))));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
        = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x14U] 
                    >> 4U)) | (0x30U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x14U] 
                                        >> 4U)));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[0U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[1U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[2U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[3U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__lce_req_link_o[4U]);
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[1U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[2U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[3U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[4U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[5U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[6U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[7U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[8U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[9U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xaU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xbU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xcU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xdU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xeU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xfU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_req_link_i[0x10U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__lce_cmd_link_o[4U]);
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[1U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[2U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[3U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[4U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[5U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[6U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[7U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[8U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[9U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xaU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xbU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xcU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xdU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xeU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xfU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__0__KET____DOT__io__coh_lce_cmd_link_i[0x10U] 
                         << 2U));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo 
        = ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo) 
               & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li))
            : (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))
                  : ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))));
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo));
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__2(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__2\n"); );
    // Body
    vlSelf->__PVT__io_tile__DOT__lce_cmd_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (0x810U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_req_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (0x18U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__mem_rev_v_li = (1U 
                                                 & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)
                                                     ? 
                                                    (vlSelf->__PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router->__PVT__link_o[4U] 
                                                     >> 1U)
                                                     : 
                                                    ((~ 
                                                      (5U 
                                                       >> 
                                                       (0xfU 
                                                        & (vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                           >> 0xaU)))) 
                                                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
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
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->pr_ready_and_o));
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
    if (vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__lce_req_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__lce_req_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__lce_req_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__lce_req_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_req_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o));
    if (vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->__Vcellout__io_tile__lce_cmd_link_o[4U] 
        = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_req_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__VdfgExtracted_h5933db0c__3)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__io_cce__DOT__rev_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_rev_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li 
        = (1U & (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__VdfgExtracted_hd82698c1__0)
                   ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                   : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__req_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                 & ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
                     ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[0U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[1U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[2U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__lce_req_link_o[3U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__lce_req_link_o[4U]);
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[1U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[2U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[3U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[4U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[5U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[6U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[7U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[8U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[9U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xaU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xbU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xcU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xdU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xeU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xfU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_req_link_i[0x10U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[0U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[1U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[2U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__lce_cmd_link_o[3U];
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__lce_cmd_link_o[4U]);
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[1U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[2U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[3U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[4U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[5U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[6U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[7U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[8U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[9U] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xaU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xbU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xcU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xdU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xeU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xfU] 
                         << 2U));
    vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__coh_lce_cmd_link_i[0x10U] 
                         << 2U));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo 
        = ((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0)
            ? ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo) 
               & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li))
            : (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))
                  : ((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo)))));
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo));
}
