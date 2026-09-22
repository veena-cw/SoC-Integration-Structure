// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_box__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h42458546__0;
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                    >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
           >> 0x10U);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xcU) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                    >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                         << 6U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                   >> 0x1aU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                        >> 1U));
    vlSelf->__VdfgTmp_h1bcb2658__0 = ((0x400000U & 
                                       (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                        >> 3U)) | (
                                                   (0x200000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                       >> 5U)) 
                                                   | ((0x100000U 
                                                       & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                          >> 7U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                             >> 9U)) 
                                                         | ((0x40000U 
                                                             & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                >> 0xbU)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                   >> 0xdU)) 
                                                               | ((0x10000U 
                                                                   & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                      >> 0xfU)) 
                                                                  | ((0x8000U 
                                                                      & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                         << 0xfU)) 
                                                                     | ((0x4000U 
                                                                         & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                            << 0xdU)) 
                                                                        | ((0x2000U 
                                                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                               << 0xbU)) 
                                                                           | ((0x1000U 
                                                                               & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 9U)) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xfU))))))))))))))))))))))));
    __Vtemp_h42458546__0[1U] = ((0xffff0000U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                       >> 8U))) 
                                                | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                                   << 0x10U))) 
                                | (IData)(((((QData)((IData)(
                                                             (0xffffffU 
                                                              & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                 | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))) 
                                             << 0x18U) 
                                            | (QData)((IData)(VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0)))) 
                                           >> 0x20U)));
    __Vtemp_h42458546__0[2U] = ((0xffffff00U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                  << 0x18U) 
                                                 | (0xffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                       >> 8U))) 
                                                | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
                                                   << 8U))) 
                                | (0xffU & ((0xffffU 
                                             & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                >> 8U)) 
                                            | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                               >> 0x10U))));
    __Vtemp_h42458546__0[3U] = (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                  | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
                                 << 0x18U) | (0xffffffU 
                                              & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                     >> 8U)) 
                                                 | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_h42458546__0[4U] = (0xffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                            | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
                                           >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)((((QData)((IData)((0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                  | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))) 
                    << 0x18U) | (QData)((IData)(VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_h42458546__0[1U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_h42458546__0[2U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_h42458546__0[3U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_h42458546__0[4U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                          >> 1U)) | vlSelf->__VdfgTmp_h1bcb2658__0) 
           & (1U | (0xfffffeU & ((~ vlSelf->__VdfgTmp_h1bcb2658__0) 
                                 << 1U))));
    vlSelf->__VdfgTmp_hb50f5e0d__0 = (0U == ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                              - (IData)(1U)) 
                                             & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_hc834dc9e__0;
    VlWide<7>/*223:0*/ __Vtemp_ha86281da__0;
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                        >> 9U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0x1fffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x19U) | ((QData)((IData)(
                                                              vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 7U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x1ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               >> 0xeU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x7ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                  >> 0x17U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U)));
    vlSelf->__VdfgTmp_hfbb38d62__0 = (((QData)((IData)(
                                                       (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                                        >> 0x1fU))) 
                                       << 0x33U) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]))) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                             >> 1U)))) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                >> 2U)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                   >> 3U)))) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                      >> 4U)))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                         >> 5U)))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                            >> 6U)))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                               >> 7U)))) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 8U)))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 9U)))) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xaU)))) 
                                                                    << 0x28U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xbU)))) 
                                                                       << 0x27U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xcU)))) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xdU)))) 
                                                                             << 0x25U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xeU)))) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xfU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x10U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x11U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x12U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 8U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 6U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 4U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 2U)) 
                                                                                | ((0x2000000U 
                                                                                & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 2U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 6U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 8U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_ha86281da__0[4U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0xaU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 << 0x1fU) | (((IData)(
                                                       (0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                << 0xbU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                  >> 0x15U))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                               >> 0x16U) 
                                              | ((IData)(
                                                         ((0x1fffffffffffffULL 
                                                           & ((((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                   << 0xbU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                     >> 0x15U))) 
                                                              | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_hc834dc9e__0[1U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 << 0x15U) | (IData)(
                                                     (VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0) 
                                                      >> 0x20U)));
    __Vtemp_hc834dc9e__0[2U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 >> 0xbU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hc834dc9e__0[3U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 0x15U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 << 0xaU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             >> 0xbU));
    __Vtemp_hc834dc9e__0[5U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0xaU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 >> 1U) | ((IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          << 0x36U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x16U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                               >> 0xaU))) 
                                                        | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_hc834dc9e__0[6U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 0x1fU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 << 0x14U) | ((IData)(
                                                      ((0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                << 0x16U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                  >> 0xaU))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_hc834dc9e__0[7U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 0x1fU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                               << 1U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                 >> 0x1fU))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hc834dc9e__0[8U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                    >> 0x14U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 << 9U) | ((IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 1U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                               >> 0x1fU))) 
                                                        | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           >> 0xcU));
    __Vtemp_hc834dc9e__0[9U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                    >> 9U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 << 0x1eU) | (((IData)(
                                                       (0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                                << 0xcU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                  >> 0x14U))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                               >> 0x17U) 
                                              | ((IData)(
                                                         ((0x1fffffffffffffULL 
                                                           & ((((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                                   << 0xcU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                     >> 0x14U))) 
                                                              | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp_hc834dc9e__0[0xaU] = (((IData)((0x1fffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 9U))) 
                                               | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                   >> 2U) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                            << 0x37U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                                 >> 9U))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x1eU));
    __Vtemp_hc834dc9e__0[0xbU] = ((IData)(((0x1fffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 9U))) 
                                               | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                           >> 0x20U)) 
                                  >> 2U);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_hc834dc9e__0[1U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_hc834dc9e__0[2U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_hc834dc9e__0[3U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_ha86281da__0[4U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_hc834dc9e__0[5U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_hc834dc9e__0[6U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_hc834dc9e__0[7U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = __Vtemp_hc834dc9e__0[8U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = __Vtemp_hc834dc9e__0[9U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = __Vtemp_hc834dc9e__0[0xaU];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = __Vtemp_hc834dc9e__0[0xbU];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = ((((QData)((IData)((1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                    >> 0x1eU)))) << 0x34U) 
            | vlSelf->__VdfgTmp_hfbb38d62__0) & (1ULL 
                                                 | (0x1ffffffffffffeULL 
                                                    & ((~ vlSelf->__VdfgTmp_hfbb38d62__0) 
                                                       << 1U))));
    vlSelf->__VdfgTmp_hd484eaa6__0 = (0ULL == ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                - 1ULL) 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__3(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__3\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__4\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__5\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__6(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__6\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__7(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__7\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__8(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__8\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__9(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__9\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__10(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__10\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__11(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__11\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__12(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__12\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__13(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__13\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__14(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__14\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__15(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__15\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__16(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__16\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__17(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__17\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__18(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__18\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__19(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__19\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__20(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__20\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__21(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__21\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__22(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__22\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__23(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__23\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__24(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__24\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__25(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__25\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__26(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__26\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__27(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__27\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__28(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__28\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__29(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__29\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__30(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__30\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__31(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__31\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__32(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__32\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__33(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__33\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((2U & (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__34(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__34\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__35(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__35\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__36(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__36\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__37(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__37\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__38(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__38\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__39(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__39\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__40(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__40\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__41(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__41\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__42(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__42\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__43(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__43\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__44(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__44\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__45(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__45\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__46(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__46\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__47(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__47\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffe0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__48(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__48\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__49(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__49\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__50(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__50\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__51(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__51\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__52(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__52\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__53(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__53\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__54(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__54\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__55(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__55\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__56(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__56\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__57(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__57\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__58(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__58\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__59(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__59\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__60(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__60\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__61(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__61\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__62(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__62\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__63(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__63\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__64(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__64\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__65(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__65\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__66(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__66\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__67(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__67\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__68(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__68\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__69(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__69\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__70(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__70\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__71(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__71\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__72(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__72\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__73(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__73\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__74(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__74\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__75(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__75\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__76(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__76\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__77(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__77\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__78(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__78\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__79(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__79\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__80(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__80\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__81(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__81\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__82(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__82\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__83(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__83\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__84(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__84\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__85(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__85\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__86(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__86\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__87(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__87\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__88(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__88\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__89(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__89\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__90(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__90\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__91(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__91\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__92(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__92\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__93(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__93\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__94(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__94\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__95(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__95\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__96(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__96\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__97(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__97\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__98(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__98\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__99(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__99\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__100(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__100\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__101(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__101\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__102(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__102\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__103(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__103\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__104(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__104\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__105(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__105\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__106(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__106\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__107(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__107\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__108(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__108\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__109(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__109\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__110(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__110\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__111(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__111\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__112(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__112\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__113(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__113\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__114(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__114\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__115(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__115\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__116(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__116\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__117(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__117\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__118(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__118\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__119(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__119\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__120(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__120\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__121(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__121\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__122(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__122\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__123(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__123\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__124(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__124\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__125(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__125\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__126(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__126\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__127(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__127\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__128(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__128\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__129(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__129\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__130(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__130\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__131(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__131\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__132(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__132\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__133(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__133\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__134(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__134\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__135(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__135\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__136(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__136\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__137(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__137\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__138(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__138\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__139(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__139\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)((((QData)((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)))) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | (IData)(((((QData)((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)))) 
                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))) 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0U] 
        = (IData)(((QData)((IData)((1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                                          >> 1U)))) 
                   << 0x20U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (IData)((((QData)((IData)((1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                                              >> 1U)))) 
                       << 0x20U) >> 0x20U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__3(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__3\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0U] = 0U;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] = 0U;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h42458546__0;
    // Body
    __Vtemp_h42458546__0[1U] = ((0xffff0000U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                       >> 8U))) 
                                                | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                                   << 0x10U))) 
                                | (IData)(((((QData)((IData)(
                                                             (0xffffffU 
                                                              & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                 | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))) 
                                             << 0x18U) 
                                            | (QData)((IData)(VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0)))) 
                                           >> 0x20U)));
    __Vtemp_h42458546__0[2U] = ((0xffffff00U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                  << 0x18U) 
                                                 | (0xffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                       >> 8U))) 
                                                | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
                                                   << 8U))) 
                                | (0xffU & ((0xffffU 
                                             & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                >> 8U)) 
                                            | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                               >> 0x10U))));
    __Vtemp_h42458546__0[3U] = (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                  | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
                                 << 0x18U) | (0xffffffU 
                                              & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                     >> 8U)) 
                                                 | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_h42458546__0[4U] = (0xffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                            | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
                                           >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)((((QData)((IData)((0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                  | vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))) 
                    << 0x18U) | (QData)((IData)(VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_h42458546__0[1U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_h42458546__0[2U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_h42458546__0[3U];
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_h42458546__0[4U];
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_hc834dc9e__0;
    VlWide<7>/*223:0*/ __Vtemp_ha86281da__0;
    // Body
    __Vtemp_ha86281da__0[4U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0xaU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 << 0x1fU) | (((IData)(
                                                       (0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                << 0xbU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                  >> 0x15U))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                               >> 0x16U) 
                                              | ((IData)(
                                                         ((0x1fffffffffffffULL 
                                                           & ((((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                   << 0xbU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                     >> 0x15U))) 
                                                              | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_hc834dc9e__0[1U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 << 0x15U) | (IData)(
                                                     (VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0) 
                                                      >> 0x20U)));
    __Vtemp_hc834dc9e__0[2U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 >> 0xbU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hc834dc9e__0[3U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 0x15U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 << 0xaU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             >> 0xbU));
    __Vtemp_hc834dc9e__0[5U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0xaU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 >> 1U) | ((IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          << 0x36U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x16U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                               >> 0xaU))) 
                                                        | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_hc834dc9e__0[6U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 0x1fU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 << 0x14U) | ((IData)(
                                                      ((0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                << 0x16U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                  >> 0xaU))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_hc834dc9e__0[7U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 0x1fU))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                               << 1U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                 >> 0x1fU))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hc834dc9e__0[8U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                    >> 0x14U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 << 9U) | ((IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 1U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                               >> 0x1fU))) 
                                                        | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           >> 0xcU));
    __Vtemp_hc834dc9e__0[9U] = (((IData)((0x1fffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                    >> 9U))) 
                                             | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 << 0x1eU) | (((IData)(
                                                       (0x1fffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                                << 0xcU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                  >> 0x14U))) 
                                                           | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                               >> 0x17U) 
                                              | ((IData)(
                                                         ((0x1fffffffffffffULL 
                                                           & ((((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                                   << 0xcU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                     >> 0x14U))) 
                                                              | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                          >> 0x20U)) 
                                                 << 9U)));
    __Vtemp_hc834dc9e__0[0xaU] = (((IData)((0x1fffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 9U))) 
                                               | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                   >> 2U) | ((IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                            << 0x37U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                                 >> 9U))) 
                                                          | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                                      >> 0x20U)) 
                                             << 0x1eU));
    __Vtemp_hc834dc9e__0[0xbU] = ((IData)(((0x1fffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 9U))) 
                                               | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                           >> 0x20U)) 
                                  >> 2U);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_hc834dc9e__0[1U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_hc834dc9e__0[2U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_hc834dc9e__0[3U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_ha86281da__0[4U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_hc834dc9e__0[5U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_hc834dc9e__0[6U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_hc834dc9e__0[7U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = __Vtemp_hc834dc9e__0[8U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = __Vtemp_hc834dc9e__0[9U];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = __Vtemp_hc834dc9e__0[0xaU];
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = __Vtemp_hc834dc9e__0[0xbU];
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                    >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
           >> 0x10U);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xcU) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                    >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                         << 6U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                   >> 0x1aU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                        >> 1U));
    vlSelf->__VdfgTmp_h1bcb2658__0 = ((0x400000U & 
                                       (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                        >> 3U)) | (
                                                   (0x200000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                       >> 5U)) 
                                                   | ((0x100000U 
                                                       & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                          >> 7U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                             >> 9U)) 
                                                         | ((0x40000U 
                                                             & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                >> 0xbU)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                   >> 0xdU)) 
                                                               | ((0x10000U 
                                                                   & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                                      >> 0xfU)) 
                                                                  | ((0x8000U 
                                                                      & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                         << 0xfU)) 
                                                                     | ((0x4000U 
                                                                         & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                            << 0xdU)) 
                                                                        | ((0x2000U 
                                                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                               << 0xbU)) 
                                                                           | ((0x1000U 
                                                                               & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 9U)) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                                                >> 0xfU))))))))))))))))))))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                          >> 1U)) | vlSelf->__VdfgTmp_h1bcb2658__0) 
           & (1U | (0xfffffeU & ((~ vlSelf->__VdfgTmp_h1bcb2658__0) 
                                 << 1U))));
    vlSelf->__VdfgTmp_hb50f5e0d__0 = (0U == ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                              - (IData)(1U)) 
                                             & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__1\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                        >> 9U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0x1fffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x19U) | ((QData)((IData)(
                                                              vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 7U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x1ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               >> 0xeU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x7ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                  >> 0x17U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U)));
    vlSelf->__VdfgTmp_hfbb38d62__0 = (((QData)((IData)(
                                                       (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                                        >> 0x1fU))) 
                                       << 0x33U) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]))) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                             >> 1U)))) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                >> 2U)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                   >> 3U)))) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                      >> 4U)))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                         >> 5U)))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                            >> 6U)))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                               >> 7U)))) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 8U)))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 9U)))) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xaU)))) 
                                                                    << 0x28U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xbU)))) 
                                                                       << 0x27U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xcU)))) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xdU)))) 
                                                                             << 0x25U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xeU)))) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xfU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x10U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x11U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x12U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 8U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 6U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 4U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                << 2U)) 
                                                                                | ((0x2000000U 
                                                                                & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 2U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 6U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 8U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = ((((QData)((IData)((1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                    >> 0x1eU)))) << 0x34U) 
            | vlSelf->__VdfgTmp_hfbb38d62__0) & (1ULL 
                                                 | (0x1ffffffffffffeULL 
                                                    & ((~ vlSelf->__VdfgTmp_hfbb38d62__0) 
                                                       << 1U))));
    vlSelf->__VdfgTmp_hd484eaa6__0 = (0ULL == ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                - 1ULL) 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}
