// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_rebox__Bz1.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__11(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__11\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hcf48be89__0;
    VlWide<3>/*95:0*/ __Vtemp_hf21e3b52__0;
    // Body
    __Vtemp_hcf48be89__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                           ? 0xe00U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                            ? 0xc00U
                                                            : 
                                                           ((0U 
                                                             == 
                                                             ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                              >> 6U))
                                                             ? 0U
                                                             : 
                                                            (0xfffU 
                                                             & ((IData)(0x700U) 
                                                                + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                         << 0x34U) 
                                        | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                            ? 0x8000000000000ULL
                                            : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                     >> 6U))
                                                    ? 0ULL
                                                    : 
                                                   (0xfffffffffffffULL 
                                                    & ((QData)((IData)(
                                                                       (0x7fffffU 
                                                                        & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                                             ? 0x400000U
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                : 0U) 
                                                                              | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                                | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                       << 0x1dU)))))));
    __Vtemp_hcf48be89__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                                            ? 0xe00U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                             ? 0xc00U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                               >> 6U))
                                                              ? 0U
                                                              : 
                                                             (0xfffU 
                                                              & ((IData)(0x700U) 
                                                                 + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp)))))))) 
                                          << 0x34U) 
                                         | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)
                                             ? 0x8000000000000ULL
                                             : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isInf)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__exp) 
                                                   >> 6U))
                                                  ? 0ULL
                                                  : 
                                                 (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                                           ? 0x400000U
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0)
                                                                              ? 
                                                                             (0x400000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                              : 0U) 
                                                                            | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0))
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__common_fractOut)
                                                                                 : 0U) 
                                                                               | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut))))))))) 
                                                     << 0x1dU)))))) 
                                        >> 0x20U));
    __Vtemp_hf21e3b52__0[0U] = (IData)((((QData)((IData)(
                                                         (0xfffU 
                                                          & (((~ 
                                                               (((1U 
                                                                  & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                      >> 8U) 
                                                                     | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                  ? 0xe00U
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                     ? 0xc31U
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                        ? 0x400U
                                                                        : 0U) 
                                                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                          ? 0x200U
                                                                          : 0U))))) 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                  ? 0x3ceU
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                     ? 0xbffU
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                        ? 0xc00U
                                                                        : 0U) 
                                                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                                          ? 0xe00U
                                                                          : 0U)))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                ? 0x8000000000000ULL
                                                : 0ULL) 
                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                   ? 
                                                  (0x8000000000000ULL 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                   : 0ULL) 
                                                 | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                      ? 
                                                     (0x7ffffffffffffULL 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                      : 0ULL) 
                                                    | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))));
    __Vtemp_hf21e3b52__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xfffU 
                                                           & (((~ 
                                                                (((1U 
                                                                   & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                       >> 8U) 
                                                                      | VL_GTS_III(32, 0x3ceU, 
                                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)))))
                                                                   ? 0xe00U
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                      ? 0xc31U
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                         ? 0x400U
                                                                         : 0U) 
                                                                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                           ? 0x200U
                                                                           : 0U))))) 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)) 
                                                              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut)
                                                                   ? 0x3ceU
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)
                                                                      ? 0xbffU
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut)
                                                                         ? 0xc00U
                                                                         : 0U) 
                                                                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                                           ? 0xe00U
                                                                           : 0U)))))))) 
                                          << 0x34U) 
                                         | (0xfffffffffffffULL 
                                            & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                 ? 0x8000000000000ULL
                                                 : 0ULL) 
                                               | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0)
                                                    ? 
                                                   (0x8000000000000ULL 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                    : 0ULL) 
                                                  | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                                       & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0))
                                                       ? 
                                                      (0x7ffffffffffffULL 
                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__common_fractOut)
                                                       : 0ULL) 
                                                     | (- (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut)))))))) 
                                        >> 0x20U));
    if ((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[0U] 
            = __Vtemp_hcf48be89__0[0U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[1U] 
            = __Vtemp_hcf48be89__0[1U];
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[0U] 
            = __Vtemp_hf21e3b52__0[0U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[1U] 
            = __Vtemp_hf21e3b52__0[1U];
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i[2U] 
        = ((((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
              ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__Vcellout__round_mixed__midExceptionFlags)
              : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__Vcellout__round_mixed__fullExceptionFlags)) 
            << 2U) | ((0x80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                       ? (2U | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__PVT__round_mixed__DOT__recover__DOT__isNaN)) 
                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__VdfgTmp_h183e8778__0)))
                       : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox->__VdfgTmp_h183e8778__0)));
    vlSelf->__PVT__tile__DOT__reset_r = vlSymsp->TOP.testbench__DOT__dut_reset;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__new_val 
        = ((IData)(vlSelf->__PVT__tile__DOT__reset_r) 
           | (7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__C_n 
        = (3U & (~ ((- (IData)((7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r)))) 
                    | ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r) 
                           & (1U | (2U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__C_reg__DOT__data_r) 
                                          << 1U))))) 
                       | (- (IData)((IData)(vlSelf->__PVT__tile__DOT__reset_r)))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__imulh__reset_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__reset_r) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__catchup__DOT__pipe_int_catchup__flush_i) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__mask_reg__DOT__data_r) 
                 | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__int_v_li))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdivsqrt_pending_reg__reset_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__reset_r) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__catchup__DOT__pipe_int_catchup__flush_i) 
              & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__mask_reg__DOT__data_r) 
                  >> 1U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fp_v_li))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__freeze_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__freeze_r) 
           | (IData)(vlSelf->__PVT__tile__DOT__reset_r));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__resume_lo 
        = (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__freeze_li)) 
            & (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r))) 
           | (((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r)) 
               & ((0U != (IData)(vlSelf->__VdfgTmp_h26fbe7e1__0)) 
                  | (0U != (IData)(vlSelf->__VdfgTmp_h9811c712__0)))) 
              | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r)) 
                 & (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r)))));
}
