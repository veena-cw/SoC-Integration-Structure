// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h6e501fc3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h0b3c7e02_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hb616d184_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hee7d8c15_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h2dae9d4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hd3de95cc_0;

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__5\n"); );
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
