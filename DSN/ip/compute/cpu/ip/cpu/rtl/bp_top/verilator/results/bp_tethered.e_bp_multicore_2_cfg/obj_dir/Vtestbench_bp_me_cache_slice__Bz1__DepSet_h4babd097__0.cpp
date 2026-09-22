// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr 
        = ((0xcffU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr)) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x50U 
                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr)))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask 
        = (1U | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask) 
                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r) 
                      >> 1U)) << 2U) | (2U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r) 
                                                   >> 1U))) 
                                              << 1U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_data 
        = ((((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r)) 
             & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask) 
                >> 2U)) << 2U) | ((2U & (((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r)) 
                                          << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask))) 
                                  | (1U & ((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r) 
                                               >> 1U)) 
                                           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out 
                        = (0x78U | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_data));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out 
                    = ((7U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out)) 
                       | (0x78U & ((- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0x8010U 
                                                        & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))))) 
                                   << 3U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out 
                    = ((0x78U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out)) 
                       | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_data));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out 
                = (0x78U | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_data));
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v 
        = ((0xeffU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v)) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v 
        = ((0xfbfU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v)) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__4(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__4\n"); );
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

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
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

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xcffU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr)) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x50U 
                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr)))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xeffU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v)) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfbfU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v)) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__9(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__9\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h6b27aa5e__0;
    // Body
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)));
    __Vtemp_h6b27aa5e__0 = ((0x2000U & ((((((0U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                 >> 0x11U))) 
                                            | (1U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                   >> 0x11U)))) 
                                           | (2U == 
                                              (0x3fU 
                                               & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                  >> 0x11U)))) 
                                          | (3U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                 >> 0x11U)))) 
                                         << 0xdU) | 
                                        (0xffffe000U 
                                         & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                                            << 9U)))) 
                            | ((((0xcU == (0x3fU & 
                                           (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                            >> 0x11U))) 
                                 | (0xdU == (0x3fU 
                                             & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                >> 0x11U)))) 
                                << 0xcU) | ((((((((
                                                   (((0U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U))) 
                                                     | (1U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                            >> 0x11U)))) 
                                                    | (2U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U)))) 
                                                   | (3U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U)))) 
                                                  | (4U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U)))) 
                                                | (6U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                       >> 0x11U)))) 
                                               | (7U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                      >> 0x11U)))) 
                                              | (0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                     >> 0x11U)))) 
                                             << 0xbU) 
                                            | (((((((8U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U))) 
                                                    | (9U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U)))) 
                                                << 0xaU) 
                                               | (((0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U))) 
                                                   << 9U) 
                                                  | (((0x11U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U))) 
                                                      << 8U) 
                                                     | (((0x12U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                              >> 0x11U))) 
                                                         << 7U) 
                                                        | (((0x13U 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                 >> 0x11U))) 
                                                            << 6U) 
                                                           | (((0x18U 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                    >> 0x11U))) 
                                                               << 5U) 
                                                              | (((0x19U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                       >> 0x11U))) 
                                                                  << 4U) 
                                                                 | (((0x1aU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                          >> 0x11U))) 
                                                                     << 3U) 
                                                                    | (((0x1bU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                             >> 0x11U))) 
                                                                        << 2U) 
                                                                       | (((0x1cU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                                >> 0x11U))) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                                                                                >> 0xeU))))))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x18001fU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (__Vtemp_h6b27aa5e__0 << 5U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v 
        = ((0xfe0U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v)) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
               << 4U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__enc_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfe0U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v)) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
               << 4U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__enc_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v) 
                  >> 5U)) | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v) 
                                   >> 4U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v) 
                 >> 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr 
        = ((0xfe0U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr)) 
           | (0x10U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v) 
                       << 3U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr 
        = ((0xfbfU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr)) 
           | (0x40U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__v) 
                       << 3U)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__4(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__4\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo 
        = (1U | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo) 
                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                      >> 1U)) << 2U) | (2U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                   >> 1U))) 
                                              << 1U))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h6e501fc3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h0b3c7e02_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hb616d184_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hee7d8c15_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h2dae9d4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hd3de95cc_0;

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx1];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__6\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
                  >> 5U)) | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
                                   >> 4U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
                 >> 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xfe0U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr)) 
           | (0x10U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
                       << 3U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xfbfU & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr)) 
           | (0x40U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
                       << 3U)));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7\n"); );
    // Body
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__plru_decode__DOT____VdfgTmp_hd35049cc__0 
        = (1U & (~ ((IData)(vlSelf->__VdfgTmp_h64d79b63__0) 
                    & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr) 
                       >> 8U))));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__9(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__9\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_id 
        = ((0U == (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__enc_lo) 
                    - (IData)(1U)) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__enc_lo)))
            ? (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
                     >> 8U)) : 0U);
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__10(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__10\n"); );
    // Body
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_data_out;
    } else if ((0x4000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li = 0U;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li 
            = ((7U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li)) 
               | (0x78U & ((- (IData)((IData)((0U != 
                                               (0x8010U 
                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))))) 
                           << 3U)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li 
            = ((0x78U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li)) 
               | ((0xfffffffcU & (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__plru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                   << 2U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo))) 
                  | ((0xfffffffeU & (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__plru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                      << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo))) 
                     | (1U & ((~ ((IData)(vlSelf->__VdfgTmp_h64d79b63__0) 
                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr) 
                                     >> 9U))) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo))))));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__11(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__11\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5f4b7619__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2472735__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf1f4179__0;
    VlWide<3>/*95:0*/ __Vtemp_hf85722b2__0;
    VlWide<3>/*95:0*/ __Vtemp_hca20534e__0;
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
            = ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                ? 0U : ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                         ? ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                             ? 0U : ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i)
                                      ? 0U : 0xaU))
                         : ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                             ? 0xaU : 9U)));
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                        = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                           | (0xfU & (- (IData)((1U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                        = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                           | (0xf0U & ((- (IData)((1U 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                      >> 1U)))) 
                                       << 4U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                        = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                           | (0xf00U & ((- (IData)(
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                       >> 2U)))) 
                                        << 8U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                        = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                           | (0xf000U & ((- (IData)(
                                                    (1U 
                                                     & (((IData)(1U) 
                                                         << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                        >> 3U)))) 
                                         << 0xcU)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                        = (0x7ffffU & (- (IData)((1U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0);
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xfff7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0) 
                              << 0x13U));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0) 
                              << 0x14U));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                        = (0x7ffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                     >> 1U)))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                              << 0x15U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                              >> 0xbU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffeffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0) 
                              << 8U));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0) 
                              << 9U));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                        = (0x7ffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                     >> 2U)))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                              << 0xaU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xdfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0) 
                              << 0x1dU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0) 
                              << 0x1eU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                        = (0x7ffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                     >> 3U)))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                              << 0x1fU));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc765b93c__0 
                                          >> 1U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xbffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h06783c54__0) 
                                          << 0x12U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h05f31ad1__0) 
                                          << 0x13U)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n 
                    = ((0x100U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t))
                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_id)
                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
                    = ((((6U >= ((IData)(3U) + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))) 
                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                            >> ((IData)(3U) + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))) 
                        & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                           >> (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))
                        ? 3U : 8U);
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
                    = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li)
                        ? 9U : 6U);
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                    = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                       | (0xfU & (- (IData)((1U & ((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                    = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                       | (0xf0U & ((- (IData)((1U & 
                                               (((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                >> 1U)))) 
                                   << 4U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                    = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                       | (0xf00U & ((- (IData)((1U 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                   >> 2U)))) 
                                    << 8U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                    = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                       | (0xf000U & ((- (IData)((1U 
                                                 & (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                    >> 3U)))) 
                                     << 0xcU)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                    = (0x7ffffU & (- (IData)((1U & 
                                              ((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0 
                    = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xfff7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0) 
                          << 0x13U));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0 
                    = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0) 
                          << 0x14U));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                    = (0x7ffffU & (- (IData)((1U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                               >> 1U)))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                          << 0x15U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                          >> 0xbU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 1U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffffeffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0) 
                          << 8U));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 1U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0) 
                          << 9U));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                    = (0x7ffffU & (- (IData)((1U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                               >> 2U)))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                          << 0xaU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 2U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xdfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0) 
                          << 0x1dU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 2U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0) 
                          << 0x1eU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                    = (0x7ffffU & (- (IData)((1U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                               >> 3U)))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                          << 0x1fU));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h30bb5e30__0 
                                      >> 1U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 3U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xbffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc9a469d5__0) 
                                      << 0x12U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0 
                    = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             >> 3U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hc97a537c__0) 
                                      << 0x13U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li)
                    ? ((IData)((0U != (0x2600U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)))
                        ? 9U : 6U) : 5U);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                   | (0xfU & (- (IData)((1U & ((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                   | (0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                 >> 1U)))) 
                               << 4U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                   | (0xf00U & ((- (IData)((1U & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                  >> 2U)))) 
                                << 8U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o 
                = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_w_mask_o)) 
                   | (0xf000U & ((- (IData)((1U & (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                   >> 3U)))) 
                                 << 0xcU)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                = (0x7ffffU & (- (IData)((1U & ((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                   | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0 
                = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = ((0xfff7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0) 
                      << 0x13U));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0 
                = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = ((0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0) 
                      << 0x14U));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                = (0x7ffffU & (- (IData)((1U & (((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                >> 1U)))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                      << 0x15U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                      >> 0xbU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 1U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xfffffeffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0) 
                      << 8U));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 1U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0) 
                      << 9U));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                = (0x7ffffU & (- (IData)((1U & (((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                >> 2U)))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                      << 0xaU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 2U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xdfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0) 
                      << 0x1dU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 2U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0) 
                      << 0x1eU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                = (0x7ffffU & (- (IData)((1U & (((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                                >> 3U)))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                      << 0x1fU));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                   | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h031f0166__0 
                                  >> 1U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 3U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                = ((0xbffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                   | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb1696a82__0) 
                                  << 0x12U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0 
                = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                         >> 3U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                   | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb17ec8eb__0) 
                                  << 0x13U)));
        } else {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n 
                = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss)
                    ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)
                    : ((0x100U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t))
                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__invalid_way_id)
                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li)
                    ? ((((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss)) 
                         & ((6U >= ((IData)(3U) + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))) 
                            & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                               >> ((IData)(3U) + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n))))) 
                        & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                           >> (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))
                        ? 3U : 6U) : 4U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
            = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li)
                    ? 5U : 3U) : 9U);
        if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = (0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0 
                = (1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
                   | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0) 
                      << 0x13U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = (0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0 
                = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v) 
                         >> 1U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
                = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]);
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0) 
                                   << 8U)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = (0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0 
                = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v) 
                         >> 2U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
                   | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0) 
                                     << 0x1dU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                = (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0 
                = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v) 
                         >> 3U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
                = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]);
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
                = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
                   | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hb3c1add3__0) 
                                  << 0x12U)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n 
            = (3U & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                      ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                 >> 0xeU)) : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
            = ((((~ (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                     >> 8U)) & ((6U >= ((IData)(3U) 
                                        + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n))) 
                                & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                   >> ((IData)(3U) 
                                       + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n))))) 
                & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                   >> (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n)))
                ? 3U : 9U);
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0 
            = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
               & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
            = ((0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
               | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0) 
                  << 0x14U));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0 
            = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
               & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
            = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]) 
               | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0) 
                  << 0x13U));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 1U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
            = ((0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
               | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0) 
                  << 9U));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 1U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U] 
            = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U]);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
            = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
               | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0) 
                               << 8U)));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 2U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
            = ((0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
               | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0) 
                  << 0x1eU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 2U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
            = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]) 
               | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0) 
                                 << 0x1dU)));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 3U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
            = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
               | (0xfffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10f32d24__0) 
                              << 0x13U)));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0 
            = (IData)((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                        >> 3U) & (0U != (0x300U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U] 
            = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U]);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U] 
            = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U]) 
               | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h1051d65b__0) 
                              << 0x12U)));
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n 
            = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))
                ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op)
                    ? 1U : ((1U & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 6U) | ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                               >> 7U) 
                                              & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                 >> 8U))))
                             ? 2U : 4U)) : 0U);
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_w_mask_out[2U];
    } else {
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
            = (0x1fffffU & (- (IData)((1U & ((IData)(1U) 
                                             << (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                 >> 0x1eU))))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U] 
            = ((0xffe00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U]) 
               | vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0);
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
            = (0x1fffffU & (- (IData)((1U & (((IData)(1U) 
                                              << (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                  >> 0x1eU)) 
                                             >> 1U)))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U] 
            = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
                  << 0x15U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
                  >> 0xbU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
            = (0x1fffffU & (- (IData)((1U & (((IData)(1U) 
                                              << (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                  >> 0x1eU)) 
                                             >> 2U)))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x800003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
                  << 0xaU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
            = (0x1fffffU & (- (IData)((1U & (((IData)(1U) 
                                              << (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                  >> 0x1eU)) 
                                             >> 3U)))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
                  << 0x1fU));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U] 
            = (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_h5855f2dd__0 
                           >> 1U));
    }
    __Vtemp_h5f4b7619__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h5f4b7619__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hc2472735__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                            ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                               >> 4U)
                                            : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                             >> 3U)
                                          : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                         ? 
                                                        (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                            ? 
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                            >> 1U)
                                                            : 
                                                           (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                             ? 
                                                            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U]
                                                             : 
                                                            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U]))))));
    __Vtemp_hdf1f4179__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                >> 9U)
                                             : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                ? (
                                                   vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                   >> 8U)
                                                : (
                                                   vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_hc2472735__0[2U])))));
    __Vtemp_hf85722b2__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                              ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xeU)
                                              : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                    ? 
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                >> 0xbU)
                                             : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hdf1f4179__0[2U])))));
    __Vtemp_hca20534e__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x13U)
                                               : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x10U)
                                               : (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hf85722b2__0[2U])))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_h5f4b7619__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_h5f4b7619__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = __Vtemp_hca20534e__0[2U];
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__12(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__12\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                        = ((0x78U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                     << 3U)) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                    = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss)
                          ? 0U : (0xfU & ((IData)(1U) 
                                          << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))) 
                        << 3U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                = ((0x78U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             << 3U)) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                   << 3U);
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__13(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__13\n"); );
    // Body
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out;
    } else if ((0x4000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li = 0x7fU;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = ((7U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li)) 
               | (((- (IData)((IData)((0U != (0x8010U 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))))) 
                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)) 
                  << 3U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = ((0x78U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li)) 
               | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1\n"); );
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
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h6b27aa5e__0;
    // Body
    __Vtemp_h6b27aa5e__0 = ((0x2000U & ((((((0U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                 >> 0x11U))) 
                                            | (1U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                   >> 0x11U)))) 
                                           | (2U == 
                                              (0x3fU 
                                               & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                  >> 0x11U)))) 
                                          | (3U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                 >> 0x11U)))) 
                                         << 0xdU) | 
                                        (0xffffe000U 
                                         & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                                            << 9U)))) 
                            | ((((0xcU == (0x3fU & 
                                           (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                            >> 0x11U))) 
                                 | (0xdU == (0x3fU 
                                             & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                >> 0x11U)))) 
                                << 0xcU) | ((((((((
                                                   (((0U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U))) 
                                                     | (1U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                            >> 0x11U)))) 
                                                    | (2U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U)))) 
                                                   | (3U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U)))) 
                                                  | (4U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U)))) 
                                                | (6U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                       >> 0x11U)))) 
                                               | (7U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                      >> 0x11U)))) 
                                              | (0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                     >> 0x11U)))) 
                                             << 0xbU) 
                                            | (((((((8U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U))) 
                                                    | (9U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U)))) 
                                                   | (0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                          >> 0x11U)))) 
                                                  | (0xbU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                         >> 0x11U)))) 
                                                 | (0xdU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U)))) 
                                                << 0xaU) 
                                               | (((0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                        >> 0x11U))) 
                                                   << 9U) 
                                                  | (((0x11U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                           >> 0x11U))) 
                                                      << 8U) 
                                                     | (((0x12U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                              >> 0x11U))) 
                                                         << 7U) 
                                                        | (((0x13U 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                 >> 0x11U))) 
                                                            << 6U) 
                                                           | (((0x18U 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                    >> 0x11U))) 
                                                               << 5U) 
                                                              | (((0x19U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                       >> 0x11U))) 
                                                                  << 4U) 
                                                                 | (((0x1aU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                          >> 0x11U))) 
                                                                     << 3U) 
                                                                    | (((0x1bU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                             >> 0x11U))) 
                                                                        << 2U) 
                                                                       | (((0x1cU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                                                                >> 0x11U))) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                                                                                >> 0xeU))))))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x18001fU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (__Vtemp_h6b27aa5e__0 << 5U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx1];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx1];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo) 
           & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i) 
              & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)))));
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                        = ((0x78U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                                     << 3U)) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                    = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss)
                          ? 0U : (0xfU & ((IData)(1U) 
                                          << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)))) 
                        << 3U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                = ((0x78U & (((IData)(1U) << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n)) 
                             << 3U)) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_lru_mask));
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out 
                = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode) 
                   << 3U);
        }
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__stat_mem_w_mask_out;
    } else if ((0x4000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li = 0x7fU;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = ((7U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li)) 
               | (((- (IData)((IData)((0U != (0x8010U 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))))) 
                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)) 
                  << 3U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li 
            = ((0x78U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li)) 
               | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__plru_decode_mask_lo));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx2];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx2];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx2];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo) 
           & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i) 
              & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)))));
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx3];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx3];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx3];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo) 
           & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i) 
              & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)))));
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he3075254__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5899be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hff61d741__0;
    // Body
    __Vtableidx4 = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_h6e501fc3_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo 
        = Vtestbench__ConstPool__TABLE_h0b3c7e02_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2dae9d4f_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_hd3de95cc_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_hb616d184_0[__Vtableidx4];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_hee7d8c15_0[__Vtableidx4];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
                                           << 0xaU) 
                                          | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                             >> 0x16U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el0_valid)))) 
                      & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                          << 0x1eU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                       >> 2U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                         >> 1U)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo 
            = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                     | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_empty_lo))));
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux1_sel) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    __Vtemp_he3075254__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                  >> 0xaU))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                  >> 0xaU))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                 : 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                     >> 2U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   << 0x1eU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                     >> 2U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                       >> 0x18U))
                                                                    : 
                                                                   ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                        >> 0x1aU))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                        >> 0x1aU))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0x12U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0xeU) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0x12U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                           >> 0xaU))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         << 0x16U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                           >> 0xaU)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                             ? 
                                                                            vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                ? 
                                                                               ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))));
    __Vtemp_he3075254__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                               ? 
                                                              ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                << 0x18U) 
                                                               | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                                  >> 8U))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                ? 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                   >> 0xaU))
                                                                : 
                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                   >> 0xaU))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc34d21c0__0[2U]
                                                                  : 
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                   ? 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                      >> 2U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                        >> 0x18U))
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                         >> 0x1aU))
                                                                      : 
                                                                     ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                                       << 6U) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                         >> 0x1aU))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0x12U))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0x12U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                            >> 0xaU))
                                                                         : 
                                                                        ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                            >> 0xaU)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                              ? 
                                                                             vlSelf->__VdfgTmp_hc34d21c0__0[1U]
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                               ? 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x1aU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x1aU)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__VdfgTmp_hc34d21c0__0[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                                                >> 0x12U)))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hd5899be8__0[2U] = ((0xff0000U & (((0x400U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[3U]
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x200U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x100U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                                                       >> 0x12U)))))));
    __Vtemp_hff61d741__0[3U] = ((0xff0000U & (((0x4000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? vlSelf->__VdfgTmp_hc34d21c0__0[4U]
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                       >> 2U)))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((0x2000U 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                 ? 
                                                ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                  << 8U) 
                                                 | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    >> 0x18U))
                                                 : 
                                                ((0x2000U 
                                                  & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                  ? 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     >> 0x1aU))
                                                  : 
                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     >> 0x1aU)))) 
                                               << 8U)) 
                                   | (0xffU & ((0x1000U 
                                                & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                ? (
                                                   (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                                                      >> 0x10U))
                                                : (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                       >> 0x12U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U] 
        = __Vtemp_he3075254__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U] 
        = __Vtemp_he3075254__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U] 
        = ((((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                               >> 8U)) : ((0x800U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hd5899be8__0[2U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U] 
        = ((((0x8000U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
              ? ((vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                  << 0x18U) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                               >> 8U)) : ((0x8000U 
                                           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
                                                 >> 0xaU))
                                           : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                 >> 0xaU)))) 
            << 0x18U) | __Vtemp_hff61d741__0[3U]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_v_lo)
            : (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[1U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[2U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[3U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[4U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[5U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[6U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[7U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[8U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[9U] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xaU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xbU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xcU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xdU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[1U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[2U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
            = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                << 0xeU) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[3U] 
                            >> 0x12U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
            = (((QData)((IData)(((8U & ((IData)(1U) 
                                        << (3U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                  ? (0xffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                >> 2U))
                                  : 0U))) << 0x30U) 
               | (((QData)((IData)(((((4U & ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                       ? (0xffffU & 
                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                           >> 2U)) : 0U) 
                                     << 0x10U) | ((2U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                      >> 2U))
                                                   : 0U)))) 
                   << 0x10U) | (QData)((IData)(((1U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U])))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[0U] 
                                                    >> 2U))
                                                 : 0U)))));
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li));
}
