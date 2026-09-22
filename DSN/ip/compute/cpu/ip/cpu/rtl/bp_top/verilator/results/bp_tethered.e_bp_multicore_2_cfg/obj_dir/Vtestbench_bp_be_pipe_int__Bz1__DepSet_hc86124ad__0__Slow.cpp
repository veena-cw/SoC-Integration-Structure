// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_pipe_int__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_pipe_int__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                 >> 5U))));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (QData)((IData)((0x1ffffU & ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                        >> 0x14U)))));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (QData)((IData)((0x1ffffffU & ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                          << 0x15U) 
                                         | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffffU & ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                           << 0x1aU) 
                                          | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                             >> 6U)))));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (QData)((IData)((0x7fffffffU & ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                           << 0x1dU) 
                                          | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                             >> 3U)))));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (QData)((IData)(((vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                            << 0x1fU) | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                         >> 1U))));
    vlSelf->__VdfgTmp_he74f80dd__0 = ((0x80000000U 
                                       & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                          << 0x18U)) 
                                      | ((0x40000000U 
                                          & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                     << 6U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                        << 4U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                           << 2U)) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 2U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtestbench_bp_be_pipe_int__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                 >> 5U))));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (QData)((IData)((0x1ffffU & ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                        >> 0x14U)))));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (QData)((IData)((0x1ffffffU & ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                          << 0x15U) 
                                         | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffffU & ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                           << 0x1aU) 
                                          | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                             >> 6U)))));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (QData)((IData)((0x7fffffffU & ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                           << 0x1dU) 
                                          | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                             >> 3U)))));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (QData)((IData)(((vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                            << 0x1fU) | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                         >> 1U))));
    vlSelf->__VdfgTmp_ha3283292__0 = ((0x80000000U 
                                       & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                          << 0x18U)) 
                                      | ((0x40000000U 
                                          & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                     << 6U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                        << 4U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                           << 2U)) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 2U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtestbench_bp_be_pipe_int__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h241a2fb4__0;
    VlWide<4>/*127:0*/ __Vtemp_h07b058b3__0;
    VlWide<5>/*159:0*/ __Vtemp_h5b3d791c__0;
    VlWide<6>/*191:0*/ __Vtemp_h8f906b37__0;
    VlWide<7>/*223:0*/ __Vtemp_h52c84915__0;
    // Body
    __Vtemp_h07b058b3__0[2U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 1U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 << 2U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                        | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_h5b3d791c__0[3U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                    >> 2U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 << 3U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                          << 0x3fU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                               >> 1U))) 
                                                        | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                << 0x1fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                  >> 1U))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h8f906b37__0[4U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 3U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 << 4U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                               >> 2U))) 
                                                        | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                            >> 0x1dU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                << 0x1eU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                  >> 2U))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 3U)));
    __Vtemp_h52c84915__0[5U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 4U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 << 5U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x1dU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                               >> 3U))) 
                                                        | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                            >> 0x1cU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x3dU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                << 0x1dU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                  >> 3U))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 4U)));
    __Vtemp_h241a2fb4__0[1U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 << 1U) | (IData)((VL_STREAML_FAST_QQI(33, vlSelf->__PVT__bclzh__DOT__reversed, 0) 
                                                   >> 0x20U)));
    __Vtemp_h241a2fb4__0[6U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                    >> 5U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 << 6U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                               >> 4U))) 
                                                        | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                            >> 0x1bU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 0x3cU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                  >> 4U))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 5U)));
    __Vtemp_h241a2fb4__0[7U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                    >> 5U))) 
                                             | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                             << 0x3bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                << 0x1bU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                                  >> 5U))) 
                                                           | vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 6U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(33, vlSelf->__PVT__bclzh__DOT__reversed, 0));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_h241a2fb4__0[1U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_h07b058b3__0[2U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_h5b3d791c__0[3U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_h8f906b37__0[4U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_h52c84915__0[5U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_h241a2fb4__0[6U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_h241a2fb4__0[7U];
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo = (
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                         >> 6U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_he74f80dd__0))) 
                                                   & (1ULL 
                                                      | ((QData)((IData)(
                                                                         (~ vlSelf->__VdfgTmp_he74f80dd__0))) 
                                                         << 1U)));
    vlSelf->__VdfgTmp_h06d11e10__0 = (0ULL == ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo 
                                                - 1ULL) 
                                               & vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo));
}

VL_ATTR_COLD void Vtestbench_bp_be_pipe_int__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h4e100290__0;
    VlWide<4>/*127:0*/ __Vtemp_hb56d202c__0;
    VlWide<5>/*159:0*/ __Vtemp_he4bb6dc4__0;
    VlWide<6>/*191:0*/ __Vtemp_ha4d4230a__0;
    VlWide<7>/*223:0*/ __Vtemp_hbbe81581__0;
    // Body
    __Vtemp_hb56d202c__0[2U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 1U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 << 2U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                        | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_he4bb6dc4__0[3U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                    >> 2U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 << 3U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                          << 0x3fU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                               >> 1U))) 
                                                        | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                << 0x1fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                  >> 1U))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_ha4d4230a__0[4U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 3U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                 << 4U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                               >> 2U))) 
                                                        | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                            >> 0x1dU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                << 0x1eU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                  >> 2U))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 3U)));
    __Vtemp_hbbe81581__0[5U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                    >> 4U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 << 5U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x1dU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                               >> 3U))) 
                                                        | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
                                            >> 0x1cU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                             << 0x3dU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                << 0x1dU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                  >> 3U))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 4U)));
    __Vtemp_h4e100290__0[1U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 << 1U) | (IData)((VL_STREAML_FAST_QQI(33, vlSelf->__PVT__bclzl__DOT__reversed, 0) 
                                                   >> 0x20U)));
    __Vtemp_h4e100290__0[6U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                    >> 5U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 << 6U) | (((IData)(
                                                    (0x1ffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                               >> 4U))) 
                                                        | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                            >> 0x1bU) 
                                           | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 0x3cU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                  >> 4U))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 5U)));
    __Vtemp_h4e100290__0[7U] = (((IData)((0x1ffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                    >> 5U))) 
                                             | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                             << 0x3bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                                << 0x1bU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                                  >> 5U))) 
                                                           | vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 6U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(33, vlSelf->__PVT__bclzl__DOT__reversed, 0));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_h4e100290__0[1U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_hb56d202c__0[2U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_he4bb6dc4__0[3U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_ha4d4230a__0[4U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_hbbe81581__0[5U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_h4e100290__0[6U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_h4e100290__0[7U];
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo = (
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                                         >> 6U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_ha3283292__0))) 
                                                   & (1ULL 
                                                      | ((QData)((IData)(
                                                                         (~ vlSelf->__VdfgTmp_ha3283292__0))) 
                                                         << 1U)));
    vlSelf->__VdfgTmp_h099d915f__0 = (0ULL == ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo 
                                                - 1ULL) 
                                               & vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo));
}

VL_ATTR_COLD void Vtestbench_bp_be_pipe_int__Bz1___ctor_var_reset(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__en_i = 0;
    VL_ZERO_RESET_W(521, vlSelf->__PVT__reservation_i);
    vlSelf->__PVT__flush_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__data_o);
    vlSelf->__PVT__v_o = 0;
    vlSelf->__PVT__branch_o = 0;
    vlSelf->__PVT__btaken_o = 0;
    vlSelf->__PVT__npc_o = 0;
    vlSelf->__PVT__instr_misaligned_v_o = 0;
    vlSelf->__PVT__shamt = 0;
    vlSelf->__PVT__shamtn = 0;
    vlSelf->__PVT__ntaken_tgt = 0;
    vlSelf->__PVT__src1 = 0;
    vlSelf->__PVT__src2 = 0;
    vlSelf->__PVT__carry = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__sum);
    vlSelf->__PVT__comp_result = 0;
    vlSelf->__PVT__hzero = 0;
    vlSelf->__PVT__lzero = 0;
    vlSelf->__PVT__alu_result = 0;
    vlSelf->__PVT__bindex = 0;
    vlSelf->__VdfgTmp_hf8f076a0__0 = 0;
    vlSelf->__VdfgTmp_h4b78da8e__0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0 = 0;
    vlSelf->__PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0 = 0;
    vlSelf->__PVT__bclzh__DOT__reversed = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(231, vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(448, vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__reversed = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(231, vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(448, vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__box__DOT__reg_cast_o);
    vlSelf->__VdfgTmp_h06d11e10__0 = 0;
    vlSelf->__VdfgTmp_h099d915f__0 = 0;
    vlSelf->__VdfgTmp_he74f80dd__0 = 0;
    vlSelf->__VdfgTmp_ha3283292__0 = 0;
}
