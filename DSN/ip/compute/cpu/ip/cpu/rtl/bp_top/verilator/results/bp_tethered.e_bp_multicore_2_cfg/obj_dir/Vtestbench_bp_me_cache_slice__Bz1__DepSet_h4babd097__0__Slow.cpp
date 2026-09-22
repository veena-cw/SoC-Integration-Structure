// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->__VdfgTmp_hdbd625a5__0 = ((4U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                             >> 7U)) 
                                      | ((2U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                >> 9U)) 
                                         | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                  >> 0xbU))));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->__VdfgTmp_h406f6393__0 = ((4U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                             >> 7U)) 
                                      | ((2U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                >> 9U)) 
                                         | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                  >> 0xbU))));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__10(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__10\n"); );
    // Body
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | VL_STREAML_FAST_III(4, (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v), 0)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__enc_lo 
        = (((8U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                   >> 5U)) | (IData)(vlSelf->__VdfgTmp_hdbd625a5__0)) 
           & (1U | (0xeU & ((~ (IData)(vlSelf->__VdfgTmp_hdbd625a5__0)) 
                            << 1U))));
    vlSelf->__VdfgTmp_h64d79b63__0 = (0U == (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__enc_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__enc_lo)));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | VL_STREAML_FAST_III(4, 
                                                      (0xfU 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                                           | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r)))), 0)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__enc_lo 
        = (((8U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                   >> 5U)) | (IData)(vlSelf->__VdfgTmp_h406f6393__0)) 
           & (1U | (0xeU & ((~ (IData)(vlSelf->__VdfgTmp_h406f6393__0)) 
                            << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___ctor_var_reset(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__mem_fwd_header_i);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__mem_fwd_data_i);
    vlSelf->__PVT__mem_fwd_v_i = 0;
    vlSelf->__PVT__mem_fwd_ready_and_o = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__mem_rev_header_o);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__mem_rev_data_o);
    vlSelf->__PVT__mem_rev_v_o = 0;
    vlSelf->__PVT__mem_rev_ready_and_i = 0;
    vlSelf->__PVT__dma_pkt_o = 0;
    vlSelf->__PVT__dma_pkt_v_o = 0;
    vlSelf->__PVT__dma_pkt_ready_and_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__dma_data_i);
    vlSelf->__PVT__dma_data_v_i = 0;
    vlSelf->__PVT__dma_data_ready_and_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__dma_data_o);
    vlSelf->__PVT__dma_data_v_o = 0;
    vlSelf->__PVT__dma_data_ready_and_i = 0;
    vlSelf->__PVT__cache_data_v_lo = 0;
    vlSelf->__PVT__cache_data_yumi_li = 0;
    vlSelf->__Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(194, vlSelf->__Vcellout__fifo__data_o);
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i = 0;
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o);
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(194, vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(183, vlSelf->__PVT__cache_controller__DOT__cache_pkt);
    vlSelf->__PVT__cache_controller__DOT__state_n = 0;
    vlSelf->__PVT__cache_controller__DOT__state_r = 0;
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li = 0;
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo = 0;
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo = 0;
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li = 0;
    vlSelf->__PVT__cache_controller__DOT__op_data_lo = 0;
    VL_ZERO_RESET_W(67, vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo);
    vlSelf->__PVT__cache_controller__DOT__is_uc_op = 0;
    vlSelf->__PVT__cache_controller__DOT__set_cnt = 0;
    vlSelf->__PVT__cache_controller__DOT__set_clear = 0;
    vlSelf->__PVT__cache_controller__DOT__set_up = 0;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo = 0;
    vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo = 0;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 0;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li = 0;
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o = 0;
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o = 0;
    vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__0 = 0;
    vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__1 = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(67, vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0);
    vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op = 0;
    VL_ZERO_RESET_W(1024, vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo);
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_hed4cbd58__0 = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_tl_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li = 0;
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li);
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li);
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r = 0;
    VL_ZERO_RESET_W(76, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r);
    VL_ZERO_RESET_W(512, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_data_v_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_data_we_lo = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li = 0;
    VL_ZERO_RESET_W(179, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li = 0;
    VL_ZERO_RESET_W(179, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_bypass_v_li = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_mem_data = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tbuf_way_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tbuf_addr_lo = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0 = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out);
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n);
    VL_ZERO_RESET_W(84, vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0 = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out);
    VL_ZERO_RESET_W(84, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_id = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_data = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0 = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0 = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__track_mem_data_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n);
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i = 0;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable = 0;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable = 0;
    VL_ZERO_RESET_W(179, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r);
    VL_ZERO_RESET_W(179, vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r);
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__plru_decode__DOT____VdfgTmp_hd35049cc__0 = 0;
    VL_ZERO_RESET_W(144, vlSelf->__VdfgTmp_hc34d21c0__0);
    vlSelf->__VdfgTmp_h64d79b63__0 = 0;
    vlSelf->__VdfgTmp_hdbd625a5__0 = 0;
    vlSelf->__VdfgTmp_h406f6393__0 = 0;
}
