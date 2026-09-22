// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"
#include "Vtestbench_bp_me_stream_pump_in__pi86.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"
#include "Vtestbench_bp_me_stream_pump_out__pi75.h"
#include "Vtestbench_bp_me_stream_pump_out__pi87.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi21.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__3(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__3\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_h46092db6__0;
    VlWide<12>/*383:0*/ __Vtemp_h99b4941e__0;
    // Body
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[0U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[1U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[2U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[3U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__tile__lce_req_link_o[4U]);
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[1U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[2U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[3U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[4U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[5U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[6U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[7U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[8U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[9U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xaU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xbU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xcU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xdU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xeU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xfU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__coh_lce_req_link_i[0x10U] 
                         << 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fsm_fwd_yumi_li 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__VdfgExtracted_h5933db0c__4)
                   ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                   : (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                 & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x17U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o));
    }
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x17U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o));
    }
    __Vtemp_h46092db6__0[0U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[1U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[2U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[3U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[4U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[5U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[6U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[7U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[8U] = 0U;
    __Vtemp_h46092db6__0[9U] = 0U;
    __Vtemp_h46092db6__0[0xaU] = 0U;
    __Vtemp_h46092db6__0[0xbU] = 0U;
    VL_SHIFTL_WWI(384,384,7, __Vtemp_h99b4941e__0, __Vtemp_h46092db6__0, 
                  (0x40U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U]));
    vlSelf->__VdfgTmp_h149788ac__0[0U] = __Vtemp_h99b4941e__0[0U];
    vlSelf->__VdfgTmp_h149788ac__0[1U] = __Vtemp_h99b4941e__0[1U];
    vlSelf->__VdfgTmp_h149788ac__0[2U] = __Vtemp_h99b4941e__0[2U];
    vlSelf->__VdfgTmp_h149788ac__0[3U] = __Vtemp_h99b4941e__0[3U];
    vlSelf->__VdfgTmp_h149788ac__0[4U] = __Vtemp_h99b4941e__0[4U];
    vlSelf->__VdfgTmp_h149788ac__0[5U] = __Vtemp_h99b4941e__0[5U];
    vlSelf->__VdfgTmp_h149788ac__0[6U] = __Vtemp_h99b4941e__0[6U];
    vlSelf->__VdfgTmp_h149788ac__0[7U] = __Vtemp_h99b4941e__0[7U];
    vlSelf->__VdfgTmp_h149788ac__0[8U] = __Vtemp_h99b4941e__0[8U];
    vlSelf->__VdfgTmp_h149788ac__0[9U] = __Vtemp_h99b4941e__0[9U];
    vlSelf->__VdfgTmp_h149788ac__0[0xaU] = __Vtemp_h99b4941e__0[0xaU];
    vlSelf->__VdfgTmp_h149788ac__0[0xbU] = __Vtemp_h99b4941e__0[0xbU];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xf0U & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                         >> 3U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                      >> 2U)))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xfU & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                          >> 5U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                           >> 4U)))) 
                                            << 4U))));
    if ((1U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                               << 1U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                        >> 0x1aU)))))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 1U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 1U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 2U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 2U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 3U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 3U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 4U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 4U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 5U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 5U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 6U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 6U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 7U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 7U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                               << 1U)));
    } else if ((2U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                               << 1U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                             >> 0x1aU))))))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 1U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 2U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 3U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 4U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 5U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 6U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 7U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                               << 1U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | ((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                   ? 0x700000U : 0x7fffffU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 9U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 0x12U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 5U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                                 ? 0x700000U : 0x7fffffU) 
                               >> 0x16U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                                 ? 0x700000U : 0x7fffffU) 
                               << 1U)));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__pr_ready_and_o));
    if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x17U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((3U & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (0xcU & (((IData)(1U) + (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x18U))) 
                          << 2U)));
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo = 6U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo = 4U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = (0xcU | (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    } else {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = (3U & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    }
    vlSelf->__PVT__tile__DOT__lce_req_v_li = (1U & 
                                              ((IData)(vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                ? (
                                                   vlSelf->__PVT__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router->__PVT__link_o[4U] 
                                                   >> 1U)
                                                : (
                                                   (~ 
                                                    (0x18U 
                                                     >> 
                                                     (0xfU 
                                                      & (vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                         >> 0xbU)))) 
                                                   & (~ (IData)(vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__VdfgTmp_h2d144dc2__0 = (0xffffffU & (
                                                   (0xffffU 
                                                    & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o))) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__3(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__3\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_h46092db6__0;
    VlWide<12>/*383:0*/ __Vtemp_h99b4941e__0;
    // Body
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[0U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[1U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[2U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__tile__lce_req_link_o[3U];
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__tile__lce_req_link_o[4U]);
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[1U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[2U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[3U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[4U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[5U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[6U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[7U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[8U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[8U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[9U] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[9U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xaU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xaU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xbU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xbU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xcU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xcU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xdU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xdU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xeU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xeU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xfU] 
                         << 2U));
    vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0xfU] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__coh_lce_req_link_i[0x10U] 
                         << 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fsm_fwd_yumi_li 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__VdfgExtracted_h5933db0c__4)
                   ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                   : (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fwd_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                 & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__rev_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x17U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o));
    }
    if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (0xcU & (((IData)(1U) + (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x17U))) 
                          << 2U)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = (8U | (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)));
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o = 6U;
    } else if ((2U > (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o = 4U;
    } else {
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = ((0xcU & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o)) 
               | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o 
            = (3U & (IData)(vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o));
    }
    __Vtemp_h46092db6__0[0U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[1U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[2U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[3U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[4U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[5U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[6U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[7U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h46092db6__0[8U] = 0U;
    __Vtemp_h46092db6__0[9U] = 0U;
    __Vtemp_h46092db6__0[0xaU] = 0U;
    __Vtemp_h46092db6__0[0xbU] = 0U;
    VL_SHIFTL_WWI(384,384,7, __Vtemp_h99b4941e__0, __Vtemp_h46092db6__0, 
                  (0x40U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U]));
    vlSelf->__VdfgTmp_h149788ac__0[0U] = __Vtemp_h99b4941e__0[0U];
    vlSelf->__VdfgTmp_h149788ac__0[1U] = __Vtemp_h99b4941e__0[1U];
    vlSelf->__VdfgTmp_h149788ac__0[2U] = __Vtemp_h99b4941e__0[2U];
    vlSelf->__VdfgTmp_h149788ac__0[3U] = __Vtemp_h99b4941e__0[3U];
    vlSelf->__VdfgTmp_h149788ac__0[4U] = __Vtemp_h99b4941e__0[4U];
    vlSelf->__VdfgTmp_h149788ac__0[5U] = __Vtemp_h99b4941e__0[5U];
    vlSelf->__VdfgTmp_h149788ac__0[6U] = __Vtemp_h99b4941e__0[6U];
    vlSelf->__VdfgTmp_h149788ac__0[7U] = __Vtemp_h99b4941e__0[7U];
    vlSelf->__VdfgTmp_h149788ac__0[8U] = __Vtemp_h99b4941e__0[8U];
    vlSelf->__VdfgTmp_h149788ac__0[9U] = __Vtemp_h99b4941e__0[9U];
    vlSelf->__VdfgTmp_h149788ac__0[0xaU] = __Vtemp_h99b4941e__0[0xaU];
    vlSelf->__VdfgTmp_h149788ac__0[0xbU] = __Vtemp_h99b4941e__0[0xbU];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xf0U & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                         >> 3U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                      >> 2U)))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xfU & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                          >> 5U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                           >> 4U)))) 
                                            << 4U))));
    if ((1U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 
                               << 1U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                        >> 0x1aU)))))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 1U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 1U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 2U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 2U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 3U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 3U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 4U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 4U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 5U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 5U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 6U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 6U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 7U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 7U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 
                               << 1U)));
    } else if ((2U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
            = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                     >> 0x17U)) << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 
                               << 1U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                             >> 0x1aU))))))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 1U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 2U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 3U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 4U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 5U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 6U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
            = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU)))) 
                                              >> 7U)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 
                               << 1U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | ((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                   ? 0x700000U : 0x7fffffU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 9U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 0x12U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 5U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) >> 0xdU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U]) 
               | (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                    ? 0x700000U : 0x7fffffU) << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                                 ? 0x700000U : 0x7fffffU) 
                               >> 0x16U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U]) 
               | (0xffffffU & (((3U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))
                                 ? 0x700000U : 0x7fffffU) 
                               << 1U)));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__pr_ready_and_o));
    if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                     >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x17U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((3U & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (0xcU & (((IData)(1U) + (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x18U))) 
                          << 2U)));
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo = 6U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo = 4U;
    } else if ((4U > (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U)))) {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = (0xcU | (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    } else {
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = ((0xcU & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo)) 
               | (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                        >> 0x16U)));
        vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo 
            = (3U & (IData)(vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    }
    vlSelf->__PVT__tile__DOT__lce_req_v_li = (1U & 
                                              ((IData)(vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)
                                                ? (
                                                   vlSelf->__PVT__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router->__PVT__link_o[4U] 
                                                   >> 1U)
                                                : (
                                                   (~ 
                                                    (0x18U 
                                                     >> 
                                                     (0xfU 
                                                      & (vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                                                         >> 0xbU)))) 
                                                   & (~ (IData)(vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__empty_r)))));
    vlSelf->__VdfgTmp_h2d144dc2__0 = (0xffffffU & (
                                                   (0xffffU 
                                                    & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o))) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U))));
}
