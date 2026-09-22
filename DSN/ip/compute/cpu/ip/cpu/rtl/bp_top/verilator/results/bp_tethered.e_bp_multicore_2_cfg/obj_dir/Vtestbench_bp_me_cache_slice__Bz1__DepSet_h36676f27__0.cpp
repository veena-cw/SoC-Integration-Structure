// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_out__pi87.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h23510110__0;
    VlWide<3>/*95:0*/ __Vtemp_had5bf377__0;
    VlWide<4>/*127:0*/ __Vtemp_hd9f7191d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2da170f8__0;
    VlWide<16>/*511:0*/ __Vtemp_hb3d08297__0;
    VlWide<4>/*127:0*/ __Vtemp_ha684adab__0;
    VlWide<16>/*511:0*/ __Vtemp_h5e13698b__0;
    VlWide<5>/*159:0*/ __Vtemp_h434fc121__0;
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id 
        = ((IData)(vlSelf->__VdfgTmp_h64d79b63__0) ? 
           (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__b__DOT__addr) 
                  >> 8U)) : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(1U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                       << 2U))] >> (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                             << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(2U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(1U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(2U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(4U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(3U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0 
        = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                 >> (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss 
        = (1U & ((IData)(((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) 
                          | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v))) 
                 & ((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_data_v_r) 
                        >> (0xfU & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                     << 2U) + (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 4U))))))) 
                    & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                       >> 8U))));
    __Vtemp_h23510110__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                              ? 
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                 >> 0x18U)))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                 ? 
                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                    >> 0x10U))
                                                                 : 
                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                    >> 0x10U)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                    ? 
                                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                     << 0x18U) 
                                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                       >> 8U))
                                                                    : 
                                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                     << 0x18U) 
                                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                       >> 8U)))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                       ? 
                                                                      vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U]
                                                                       : 
                                                                      vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U])))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                       ? 
                                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                        << 8U) 
                                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                          >> 0x18U))
                                                                       : 
                                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                        << 8U) 
                                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                          >> 0x18U))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                             ? 
                                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 0x10U))
                                                                             : 
                                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 0x10U))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                ? 
                                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 8U))
                                                                                : 
                                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 8U))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U]
                                                                                 : 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U]))))))))))));
    __Vtemp_h23510110__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                  >> 0x18U))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                  >> 0x18U)))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                     >> 0x10U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                     >> 0x10U)))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                        >> 8U))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                        >> 8U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                        ? 
                                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U]
                                                                        : 
                                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U])))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                         << 8U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                           >> 0x18U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                         << 8U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                           >> 0x18U))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 0x10U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 0x10U))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 8U))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U]
                                                                                 : 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U]))))))))))) 
                                        >> 0x20U));
    __Vtemp_had5bf377__0[2U] = ((((0x800U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                   ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                 >> 0x18U))
                                   : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                 >> 0x18U))) 
                                 << 0x18U) | ((0xff0000U 
                                               & (((0x400U 
                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                       >> 0x10U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((0x200U 
                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                       ? 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                          >> 8U))
                                                       : 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                          >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((0x100U 
                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                        ? 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U]
                                                        : 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U])))));
    __Vtemp_hd9f7191d__0[3U] = ((((0x8000U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                   ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                 >> 0x18U))
                                   : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                 >> 0x18U))) 
                                 << 0x18U) | ((0xff0000U 
                                               & (((0x4000U 
                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                       >> 0x10U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((0x2000U 
                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                       ? 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                          >> 8U))
                                                       : 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                          >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((0x1000U 
                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                        ? 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U]
                                                        : 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U])))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[0U] 
        = __Vtemp_h23510110__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[1U] 
        = __Vtemp_h23510110__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[2U] 
        = __Vtemp_had5bf377__0[2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[3U] 
        = __Vtemp_hd9f7191d__0[3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v 
        = ((~ (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
               >> 0xeU)) & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r) 
                            & (((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                    >> 8U)) & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0))) 
                               | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss) 
                                  | (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                       >> 0xdU) & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                                                   >> 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                               >> 0xeU))))) 
                                     | (((IData)((0U 
                                                  != 
                                                  (0x700U 
                                                   & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                            >> 8U)) 
                                        | (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                             >> 7U) 
                                            & ((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                   >> 8U)) 
                                               | (~ (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0)))) 
                                           | ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                               >> 6U) 
                                              & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                  >> 8U) 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0))))))))));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[3U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[3U];
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelf->__PVT__cache_data_v_lo = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r) 
                                      & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)) 
                                         | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel 
        = (0xffffU & (((0U == (0x10U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                 >> 1U)) 
                                        << 4U))) ? 0U
                        : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                           (((IData)(0xfU) + (0x70U 
                                              & ((IData)(
                                                         (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                          >> 1U)) 
                                                 << 4U))) 
                            >> 5U)] << ((IData)(0x20U) 
                                        - (0x10U & 
                                           ((IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 1U)) 
                                            << 4U))))) 
                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                         (3U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                         >> 1U)) >> 1U))] 
                         >> (0x10U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 1U)) 
                                      << 4U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel 
        = (0xffU & (((0U == (0x18U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                      << 3U))) ? 0U
                      : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                         (((IData)(7U) + (0x78U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                                  << 3U))))) 
                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                       (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                              >> 2U))] >> (0x18U & 
                                           ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                            << 3U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
        (3U & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                       >> 2U)))];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
        = (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                            (((IData)(0x3fU) + (0x40U 
                                                & ((IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 3U)) 
                                                   << 6U))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                                                                   (2U 
                                                                    & ((IData)(
                                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U)) 
                                                                       << 1U))])));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li 
        = (0xffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
                     ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                >> 6U)) : (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                   >> 6U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li];
    vlSelf->__PVT__cache_data_yumi_li = 0U;
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_data_yumi_li = vlSelf->__PVT__cache_data_v_lo;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_data_yumi_li = vlSelf->__PVT__cache_data_v_lo;
        }
    }
    if ((((~ (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
               == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
              & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
          & (IData)(vlSelf->__PVT__cache_controller__DOT__op_data_lo)) 
         & (~ (vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
               >> 2U)))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo 
            = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li) 
               & (IData)(vlSelf->__PVT__cache_data_v_lo));
        vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__0 
            = vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo;
        vlSelf->__PVT__cache_data_yumi_li = vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__0;
    } else if ((1U & ((~ (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                           == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
                          & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                      & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__op_data_lo))))) {
        vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__1 
            = vlSelf->__PVT__cache_data_v_lo;
        vlSelf->__PVT__cache_data_yumi_li = vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__1;
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li 
            = (0xffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo)
                         ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                    >> 6U)) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo)
                                                ? (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 6U))
                                                : (
                                                   (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                    << 0xaU) 
                                                   | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                      >> 0x16U)))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li 
            = (0xffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 0xaU) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                     >> 0x16U)));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = ((0xffe00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0);
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0x15U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  >> 0xbU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0x800003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0xaU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0x1fU));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
            = (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                           >> 1U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li 
            = (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li));
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][0U];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][1U];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][2U];
    __Vtemp_h2da170f8__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x4bU 
                                                           >= 
                                                           (0x7fU 
                                                            & ((IData)(0x13U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                           >> 0xeU))))))
                                                           ? 
                                                          (0x7ffffU 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(0x13U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                (((IData)(0x12U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))))) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                 (3U 
                                                                  & (((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))) 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))))
                                                           : 0U))) 
                                         << 0xeU) | (QData)((IData)(
                                                                    (0x3fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U))))));
    __Vtemp_h2da170f8__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x4bU 
                                                            >= 
                                                            (0x7fU 
                                                             & ((IData)(0x13U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 0xeU))))))
                                                            ? 
                                                           (0x7ffffU 
                                                            & (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                 (((IData)(0x12U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x13U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))))) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                  (3U 
                                                                   & (((IData)(0x13U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))))
                                                            : 0U))) 
                                          << 0xeU) 
                                         | (QData)((IData)(
                                                           (0x3fc0U 
                                                            & ((IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 6U)) 
                                                               << 6U))))) 
                                        >> 0x20U));
    __Vtemp_hb3d08297__0[0U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 << 8U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel));
    __Vtemp_hb3d08297__0[1U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[2U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[3U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[4U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 << 0x10U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel));
    __Vtemp_hb3d08297__0[5U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[6U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[7U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[8U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel;
    __Vtemp_hb3d08297__0[9U] = (- (IData)((IData)((
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x12U) 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                      >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xaU] = (- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                        >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xbU] = (- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                        >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xcU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in);
    __Vtemp_hb3d08297__0[0xdU] = (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                          >> 0x20U));
    __Vtemp_hb3d08297__0[0xeU] = (IData)((- (QData)((IData)(
                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                              >> 0x12U) 
                                                             & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                                                >> 0x3fU))))));
    __Vtemp_hb3d08297__0[0xfU] = (IData)(((- (QData)((IData)(
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                               >> 0x12U) 
                                                              & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                                                 >> 0x3fU))))) 
                                          >> 0x20U));
    if ((0x1000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = ((2U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                            >> (3U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 0xeU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                                             >> (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 0xeU))))));
        __Vtemp_ha684adab__0[1U] = 0U;
        __Vtemp_ha684adab__0[2U] = 0U;
        __Vtemp_ha684adab__0[3U] = 0U;
    } else if ((0x800U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = __Vtemp_h2da170f8__0[0U];
        __Vtemp_ha684adab__0[1U] = __Vtemp_h2da170f8__0[1U];
        __Vtemp_ha684adab__0[2U] = 0U;
        __Vtemp_ha684adab__0[3U] = 0U;
    } else if ((0x20000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]);
        __Vtemp_ha684adab__0[1U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]);
        __Vtemp_ha684adab__0[2U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]);
        __Vtemp_ha684adab__0[3U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]);
    } else {
        __Vtemp_ha684adab__0[0U] = __Vtemp_hb3d08297__0[
            (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                     >> 0x11U))];
        __Vtemp_ha684adab__0[1U] = __Vtemp_hb3d08297__0[
            ((IData)(1U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
        __Vtemp_ha684adab__0[2U] = __Vtemp_hb3d08297__0[
            ((IData)(2U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
        __Vtemp_ha684adab__0[3U] = __Vtemp_hb3d08297__0[
            ((IData)(3U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
    }
    if ((0U != (0x11810U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) {
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            = __Vtemp_ha684adab__0[0U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U] 
            = __Vtemp_ha684adab__0[1U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[2U] 
            = __Vtemp_ha684adab__0[2U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[3U] 
            = __Vtemp_ha684adab__0[3U];
    } else {
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[2U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[3U] = 0U;
    }
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__fsm_last_o) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i 
        = ((IData)(vlSelf->__PVT__cache_data_v_lo) 
           & (IData)(vlSelf->__PVT__cache_data_yumi_li));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x18U) | ((0xff0000U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                      << 8U)) | (0xffU 
                                                 & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[1U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x18U) | ((0xff0000U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                      << 8U)) | (0xffU 
                                                 & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[2U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x18U) | ((0xff0000U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                      << 8U)) | (0xffU 
                                                 & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[3U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x18U) | ((0xff0000U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
                                      << 8U)) | (0xffU 
                                                 & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[4U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[5U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[6U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[7U] 
        = ((vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[8U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[9U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xaU] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xbU] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0x10U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0x11U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0x12U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[2U];
    vlSelf->__PVT__cache_controller__DOT__mem_rev_data_bus_pack__DOT__data_repl_lo[0x13U] 
        = vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result = 0ULL;
    if ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_mem_data 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_mem_data 
            = ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel)) 
               << 0x20U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result 
            = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result 
               >> 0x20U);
    }
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque)));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
                        = ((~ (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i)) 
                           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
                    = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li) 
                       | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r));
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r)) 
                 | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_bypass_v_li 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0) 
           & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) 
              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o)));
    __Vtemp_h5e13698b__0[0U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[1U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[2U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[3U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[4U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[5U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[6U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[7U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    if ((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_h5e13698b__0[8U] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[9U] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[0xaU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[0xbU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
    } else {
        __Vtemp_h5e13698b__0[8U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[9U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[0xaU] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[0xbU] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
    }
    __Vtemp_h5e13698b__0[0xcU] = (IData)(((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                           ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                           : (((QData)((IData)(
                                                               vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))));
    __Vtemp_h5e13698b__0[0xdU] = (IData)((((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                            ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                            : (((QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))) 
                                          >> 0x20U));
    __Vtemp_h5e13698b__0[0xeU] = (IData)(((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                           ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                           : (((QData)((IData)(
                                                               vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))));
    __Vtemp_h5e13698b__0[0xfU] = (IData)((((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                            ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                            : (((QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))) 
                                          >> 0x20U));
    __Vtemp_h434fc121__0[0U] = ((__Vtemp_h5e13698b__0[
                                 (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                          >> 0x11U))] 
                                 << 0x10U) | (0xffffU 
                                              & (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0xff00U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U))))))))))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o) 
                                                                                << 0x10U) 
                                                                               | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r)))))))) 
                                                         >> 
                                                         (0x30U 
                                                          & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                             >> 0xfU))))));
    __Vtemp_h434fc121__0[1U] = ((__Vtemp_h5e13698b__0[
                                 (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                          >> 0x11U))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(1U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    __Vtemp_h434fc121__0[2U] = ((__Vtemp_h5e13698b__0[
                                 ((IData)(1U) + (0xcU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x11U)))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(2U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    __Vtemp_h434fc121__0[3U] = ((__Vtemp_h5e13698b__0[
                                 ((IData)(2U) + (0xcU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x11U)))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    if ((0x20000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__VdfgTmp_hc34d21c0__0[0U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                               << 0x10U) 
                                              | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r));
        vlSelf->__VdfgTmp_hc34d21c0__0[1U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[2U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[3U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[4U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] 
                                              >> 0x10U);
    } else {
        vlSelf->__VdfgTmp_hc34d21c0__0[0U] = __Vtemp_h434fc121__0[0U];
        vlSelf->__VdfgTmp_hc34d21c0__0[1U] = __Vtemp_h434fc121__0[1U];
        vlSelf->__VdfgTmp_hc34d21c0__0[2U] = __Vtemp_h434fc121__0[2U];
        vlSelf->__VdfgTmp_hc34d21c0__0[3U] = __Vtemp_h434fc121__0[3U];
        vlSelf->__VdfgTmp_hc34d21c0__0[4U] = (__Vtemp_h5e13698b__0[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              >> 0x10U);
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 4U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li)))) 
                      & vlSelf->__VdfgTmp_hc34d21c0__0[0U]));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] << 2U) 
           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r)
               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U] 
        = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
            << 0x12U) | ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                          >> 0x1eU) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                                       << 2U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U] 
        = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                 >> 0x20U)) << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | VL_STREAML_FAST_III(4, (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v), 0)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss 
        = (1U & ((IData)(((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) 
                          | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v))) 
                 & ((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_data_v_r) 
                        >> (0xfU & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                     << 2U) + (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 4U))))))) 
                    & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                       >> 8U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v 
        = ((~ (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
               >> 0xeU)) & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r) 
                            & (((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                    >> 8U)) & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0))) 
                               | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_miss) 
                                  | (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                       >> 0xdU) & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                                                   >> 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                               >> 0xeU))))) 
                                     | (((IData)((0U 
                                                  != 
                                                  (0x700U 
                                                   & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                            >> 8U)) 
                                        | (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                             >> 7U) 
                                            & ((~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                   >> 8U)) 
                                               | (~ (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0)))) 
                                           | ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                               >> 6U) 
                                              & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                  >> 8U) 
                                                 & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0))))))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelf->__PVT__cache_data_v_lo = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r) 
                                      & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)) 
                                         | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] << 2U) 
           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r)
               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[0U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[1U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[1U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[2U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U] 
        = ((vlSelf->__VdfgTmp_hc34d21c0__0[2U] >> 0x1eU) 
           | (vlSelf->__VdfgTmp_hc34d21c0__0[3U] << 2U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U] 
        = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
            << 0x12U) | ((vlSelf->__VdfgTmp_hc34d21c0__0[3U] 
                          >> 0x1eU) | (vlSelf->__VdfgTmp_hc34d21c0__0[4U] 
                                       << 2U)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U] 
        = (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                 >> 0x20U)) << 0x12U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li 
        = (0xffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
                     ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                >> 6U)) : (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                   >> 6U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li];
    vlSelf->__PVT__cache_data_yumi_li = 0U;
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_data_yumi_li = vlSelf->__PVT__cache_data_v_lo;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_data_yumi_li = vlSelf->__PVT__cache_data_v_lo;
        }
    }
    if ((((~ (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
               == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
              & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
          & (IData)(vlSelf->__PVT__cache_controller__DOT__op_data_lo)) 
         & (~ (vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
               >> 2U)))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo 
            = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li) 
               & (IData)(vlSelf->__PVT__cache_data_v_lo));
        vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__0 
            = vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo;
        vlSelf->__PVT__cache_data_yumi_li = vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__0;
    } else if ((1U & ((~ (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                           == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
                          & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                      & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__op_data_lo))))) {
        vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__1 
            = vlSelf->__PVT__cache_data_v_lo;
        vlSelf->__PVT__cache_data_yumi_li = vlSelf->cache_controller__DOT____Vlvbound_h7ca85757__1;
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li 
            = (0xffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo)
                         ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                    >> 6U)) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo)
                                                ? (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 6U))
                                                : (
                                                   (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                    << 0xaU) 
                                                   | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                      >> 0x16U)))));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li 
            = (0xffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 0xaU) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                     >> 0x16U)));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = ((0xffe00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0);
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U] 
            = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0x15U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  >> 0xbU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0x800003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0xaU));
        vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
            = vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                  << 0x1fU));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_li[2U] 
            = (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vlvbound_hffbfae0e__0 
                           >> 1U));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li 
            = (((IData)((0U != (0x1c010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) 
                & (IData)(vlSelf->__PVT__cache_data_v_lo)) 
               & (IData)(vlSelf->__PVT__cache_data_yumi_li));
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][0U];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][1U];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc237d63c__0[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li][2U];
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__fsm_last_o) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_v_lo));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_data_yumi_li)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i 
        = ((IData)(vlSelf->__PVT__cache_data_v_lo) 
           & (IData)(vlSelf->__PVT__cache_data_yumi_li));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque)));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
                        = ((~ (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i)) 
                           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n 
                    = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li) 
                       | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r));
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o 
        = (1U & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r)) 
                 | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
           & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_bypass_v_li 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0) 
           & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) 
              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i 
        = (0xffffU & ((- (IData)((((0x1fffffffU & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                   == (0x1fffffffU 
                                       & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 4U)))) 
                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li)))) 
                      & vlSelf->__VdfgTmp_hc34d21c0__0[0U]));
}
