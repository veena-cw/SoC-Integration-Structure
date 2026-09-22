// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_box__Bz1.h"
#include "Vtestbench_bp_be_fp_rebox__Bz1.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__68(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__68\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6cf5094d__0;
    VlWide<3>/*95:0*/ __Vtemp_h23e4e13c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2140cd55__0;
    VlWide<3>/*95:0*/ __Vtemp_h882ea7d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h295e5c5b__0;
    // Body
    __Vtemp_h6cf5094d__0[0U] = (IData)((((QData)((IData)(
                                                         (7U 
                                                          & ((3U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                  >> 0xaU)))
                                                              ? 
                                                             (6U 
                                                              | (0ULL 
                                                                 != 
                                                                 (0xfffffffffffffULL 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                              : 
                                                             ((IData)(
                                                                      (0ULL 
                                                                       == 
                                                                       (0x7fffffffffffffffULL 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                               >> 9U)))))) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            (0x1ffU 
                                                             & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & ((0U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                              >> 0x34U))))
                                                  ? 
                                                 ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                   << 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hd484eaa6__0)
                                                     ? 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                                     : 0U)) 
                                                  << 1U)
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))));
    __Vtemp_h6cf5094d__0[1U] = (IData)(((((QData)((IData)(
                                                          (7U 
                                                           & ((3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                   >> 0xaU)))
                                                               ? 
                                                              (6U 
                                                               | (0ULL 
                                                                  != 
                                                                  (0xfffffffffffffULL 
                                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                               : 
                                                              ((IData)(
                                                                       (0ULL 
                                                                        == 
                                                                        (0x7fffffffffffffffULL 
                                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                >> 9U)))))) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp)))) 
                                             << 0x34U) 
                                            | (0xfffffffffffffULL 
                                               & ((0U 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                               >> 0x34U))))
                                                   ? 
                                                  ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                    << 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hd484eaa6__0)
                                                      ? 
                                                     (0x3fU 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                                      : 0U)) 
                                                   << 1U)
                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))) 
                                        >> 0x20U));
    if ((1U & ((0xffffffffU == (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                        >> 0x20U))) 
               | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                  >> 0x13U)))) {
        __Vtemp_h23e4e13c__0[0U] = (IData)((((QData)((IData)(
                                                             (0xfffU 
                                                              & (((0U 
                                                                   == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)) 
                                                                  | (6U 
                                                                     <= (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)))
                                                                  ? 
                                                                 (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code) 
                                                                   << 9U) 
                                                                  | (0x1ffU 
                                                                     & ((IData)(0x100U) 
                                                                        + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp))))
                                                                  : 
                                                                 ((IData)(0x700U) 
                                                                  + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp)))))) 
                                             << 0x34U) 
                                            | ((QData)((IData)(
                                                               (0x7fffffU 
                                                                & ((0U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U))))
                                                                    ? 
                                                                   (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                                                     << 
                                                                     ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hb50f5e0d__0)
                                                                       ? 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                                                       : 0U)) 
                                                                    << 1U)
                                                                    : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))) 
                                               << 0x1dU)));
        __Vtemp_h23e4e13c__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xfffU 
                                                               & (((0U 
                                                                    == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)) 
                                                                   | (6U 
                                                                      <= (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)))
                                                                   ? 
                                                                  (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code) 
                                                                    << 9U) 
                                                                   | (0x1ffU 
                                                                      & ((IData)(0x100U) 
                                                                         + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp))))
                                                                   : 
                                                                  ((IData)(0x700U) 
                                                                   + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp)))))) 
                                              << 0x34U) 
                                             | ((QData)((IData)(
                                                                (0x7fffffU 
                                                                 & ((0U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U))))
                                                                     ? 
                                                                    (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                                                      << 
                                                                      ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hb50f5e0d__0)
                                                                        ? 
                                                                       (0x1fU 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                                                        : 0U)) 
                                                                     << 1U)
                                                                     : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))) 
                                                << 0x1dU)) 
                                            >> 0x20U));
    } else {
        __Vtemp_h23e4e13c__0[0U] = __Vtemp_h6cf5094d__0[0U];
        __Vtemp_h23e4e13c__0[1U] = __Vtemp_h6cf5094d__0[1U];
    }
    __Vtemp_h2140cd55__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                           ? 0xe00U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                            ? 0xc00U
                                                            : 
                                                           ((0U 
                                                             == 
                                                             ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                              >> 6U))
                                                             ? 0U
                                                             : 
                                                            (0xfffU 
                                                             & ((IData)(0x700U) 
                                                                + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                         << 0x34U) 
                                        | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                            ? 0x8000000000000ULL
                                            : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                     >> 6U))
                                                    ? 0ULL
                                                    : 
                                                   (0xfffffffffffffULL 
                                                    & ((QData)((IData)(
                                                                       (0x7fffffU 
                                                                        & (((0x400U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                             ? 0x400000U
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                : 0U) 
                                                                              | ((((~ 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                                | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                       << 0x1dU)))))));
    __Vtemp_h2140cd55__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                            ? 0xe00U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                             ? 0xc00U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                               >> 6U))
                                                              ? 0U
                                                              : 
                                                             (0xfffU 
                                                              & ((IData)(0x700U) 
                                                                 + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                          << 0x34U) 
                                         | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                             ? 0x8000000000000ULL
                                             : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                   >> 6U))
                                                  ? 0ULL
                                                  : 
                                                 (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (((0x400U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                           ? 0x400000U
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                              ? 
                                                                             (0x400000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                              : 0U) 
                                                                            | ((((~ 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                               | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                     << 0x1dU)))))) 
                                        >> 0x20U));
    __Vtemp_h882ea7d0__0[0U] = (IData)((((QData)((IData)(
                                                         (0xfffU 
                                                          & (((~ 
                                                               (((1U 
                                                                  & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                      >> 8U) 
                                                                     | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                  ? 0xe00U
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                     ? 0xc31U
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                        ? 0x400U
                                                                        : 0U) 
                                                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                          ? 0x200U
                                                                          : 0U))))) 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                  ? 0x3ceU
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                     ? 0xbffU
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                        ? 0xc00U
                                                                        : 0U) 
                                                                      | ((0x400U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                          ? 0xe00U
                                                                          : 0U)))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((0x400U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                ? 0x8000000000000ULL
                                                : 0ULL) 
                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                   ? 
                                                  (0x8000000000000ULL 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                   : 0ULL) 
                                                 | ((((~ 
                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                        >> 0xaU)) 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                      ? 
                                                     (0x7ffffffffffffULL 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                      : 0ULL) 
                                                    | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))));
    __Vtemp_h882ea7d0__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xfffU 
                                                           & (((~ 
                                                                (((1U 
                                                                   & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                       >> 8U) 
                                                                      | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                   ? 0xe00U
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                      ? 0xc31U
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                         ? 0x400U
                                                                         : 0U) 
                                                                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                           ? 0x200U
                                                                           : 0U))))) 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                   ? 0x3ceU
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                      ? 0xbffU
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                         ? 0xc00U
                                                                         : 0U) 
                                                                       | ((0x400U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                           ? 0xe00U
                                                                           : 0U)))))))) 
                                          << 0x34U) 
                                         | (0xfffffffffffffULL 
                                            & (((0x400U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                 ? 0x8000000000000ULL
                                                 : 0ULL) 
                                               | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                    ? 
                                                   (0x8000000000000ULL 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                    : 0ULL) 
                                                  | ((((~ 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                         >> 0xaU)) 
                                                       & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                       ? 
                                                      (0x7ffffffffffffULL 
                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                       : 0ULL) 
                                                     | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))) 
                                        >> 0x20U));
    __Vtemp_h295e5c5b__0[2U] = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[1U]
                                   : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                       ? __Vtemp_h23e4e13c__0[1U]
                                       : ((0x80000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                           ? __Vtemp_h2140cd55__0[1U]
                                           : __Vtemp_h882ea7d0__0[1U]))) 
                                 >> 0x1fU) | (((0x80000U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[2U]
                                                : (
                                                   (0x10U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                    ? 
                                                   ((1U 
                                                     & ((0xffffffffU 
                                                         == (IData)(
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x20U))) 
                                                        | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                                           >> 0x13U)))
                                                     ? 
                                                    (2U 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                   >> 0x1fU))))
                                                     : 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                >> 0x3fU))))
                                                    : 
                                                   ((0x80000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                     ? 
                                                    (2U 
                                                     | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)) 
                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__VdfgTmp_h183e8778__0)))
                                                     : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__VdfgTmp_h183e8778__0)))) 
                                              << 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[0U] 
        = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
              ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[0U]
              : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                  ? __Vtemp_h23e4e13c__0[0U] : ((0x80000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                 ? 
                                                __Vtemp_h2140cd55__0[0U]
                                                 : 
                                                __Vtemp_h882ea7d0__0[0U]))) 
            << 1U) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU] 
                       >> 0x1eU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                    >> 8U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[1U] 
        = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
              ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[0U]
              : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                  ? __Vtemp_h23e4e13c__0[0U] : ((0x80000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                 ? 
                                                __Vtemp_h2140cd55__0[0U]
                                                 : 
                                                __Vtemp_h882ea7d0__0[0U]))) 
            >> 0x1fU) | (((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                           ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[1U]
                           : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                               ? __Vtemp_h23e4e13c__0[1U]
                               : ((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                   ? __Vtemp_h2140cd55__0[1U]
                                   : __Vtemp_h882ea7d0__0[1U]))) 
                         << 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[2U] 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__aux_fflags) 
            << 3U) | __Vtemp_h295e5c5b__0[2U]);
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__50(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__50\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6cf5094d__0;
    VlWide<3>/*95:0*/ __Vtemp_h23e4e13c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2140cd55__0;
    VlWide<3>/*95:0*/ __Vtemp_h882ea7d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h295e5c5b__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__aux_fflags 
        = ((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
            ? ((0x2000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                ? 0U : ((0x1000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                         ? 0U : ((0x800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                  ? ((0x400000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                      ? ((0x200000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                          ? 0U : ((0x100000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__invalid) 
                                                   << 4U)))
                                      : ((0x200000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                          ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__invalid) 
                                             << 4U)
                                          : 0U)) : 
                                 ((0x400000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                   ? 0U : ((0x100000U 
                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                            ? ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                                    >> 0x11U)))
                                                ? (
                                                   (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc) 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__overflow)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__inexact))
                                                : (
                                                   (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc) 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__overflow)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__inexact)))
                                            : 0U)))))
            : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                ? 0U : (((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                          ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__Vcellout__round_mixed__midExceptionFlags)
                          : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__Vcellout__round_mixed__fullExceptionFlags)) 
                        | (((2U == (0x3fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                             >> 0x14U))) 
                            | (4U == (0x3fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                               >> 0x14U))))
                            ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__sig[1U] 
                                >> 0x1fU) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__roundRawToOut__DOT__genblk2__DOT__anyRound))
                            : ((0U == (0x3fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                                >> 0x14U)))
                                ? 0U : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__invalid) 
                                        << 4U))))));
    __Vtemp_h6cf5094d__0[0U] = (IData)((((QData)((IData)(
                                                         (7U 
                                                          & ((3U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                  >> 0xaU)))
                                                              ? 
                                                             (6U 
                                                              | (0ULL 
                                                                 != 
                                                                 (0xfffffffffffffULL 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                              : 
                                                             ((IData)(
                                                                      (0ULL 
                                                                       == 
                                                                       (0x7fffffffffffffffULL 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                               >> 9U)))))) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            (0x1ffU 
                                                             & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & ((0U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                              >> 0x34U))))
                                                  ? 
                                                 ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                   << 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hd484eaa6__0)
                                                     ? 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                                     : 0U)) 
                                                  << 1U)
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))));
    __Vtemp_h6cf5094d__0[1U] = (IData)(((((QData)((IData)(
                                                          (7U 
                                                           & ((3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                   >> 0xaU)))
                                                               ? 
                                                              (6U 
                                                               | (0ULL 
                                                                  != 
                                                                  (0xfffffffffffffULL 
                                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                               : 
                                                              ((IData)(
                                                                       (0ULL 
                                                                        == 
                                                                        (0x7fffffffffffffffULL 
                                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp) 
                                                                >> 9U)))))) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__adjustedExp)))) 
                                             << 0x34U) 
                                            | (0xfffffffffffffULL 
                                               & ((0U 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                               >> 0x34U))))
                                                   ? 
                                                  ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                    << 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hd484eaa6__0)
                                                      ? 
                                                     (0x3fU 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                                      : 0U)) 
                                                   << 1U)
                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))) 
                                        >> 0x20U));
    if ((1U & ((0xffffffffU == (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                        >> 0x20U))) 
               | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                  >> 0x13U)))) {
        __Vtemp_h23e4e13c__0[0U] = (IData)((((QData)((IData)(
                                                             (0xfffU 
                                                              & (((0U 
                                                                   == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)) 
                                                                  | (6U 
                                                                     <= (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)))
                                                                  ? 
                                                                 (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code) 
                                                                   << 9U) 
                                                                  | (0x1ffU 
                                                                     & ((IData)(0x100U) 
                                                                        + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp))))
                                                                  : 
                                                                 ((IData)(0x700U) 
                                                                  + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp)))))) 
                                             << 0x34U) 
                                            | ((QData)((IData)(
                                                               (0x7fffffU 
                                                                & ((0U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U))))
                                                                    ? 
                                                                   (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                                                     << 
                                                                     ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hb50f5e0d__0)
                                                                       ? 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                                                       : 0U)) 
                                                                    << 1U)
                                                                    : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))) 
                                               << 0x1dU)));
        __Vtemp_h23e4e13c__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xfffU 
                                                               & (((0U 
                                                                    == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)) 
                                                                   | (6U 
                                                                      <= (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code)))
                                                                   ? 
                                                                  (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__exp_code) 
                                                                    << 9U) 
                                                                   | (0x1ffU 
                                                                      & ((IData)(0x100U) 
                                                                         + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp))))
                                                                   : 
                                                                  ((IData)(0x700U) 
                                                                   + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__exp)))))) 
                                              << 0x34U) 
                                             | ((QData)((IData)(
                                                                (0x7fffffU 
                                                                 & ((0U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U))))
                                                                     ? 
                                                                    (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                                                      << 
                                                                      ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__VdfgTmp_hb50f5e0d__0)
                                                                        ? 
                                                                       (0x1fU 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                                                        : 0U)) 
                                                                     << 1U)
                                                                     : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))) 
                                                << 0x1dU)) 
                                            >> 0x20U));
    } else {
        __Vtemp_h23e4e13c__0[0U] = __Vtemp_h6cf5094d__0[0U];
        __Vtemp_h23e4e13c__0[1U] = __Vtemp_h6cf5094d__0[1U];
    }
    __Vtemp_h2140cd55__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                           ? 0xe00U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                            ? 0xc00U
                                                            : 
                                                           ((0U 
                                                             == 
                                                             ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                              >> 6U))
                                                             ? 0U
                                                             : 
                                                            (0xfffU 
                                                             & ((IData)(0x700U) 
                                                                + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                         << 0x34U) 
                                        | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                            ? 0x8000000000000ULL
                                            : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                     >> 6U))
                                                    ? 0ULL
                                                    : 
                                                   (0xfffffffffffffULL 
                                                    & ((QData)((IData)(
                                                                       (0x7fffffU 
                                                                        & (((0x400U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                             ? 0x400000U
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                : 0U) 
                                                                              | ((((~ 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                                | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                       << 0x1dU)))))));
    __Vtemp_h2140cd55__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                            ? 0xe00U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                             ? 0xc00U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                               >> 6U))
                                                              ? 0U
                                                              : 
                                                             (0xfffU 
                                                              & ((IData)(0x700U) 
                                                                 + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                          << 0x34U) 
                                         | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                             ? 0x8000000000000ULL
                                             : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                   >> 6U))
                                                  ? 0ULL
                                                  : 
                                                 (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (((0x400U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                           ? 0x400000U
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                              ? 
                                                                             (0x400000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                              : 0U) 
                                                                            | ((((~ 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                               | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                     << 0x1dU)))))) 
                                        >> 0x20U));
    __Vtemp_h882ea7d0__0[0U] = (IData)((((QData)((IData)(
                                                         (0xfffU 
                                                          & (((~ 
                                                               (((1U 
                                                                  & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                      >> 8U) 
                                                                     | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                  ? 0xe00U
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                     ? 0xc31U
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                        ? 0x400U
                                                                        : 0U) 
                                                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                          ? 0x200U
                                                                          : 0U))))) 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                  ? 0x3ceU
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                     ? 0xbffU
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                        ? 0xc00U
                                                                        : 0U) 
                                                                      | ((0x400U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                          ? 0xe00U
                                                                          : 0U)))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((0x400U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                ? 0x8000000000000ULL
                                                : 0ULL) 
                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                   ? 
                                                  (0x8000000000000ULL 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                   : 0ULL) 
                                                 | ((((~ 
                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                        >> 0xaU)) 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                      ? 
                                                     (0x7ffffffffffffULL 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                      : 0ULL) 
                                                    | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))));
    __Vtemp_h882ea7d0__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xfffU 
                                                           & (((~ 
                                                                (((1U 
                                                                   & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                       >> 8U) 
                                                                      | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                   ? 0xe00U
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                      ? 0xc31U
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                         ? 0x400U
                                                                         : 0U) 
                                                                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                           ? 0x200U
                                                                           : 0U))))) 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                   ? 0x3ceU
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                      ? 0xbffU
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                         ? 0xc00U
                                                                         : 0U) 
                                                                       | ((0x400U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                                           ? 0xe00U
                                                                           : 0U)))))))) 
                                          << 0x34U) 
                                         | (0xfffffffffffffULL 
                                            & (((0x400U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                 ? 0x8000000000000ULL
                                                 : 0ULL) 
                                               | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                    ? 
                                                   (0x8000000000000ULL 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                    : 0ULL) 
                                                  | ((((~ 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                         >> 0xaU)) 
                                                       & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                       ? 
                                                      (0x7ffffffffffffULL 
                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                       : 0ULL) 
                                                     | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))) 
                                        >> 0x20U));
    __Vtemp_h295e5c5b__0[2U] = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[1U]
                                   : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                       ? __Vtemp_h23e4e13c__0[1U]
                                       : ((0x80000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                           ? __Vtemp_h2140cd55__0[1U]
                                           : __Vtemp_h882ea7d0__0[1U]))) 
                                 >> 0x1fU) | (((0x80000U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[2U]
                                                : (
                                                   (0x10U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                    ? 
                                                   ((1U 
                                                     & ((0xffffffffU 
                                                         == (IData)(
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x20U))) 
                                                        | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                                           >> 0x13U)))
                                                     ? 
                                                    (2U 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                   >> 0x1fU))))
                                                     : 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                >> 0x3fU))))
                                                    : 
                                                   ((0x80000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                     ? 
                                                    (2U 
                                                     | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)) 
                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__VdfgTmp_h183e8778__0)))
                                                     : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox->__VdfgTmp_h183e8778__0)))) 
                                              << 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[0U] 
        = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
              ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[0U]
              : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                  ? __Vtemp_h23e4e13c__0[0U] : ((0x80000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                 ? 
                                                __Vtemp_h2140cd55__0[0U]
                                                 : 
                                                __Vtemp_h882ea7d0__0[0U]))) 
            << 1U) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU] 
                       >> 0x1eU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                    >> 8U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[1U] 
        = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
              ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[0U]
              : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                  ? __Vtemp_h23e4e13c__0[0U] : ((0x80000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                                 ? 
                                                __Vtemp_h2140cd55__0[0U]
                                                 : 
                                                __Vtemp_h882ea7d0__0[0U]))) 
            >> 0x1fU) | (((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                           ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o[1U]
                           : ((0x10U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                               ? __Vtemp_h23e4e13c__0[1U]
                               : ((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                   ? __Vtemp_h2140cd55__0[1U]
                                   : __Vtemp_h882ea7d0__0[1U]))) 
                         << 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[2U] 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__aux_fflags) 
            << 3U) | __Vtemp_h295e5c5b__0[2U]);
}
