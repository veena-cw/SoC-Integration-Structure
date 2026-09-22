// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi18.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi21.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi22.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__33(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__33\n"); );
    // Body
    if (vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[0U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[1U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[2U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[3U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[0U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[1U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[2U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[3U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[4U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[5U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[6U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[7U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[4U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[5U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[6U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i[7U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->tile__DOT____Vcellinp__req_concentrator__links_v_i 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_req_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_req_stream_to_wh->__PVT__link_v_o));
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_v_li 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__link_v_o));
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[0U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[0U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[1U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[1U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[2U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[2U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[3U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[3U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[4U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[0U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[5U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[1U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[6U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[2U];
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[7U] 
        = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh->__PVT__link_data_o[3U];
    if (vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    if (vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__stream_control__DOT__state_r) {
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__wh_data_reg__DOT__data_r[3U];
    } else {
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U] 
            = vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__encode__DOT__wh_header_cast_o[3U];
    }
    vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_v_i 
        = (((IData)(vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_resp_stream_to_wh->__PVT__link_v_o) 
            << 1U) | (IData)(vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_resp_stream_to_wh->__PVT__link_v_o));
}
