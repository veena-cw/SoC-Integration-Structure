// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi21.h"

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1cU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 4U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                             >> 0xbU));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__0__KET____DOT__fill_router_cord__lce_cord_o));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x10U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__PVT__pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                            ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o))
                                            : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o))));
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r)));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__2(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.lce[0].lce_fill_stream_to_wh.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.lce[0].lce_fill_stream_to_wh.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U]);
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U]));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (0xfffff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                             << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = (((0x400U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                       << 0xaU)) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                                    >> 0x16U)) | (0xfffff800U 
                                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                     << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | (((0x400U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
                          << 0xaU)) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                       >> 0x16U)) | 
              (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
                            << 0xaU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                 >> 0x17U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x80000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                               ? ((0x40000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x10U >> (0xfU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                                        >> 1U)))) ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
            >> 1U) & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1cU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 4U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
                             >> 1U));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                            ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
                                                  >> 1U))
                                            : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
                                                  >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__2(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.lce[1].lce_fill_stream_to_wh.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.lce[1].lce_fill_stream_to_wh.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1cU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 4U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[3U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[4U] 
                             >> 0xbU));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[6U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[5U] 
                             >> 0xbU));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[2U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__0__KET____DOT__fill_router_cord__lce_cord_o));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[1U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x10U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o[0U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__PVT__pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                            ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o))
                                            : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o))));
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r)));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__2(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_stream_to_wh__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.lce[0].lce_fill_stream_to_wh.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.lce[0].lce_fill_stream_to_wh.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U]);
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U]));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (0xfffff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                             << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = (((0x400U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                       << 0xaU)) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                                    >> 0x16U)) | (0xfffff800U 
                                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                     << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | (((0x400U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
                          << 0xaU)) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                       >> 0x16U)) | 
              (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xcU] 
                            << 0xaU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                            >> 0x17U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU] 
                                                 >> 0x17U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x80000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                               ? ((0x40000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xbU])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x10U >> (0xfU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                                        >> 1U)))) ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
            >> 1U) & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->__PVT__link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->__PVT__link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->__PVT__link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1cU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 4U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[6U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[7U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[8U] 
                             >> 1U));
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[0xaU] 
                << 0x1fU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r[9U] 
                             >> 1U));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                            ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
                                                  >> 1U))
                                            : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in.__PVT__links_ready_and_rev_o) 
                                                  >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__2(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_stream_to_wh__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.lce[1].lce_fill_stream_to_wh.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.lce[1].lce_fill_stream_to_wh.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
