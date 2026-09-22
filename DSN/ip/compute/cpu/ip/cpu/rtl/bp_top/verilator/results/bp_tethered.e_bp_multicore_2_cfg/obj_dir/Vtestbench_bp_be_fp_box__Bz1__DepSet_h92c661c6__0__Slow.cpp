// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_box__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
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
}

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__2\n"); );
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
}

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__0\n"); );
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
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                          >> 1U)) | vlSelf->__VdfgTmp_h1bcb2658__0) 
           & (1U | (0xfffffeU & ((~ vlSelf->__VdfgTmp_h1bcb2658__0) 
                                 << 1U))));
    vlSelf->__VdfgTmp_hb50f5e0d__0 = (0U == ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                              - (IData)(1U)) 
                                             & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_box__1\n"); );
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

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                          >> 1U)) | vlSelf->__VdfgTmp_h1bcb2658__0) 
           & (1U | (0xfffffeU & ((~ vlSelf->__VdfgTmp_h1bcb2658__0) 
                                 << 1U))));
    vlSelf->__VdfgTmp_hb50f5e0d__0 = (0U == ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                              - (IData)(1U)) 
                                             & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__1(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__fp_box__1\n"); );
    // Body
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

VL_ATTR_COLD void Vtestbench_bp_be_fp_box__Bz1___ctor_var_reset(Vtestbench_bp_be_fp_box__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_box__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ieee_i = 0;
    vlSelf->__PVT__tag_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__reg_o);
    vlSelf->__PVT__exp_code = 0;
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = 0;
    vlSelf->__PVT__in32_rec__DOT__exp = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(144, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(192, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(192, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(371, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(448, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__VdfgTmp_hb50f5e0d__0 = 0;
    vlSelf->__VdfgTmp_h1bcb2658__0 = 0;
    vlSelf->__VdfgTmp_hd484eaa6__0 = 0;
    vlSelf->__VdfgTmp_hfbb38d62__0 = 0;
}
