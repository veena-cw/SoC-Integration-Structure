// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_box__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__2(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__2\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__7(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__7\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__8(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__8\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__2(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__2\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__7(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__7\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__8(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__8\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfc0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hd484eaa6__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]))
                                                          : 0x3fU))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data) 
                                      << 0x16U)) | 
                        ((0x200000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                >> 1U)) 
                                       << 0x15U)) | 
                         ((0x100000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                 >> 2U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                   >> 3U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((IData)(
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                      >> 4U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 5U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 6U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                    >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                         >> 8U)) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                            >> 9U)) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                               >> 0xaU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0xbU)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0xcU)) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                        >> 0xdU)) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                           >> 0xeU)) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                              >> 0xfU)) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U)) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U)) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U)) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U)) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                             >> 1U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 2U))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 3U))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 4U))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 5U))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 6U))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 7U))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 8U))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 9U))))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xaU))))) 
                                                                            << 0x29U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xbU))))) 
                                                                               << 0x28U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xcU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xdU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xeU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0xfU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x14U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x15U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x17U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x18U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x19U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1bU)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1cU)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1dU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1eU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x20U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x21U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x22U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x24U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x25U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x26U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x27U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x28U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2aU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2bU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2dU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2eU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x31U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                                >> 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1e0U 
                                                      | ((IData)(vlSelf->__VdfgTmp_hb50f5e0d__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (~ 
                                                             vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]))
                                                          : 0x1fU))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__exp_code = (7U & ((3U == (3U & ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                   >> 7U)))
                                      ? (6U | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data))))
                                      : ((IData)((0ULL 
                                                  == 
                                                  (0x7fffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data)))
                                          ? 0U : ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                  >> 6U))));
    vlSelf->__PVT__in32_rec__DOT__exp = (((IData)(vlSelf->__PVT__exp_code) 
                                          << 6U) | 
                                         (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
}
