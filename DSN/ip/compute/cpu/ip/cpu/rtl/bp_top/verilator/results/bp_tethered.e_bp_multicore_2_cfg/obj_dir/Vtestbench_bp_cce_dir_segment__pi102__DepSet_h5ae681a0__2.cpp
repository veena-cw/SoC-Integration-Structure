// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_cce_dir_segment__pi102.h"

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__7(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__7\n"); );
    // Body
    vlSelf->__PVT__sharers_hits_n = vlSelf->__PVT__sharers_hits_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_hits_n = ((2U 
                                                  & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                                 | (((0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__addr_r 
                                                                 >> 0xcU))) 
                                                     == 
                                                     ((0x16fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__way_r)))))))
                                                       ? 
                                                      (0xfffffU 
                                                       & (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(3U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r))))))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->__Vcellout__directory__data_o[
                                                            (((IData)(0x16U) 
                                                              + 
                                                              (0x1ffU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r)))))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                          | (vlSelf->__Vcellout__directory__data_o[
                                                             (((IData)(3U) 
                                                               + 
                                                               (0x1ffU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r))))))))))
                                                       : 0U)) 
                                                    & (0U 
                                                       != 
                                                       ((0x16fU 
                                                         >= 
                                                         (0x1ffU 
                                                          & (((IData)(0xb8U) 
                                                              * (IData)(vlSelf->__PVT__lce_r)) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x17U) 
                                                                 * (IData)(vlSelf->__PVT__way_r))))))
                                                         ? 
                                                        (7U 
                                                         & (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->__Vcellout__directory__data_o[
                                                              (((IData)(2U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))))) 
                                                            | (vlSelf->__Vcellout__directory__data_o[
                                                               (0xfU 
                                                                & ((((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r))))))))
                                                         : 0U))));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->__PVT__cnt) 
                                                      << 1U)))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->__PVT__sharers_hits)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U)))));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U))))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & ((IData)(vlSelf->__PVT__sharers_hits) 
                                                       >> 1U)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__cnt) 
                                                        << 1U))))));
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
            vlSelf->__PVT__sharers_hits_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__8(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__8\n"); );
    // Body
    vlSelf->__PVT__sharers_ways_n = vlSelf->__PVT__sharers_ways_r;
    vlSelf->__PVT__sharers_coh_states_n = vlSelf->__PVT__sharers_coh_states_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_ways_n = ((0x38U 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (IData)(vlSelf->__PVT__way_r));
                vlSelf->__PVT__sharers_coh_states_n 
                    = ((0x38U & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | ((0x16fU >= (0x1ffU & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                           ? (7U & (((0U == (0x1fU 
                                             & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                      ? 0U : (vlSelf->__Vcellout__directory__data_o[
                                              (((IData)(2U) 
                                                + (0x1ffU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))))) 
                                    | (vlSelf->__Vcellout__directory__data_o[
                                       (0xfU & ((((IData)(0xb8U) 
                                                  * (IData)(vlSelf->__PVT__lce_r)) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSelf->__PVT__way_r)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0xb8U) 
                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSelf->__PVT__way_r))))))))
                           : 0U));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & (IData)(vlSelf->__PVT__sharers_ways));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(vlSelf->__PVT__cnt) 
                                                         << 1U))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(vlSelf->__PVT__cnt) 
                                                            << 1U))))));
            }
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_ways) 
                                                >> 3U));
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & (IData)(vlSelf->__PVT__sharers_coh_states));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U))))));
            }
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_coh_states) 
                                                >> 3U));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U)))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__cnt) 
                                                          << 1U)))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            ((IData)(vlSelf->__PVT__cnt) 
                                                             << 1U)))))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__cnt) 
                                                    << 1U)))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U)))))));
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
            vlSelf->__PVT__sharers_ways_n = 0U;
            vlSelf->__PVT__sharers_coh_states_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__1(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__1\n"); );
    // Body
    if (VL_UNLIKELY((((0x21U == (IData)(vlSelf->__PVT__cnt)) 
                      & (IData)(vlSelf->__PVT__cnt_inc)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.cce.t.cce.directory.dcache.dcache_dir_segment.counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__4(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__4\n"); );
    // Body
    vlSelf->__PVT__sharers_ways_n = vlSelf->__PVT__sharers_ways_r;
    vlSelf->__PVT__sharers_hits_n = vlSelf->__PVT__sharers_hits_r;
    vlSelf->__PVT__sharers_coh_states_n = vlSelf->__PVT__sharers_coh_states_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_ways_n = ((0x38U 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (IData)(vlSelf->__PVT__way_r));
                vlSelf->__PVT__sharers_hits_n = ((2U 
                                                  & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                                 | (((0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__addr_r 
                                                                 >> 0xcU))) 
                                                     == 
                                                     ((0x16fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__way_r)))))))
                                                       ? 
                                                      (0xfffffU 
                                                       & (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(3U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r))))))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->__Vcellout__directory__data_o[
                                                            (((IData)(0x16U) 
                                                              + 
                                                              (0x1ffU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r)))))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                          | (vlSelf->__Vcellout__directory__data_o[
                                                             (((IData)(3U) 
                                                               + 
                                                               (0x1ffU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r))))))))))
                                                       : 0U)) 
                                                    & (0U 
                                                       != 
                                                       ((0x16fU 
                                                         >= 
                                                         (0x1ffU 
                                                          & (((IData)(0xb8U) 
                                                              * (IData)(vlSelf->__PVT__lce_r)) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x17U) 
                                                                 * (IData)(vlSelf->__PVT__way_r))))))
                                                         ? 
                                                        (7U 
                                                         & (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->__Vcellout__directory__data_o[
                                                              (((IData)(2U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))))) 
                                                            | (vlSelf->__Vcellout__directory__data_o[
                                                               (0xfU 
                                                                & ((((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r))))))))
                                                         : 0U))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = ((0x38U & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | ((0x16fU >= (0x1ffU & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                           ? (7U & (((0U == (0x1fU 
                                             & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                      ? 0U : (vlSelf->__Vcellout__directory__data_o[
                                              (((IData)(2U) 
                                                + (0x1ffU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))))) 
                                    | (vlSelf->__Vcellout__directory__data_o[
                                       (0xfU & ((((IData)(0xb8U) 
                                                  * (IData)(vlSelf->__PVT__lce_r)) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSelf->__PVT__way_r)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0xb8U) 
                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSelf->__PVT__way_r))))))))
                           : 0U));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & (IData)(vlSelf->__PVT__sharers_ways));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(vlSelf->__PVT__cnt) 
                                                         << 1U))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(vlSelf->__PVT__cnt) 
                                                            << 1U))))));
            }
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_ways) 
                                                >> 3U));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->__PVT__cnt) 
                                                      << 1U)))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->__PVT__sharers_hits)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U)))));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U))))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & ((IData)(vlSelf->__PVT__sharers_hits) 
                                                       >> 1U)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__cnt) 
                                                        << 1U))))));
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & (IData)(vlSelf->__PVT__sharers_coh_states));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U))))));
            }
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_coh_states) 
                                                >> 3U));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U)))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__cnt) 
                                                          << 1U)))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            ((IData)(vlSelf->__PVT__cnt) 
                                                             << 1U)))))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__cnt) 
                                                    << 1U)))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U)))))));
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
            vlSelf->__PVT__sharers_ways_n = 0U;
            vlSelf->__PVT__sharers_hits_n = 0U;
            vlSelf->__PVT__sharers_coh_states_n = 0U;
        }
    }
}
