// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_cce_dir_segment__pi102.h"

VL_ATTR_COLD void Vtestbench_bp_cce_dir_segment__pi102___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__0(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__0\n"); );
    // Body
    vlSelf->__PVT__addr_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__unnamedblk1__DOT__j = 2U;
            }
        }
    }
    vlSelf->__PVT__lru_v_o = ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                >> (IData)(vlSelf->__PVT__lce_r)) 
                               & (~ (IData)(vlSelf->__PVT__cnt))) 
                              & (IData)(vlSelf->__PVT__r_lru_v_r));
    vlSelf->__Vcellout__directory__data_o[0U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__Vcellout__directory__data_o[1U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__Vcellout__directory__data_o[2U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__Vcellout__directory__data_o[3U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][3U];
    vlSelf->__Vcellout__directory__data_o[4U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][4U];
    vlSelf->__Vcellout__directory__data_o[5U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][5U];
    vlSelf->__Vcellout__directory__data_o[6U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][6U];
    vlSelf->__Vcellout__directory__data_o[7U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][7U];
    vlSelf->__Vcellout__directory__data_o[8U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][8U];
    vlSelf->__Vcellout__directory__data_o[9U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][9U];
    vlSelf->__Vcellout__directory__data_o[0xaU] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0xaU];
    vlSelf->__Vcellout__directory__data_o[0xbU] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0xbU];
    vlSelf->__PVT__busy_o = 0U;
    vlSelf->__PVT__addr_o = 0ULL;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__addr_v_o = 1U;
                vlSelf->__PVT__busy_o = 1U;
                vlSelf->__PVT__addr_o = (QData)((IData)(
                                                        (((0x16fU 
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
                                                           : 0U) 
                                                         << 0xcU)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__busy_o = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__busy_o = 1U;
    }
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__i 
        = ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
             & (((0xfffffU & (vlSelf->__Vcellout__directory__data_o[5U] 
                              >> 4U)) == (0xfffffU 
                                          & (IData)(
                                                    (vlSelf->__PVT__addr_r 
                                                     >> 0xcU)))) 
                & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[5U] 
                                >> 1U))))) << 7U) | 
           ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
              & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[5U] 
                                << 0x13U) | (vlSelf->__Vcellout__directory__data_o[4U] 
                                             >> 0xdU))) 
                  == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                          >> 0xcU)))) 
                 & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[4U] 
                                 >> 0xaU))))) << 6U) 
            | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                 & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[4U] 
                                   << 0xaU) | (vlSelf->__Vcellout__directory__data_o[3U] 
                                               >> 0x16U))) 
                     == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                             >> 0xcU)))) 
                    & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[3U] 
                                    >> 0x13U))))) << 5U) 
               | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                    & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[3U] 
                                      << 1U) | (vlSelf->__Vcellout__directory__data_o[2U] 
                                                >> 0x1fU))) 
                        == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                                >> 0xcU)))) 
                       & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[2U] 
                                       >> 0x1cU))))) 
                   << 4U) | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                               & (((0xfffffU & (vlSelf->__Vcellout__directory__data_o[2U] 
                                                >> 8U)) 
                                   == (0xfffffU & (IData)(
                                                          (vlSelf->__PVT__addr_r 
                                                           >> 0xcU)))) 
                                  & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[2U] 
                                                  >> 5U))))) 
                              << 3U) | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                          & (((0xfffffU 
                                               & ((vlSelf->__Vcellout__directory__data_o[2U] 
                                                   << 0xfU) 
                                                  | (vlSelf->__Vcellout__directory__data_o[1U] 
                                                     >> 0x11U))) 
                                              == (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__addr_r 
                                                             >> 0xcU)))) 
                                             & (0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->__Vcellout__directory__data_o[1U] 
                                                    >> 0xeU))))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                     & (((0xfffffU 
                                                          & ((vlSelf->__Vcellout__directory__data_o[1U] 
                                                              << 6U) 
                                                             | (vlSelf->__Vcellout__directory__data_o[0U] 
                                                                >> 0x1aU))) 
                                                         == 
                                                         (0xfffffU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__addr_r 
                                                                     >> 0xcU)))) 
                                                        & (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->__Vcellout__directory__data_o[0U] 
                                                               >> 0x17U))))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                      & (((0xfffffU 
                                                           & (vlSelf->__Vcellout__directory__data_o[0U] 
                                                              >> 3U)) 
                                                          == 
                                                          (0xfffffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__addr_r 
                                                                      >> 0xcU)))) 
                                                         & (0U 
                                                            != 
                                                            (7U 
                                                             & vlSelf->__Vcellout__directory__data_o[0U])))))))))));
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__i 
        = ((0xffffff80U & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                            << 6U) & ((((0xfffffU & 
                                         ((vlSelf->__Vcellout__directory__data_o[0xbU] 
                                           << 4U) | 
                                          (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                           >> 0x1cU))) 
                                        == (0xfffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_r 
                                                       >> 0xcU)))) 
                                       & (0U != (7U 
                                                 & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                    >> 0x19U)))) 
                                      << 7U))) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                       << 5U) 
                                                      & ((((0xfffffU 
                                                            & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                               >> 5U)) 
                                                           == 
                                                           (0xfffffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__addr_r 
                                                                       >> 0xcU)))) 
                                                          & (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                                 >> 2U)))) 
                                                         << 6U))) 
                                                  | ((0xffffffe0U 
                                                      & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                          << 4U) 
                                                         & ((((0xfffffU 
                                                               & ((vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->__Vcellout__directory__data_o[9U] 
                                                                     >> 0xeU))) 
                                                              == 
                                                              (0xfffffU 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__addr_r 
                                                                          >> 0xcU)))) 
                                                             & (0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__Vcellout__directory__data_o[9U] 
                                                                    >> 0xbU)))) 
                                                            << 5U))) 
                                                     | ((0xfffffff0U 
                                                         & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                             << 3U) 
                                                            & ((((0xfffffU 
                                                                  & ((vlSelf->__Vcellout__directory__data_o[9U] 
                                                                      << 9U) 
                                                                     | (vlSelf->__Vcellout__directory__data_o[8U] 
                                                                        >> 0x17U))) 
                                                                 == 
                                                                 (0xfffffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_r 
                                                                             >> 0xcU)))) 
                                                                & (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->__Vcellout__directory__data_o[8U] 
                                                                       >> 0x14U)))) 
                                                               << 4U))) 
                                                        | ((0xfffffff8U 
                                                            & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                << 2U) 
                                                               & ((((0xfffffU 
                                                                     & vlSelf->__Vcellout__directory__data_o[8U]) 
                                                                    == 
                                                                    (0xfffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                   & (0U 
                                                                      != 
                                                                      (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                       >> 0x1dU))) 
                                                                  << 3U))) 
                                                           | ((0xfffffffcU 
                                                               & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                   << 1U) 
                                                                  & ((((0xfffffU 
                                                                        & (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                           >> 9U)) 
                                                                       == 
                                                                       (0xfffffU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                      & (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                             >> 6U)))) 
                                                                     << 2U))) 
                                                              | ((0xfffffffeU 
                                                                  & ((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                     & ((((0xfffffU 
                                                                           & ((vlSelf->__Vcellout__directory__data_o[7U] 
                                                                               << 0xeU) 
                                                                              | (vlSelf->__Vcellout__directory__data_o[6U] 
                                                                                >> 0x12U))) 
                                                                          == 
                                                                          (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                         & (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (vlSelf->__Vcellout__directory__data_o[6U] 
                                                                                >> 0xfU)))) 
                                                                        << 1U))) 
                                                                 | (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                     >> 1U) 
                                                                    & (((0xfffffU 
                                                                         & ((vlSelf->__Vcellout__directory__data_o[6U] 
                                                                             << 5U) 
                                                                            | (vlSelf->__Vcellout__directory__data_o[5U] 
                                                                               >> 0x1bU))) 
                                                                        == 
                                                                        (0xfffffU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (7U 
                                                                           & (vlSelf->__Vcellout__directory__data_o[5U] 
                                                                              >> 0x18U))))))))))));
    vlSelf->__PVT__lru_extract__DOT__row[0U] = vlSelf->__Vcellout__directory__data_o[0U];
    vlSelf->__PVT__lru_extract__DOT__row[1U] = vlSelf->__Vcellout__directory__data_o[1U];
    vlSelf->__PVT__lru_extract__DOT__row[2U] = vlSelf->__Vcellout__directory__data_o[2U];
    vlSelf->__PVT__lru_extract__DOT__row[3U] = vlSelf->__Vcellout__directory__data_o[3U];
    vlSelf->__PVT__lru_extract__DOT__row[4U] = vlSelf->__Vcellout__directory__data_o[4U];
    vlSelf->__PVT__lru_extract__DOT__row[5U] = vlSelf->__Vcellout__directory__data_o[5U];
    vlSelf->__PVT__lru_extract__DOT__row[6U] = vlSelf->__Vcellout__directory__data_o[6U];
    vlSelf->__PVT__lru_extract__DOT__row[7U] = vlSelf->__Vcellout__directory__data_o[7U];
    vlSelf->__PVT__lru_extract__DOT__row[8U] = vlSelf->__Vcellout__directory__data_o[8U];
    vlSelf->__PVT__lru_extract__DOT__row[9U] = vlSelf->__Vcellout__directory__data_o[9U];
    vlSelf->__PVT__lru_extract__DOT__row[0xaU] = vlSelf->__Vcellout__directory__data_o[0xaU];
    vlSelf->__PVT__lru_extract__DOT__row[0xbU] = vlSelf->__Vcellout__directory__data_o[0xbU];
    vlSelf->__PVT__lru_coh_state_o = ((0x16fU >= (0x1ffU 
                                                  & (((IData)(0xb8U) 
                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x17U) 
                                                         * (IData)(vlSelf->__PVT__lru_way_r))))))
                                       ? (7U & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__lru_way_r))))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__lru_extract__DOT__row[
                                                  (((IData)(2U) 
                                                    + 
                                                    (0x1ffU 
                                                     & (((IData)(0xb8U) 
                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x17U) 
                                                            * (IData)(vlSelf->__PVT__lru_way_r)))))) 
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
                                                           * (IData)(vlSelf->__PVT__lru_way_r)))))))) 
                                                | (vlSelf->__PVT__lru_extract__DOT__row[
                                                   (0xfU 
                                                    & ((((IData)(0xb8U) 
                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x17U) 
                                                            * (IData)(vlSelf->__PVT__lru_way_r)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (((IData)(0xb8U) 
                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x17U) 
                                                           * (IData)(vlSelf->__PVT__lru_way_r))))))))
                                       : 0U);
    vlSelf->__PVT__lru_tag_lo = ((0x16fU >= ((IData)(3U) 
                                             + (0x1ffU 
                                                & (((IData)(0xb8U) 
                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x17U) 
                                                       * (IData)(vlSelf->__PVT__lru_way_r)))))))
                                  ? (0xfffffU & (((0U 
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
                                                               * (IData)(vlSelf->__PVT__lru_way_r))))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->__PVT__lru_extract__DOT__row[
                                                   (((IData)(0x16U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (((IData)(0xb8U) 
                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x17U) 
                                                             * (IData)(vlSelf->__PVT__lru_way_r)))))) 
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
                                                                * (IData)(vlSelf->__PVT__lru_way_r)))))))))) 
                                                 | (vlSelf->__PVT__lru_extract__DOT__row[
                                                    (((IData)(3U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0xb8U) 
                                                           * (IData)(vlSelf->__PVT__lce_r)) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x17U) 
                                                              * (IData)(vlSelf->__PVT__lru_way_r)))))) 
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
                                                                * (IData)(vlSelf->__PVT__lru_way_r))))))))))
                                  : 0U);
}

VL_ATTR_COLD void Vtestbench_bp_cce_dir_segment__pi102___ctor_var_reset(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__addr_i = 0;
    vlSelf->__PVT__addr_bypass_i = 0;
    vlSelf->__PVT__lce_i = 0;
    vlSelf->__PVT__way_i = 0;
    vlSelf->__PVT__lru_way_i = 0;
    vlSelf->__PVT__coh_state_i = 0;
    vlSelf->__PVT__addr_dst_gpr_i = 0;
    vlSelf->__PVT__cmd_i = 0;
    vlSelf->__PVT__r_v_i = 0;
    vlSelf->__PVT__r_lru_v_i = 0;
    vlSelf->__PVT__w_v_i = 0;
    vlSelf->__PVT__busy_o = 0;
    vlSelf->__PVT__sharers_v_o = 0;
    vlSelf->__PVT__sharers_hits_o = 0;
    vlSelf->__PVT__sharers_ways_o = 0;
    vlSelf->__PVT__sharers_coh_states_o = 0;
    vlSelf->__PVT__lru_v_o = 0;
    vlSelf->__PVT__lru_coh_state_o = 0;
    vlSelf->__PVT__lru_addr_o = 0;
    vlSelf->__PVT__addr_v_o = 0;
    vlSelf->__PVT__addr_o = 0;
    vlSelf->__PVT__addr_dst_gpr_o = 0;
    vlSelf->__PVT__set_id = 0;
    vlSelf->__PVT__dir_ram_w_v = 0;
    vlSelf->__PVT__dir_ram_v = 0;
    vlSelf->__PVT__dir_ram_addr = 0;
    vlSelf->__PVT__dir_ram_addr_r = 0;
    vlSelf->__PVT__dir_ram_addr_n = 0;
    VL_ZERO_RESET_W(368, vlSelf->__PVT__dir_ram_w_mask);
    VL_ZERO_RESET_W(368, vlSelf->__PVT__dir_ram_w_data);
    vlSelf->__PVT__cnt_clr = 0;
    vlSelf->__PVT__cnt_inc = 0;
    vlSelf->__PVT__cnt = 0;
    vlSelf->__PVT__state_r = 0;
    vlSelf->__PVT__state_n = 0;
    vlSelf->__PVT__lce_r = 0;
    vlSelf->__PVT__lce_n = 0;
    vlSelf->__PVT__way_r = 0;
    vlSelf->__PVT__way_n = 0;
    vlSelf->__PVT__lru_way_r = 0;
    vlSelf->__PVT__lru_way_n = 0;
    vlSelf->__PVT__addr_r = 0;
    vlSelf->__PVT__addr_n = 0;
    vlSelf->__PVT__dir_data_o_v_r = 0;
    vlSelf->__PVT__dir_data_o_v_n = 0;
    vlSelf->__PVT__addr_dst_gpr_r = 0;
    vlSelf->__PVT__addr_dst_gpr_n = 0;
    vlSelf->__PVT__r_lru_v_r = 0;
    vlSelf->__PVT__r_lru_v_n = 0;
    vlSelf->__PVT__sharers_v_r = 0;
    vlSelf->__PVT__sharers_v_n = 0;
    vlSelf->__PVT__sharers_hits_r = 0;
    vlSelf->__PVT__sharers_hits_n = 0;
    vlSelf->__PVT__sharers_ways_r = 0;
    vlSelf->__PVT__sharers_ways_n = 0;
    vlSelf->__PVT__sharers_coh_states_r = 0;
    vlSelf->__PVT__sharers_coh_states_n = 0;
    vlSelf->__PVT__sharers_hits = 0;
    vlSelf->__PVT__sharers_ways = 0;
    vlSelf->__PVT__sharers_coh_states = 0;
    VL_ZERO_RESET_W(368, vlSelf->__Vcellout__directory__data_o);
    vlSelf->__PVT__lru_tag_lo = 0;
    vlSelf->__PVT__unnamedblk1__DOT__j = 0;
    vlSelf->__Vlvbound_h8d6df08e__0 = 0;
    vlSelf->__Vlvbound_h35b14da1__0 = 0;
    vlSelf->__Vlvbound_h15006844__0 = 0;
    vlSelf->__Vlvbound_h59a319bb__0 = 0;
    vlSelf->__Vlvbound_h15006844__1 = 0;
    vlSelf->__Vlvbound_h2ae7ea29__0 = 0;
    vlSelf->__Vlvbound_hb97b11e9__0 = 0;
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_ZERO_RESET_W(368, vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(368, vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n);
    vlSelf->tag_checker__DOT____Vcellout__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__addr_o = 0;
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__i = 0;
    vlSelf->tag_checker__DOT____Vcellout__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__addr_o = 0;
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__i = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__addr = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__v = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__addr = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__v = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(368, vlSelf->__PVT__lru_extract__DOT__row);
}
