// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_pipe_int__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h241a2fb4__0;
    VlWide<4>/*127:0*/ __Vtemp_h07b058b3__0;
    VlWide<5>/*159:0*/ __Vtemp_h5b3d791c__0;
    VlWide<6>/*191:0*/ __Vtemp_h8f906b37__0;
    VlWide<7>/*223:0*/ __Vtemp_h52c84915__0;
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

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h4e100290__0;
    VlWide<4>/*127:0*/ __Vtemp_hb56d202c__0;
    VlWide<5>/*159:0*/ __Vtemp_he4bb6dc4__0;
    VlWide<6>/*191:0*/ __Vtemp_ha4d4230a__0;
    VlWide<7>/*223:0*/ __Vtemp_hbbe81581__0;
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

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__3(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__3\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__4(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__4\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__5(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__5\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__6(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__6\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__7(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__7\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__8(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__8\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__9(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__9\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__10(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__10\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__11(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__11\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__12(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__12\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__13(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__13\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__14(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__14\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__15(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__15\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__16(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__16\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__17(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__17\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__18(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__18\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__19(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__19\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__20(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__20\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__21(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__21\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__22(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__22\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__23(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__23\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__24(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__24\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__25(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__25\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__26(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__26\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__27(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__27\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__28(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__28\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__29(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__29\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__30(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__30\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__31(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__31\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__32(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__32\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__33(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__33\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__34(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__34\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__35(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__35\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__36(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__36\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__37(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__37\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__38(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__38\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__39(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__39\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__40(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__40\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__41(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__41\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U])))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__42(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__42\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__43(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__43\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__44(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__44\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__45(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__45\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__46(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__46\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__47(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__47\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__48(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__48\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__49(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__49\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__50(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__50\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__51(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__51\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__52(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__52\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__53(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__53\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__54(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__54\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__55(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__55\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__56(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__56\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__57(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__57\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__58(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__58\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__59(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__59\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__60(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__60\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__61(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__61\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__62(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__62\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__63(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__63\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__64(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__64\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__65(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__65\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__66(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__66\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__67(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__67\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__68(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__68\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__69(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__69\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__70(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__70\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__71(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__71\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__72(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__72\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__73(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__73\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__74(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__74\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__75(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__75\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__76(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__76\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__77(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__77\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__78(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__78\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__79(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__79\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__80(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__80\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__81(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__81\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__82(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__82\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__83(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__83\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__84(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__84\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__85(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__85\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__86(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__86\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__87(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__87\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__88(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__88\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__89(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__89\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__90(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__90\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__91(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__91\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__92(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__92\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__93(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__93\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__94(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__94\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__95(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__95\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__96(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__96\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__97(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__97\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__98(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__98\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__99(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__99\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__100(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__100\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__101(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__101\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__102(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__102\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__103(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__103\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__104(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__104\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__105(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__105\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__106(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__106\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__107(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__107\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__108(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__108\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__109(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__109\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__110(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__110\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__111(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__111\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__112(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__112\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__113(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__113\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__114(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__114\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__115(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__115\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__116(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__116\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__117(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__117\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__118(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__118\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__119(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__119\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__120(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__120\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__121(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__121\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__122(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__122\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__123(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__123\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__124(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__124\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__125(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__125\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__126(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__126\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__127(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__127\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__128(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__128\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__129(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__129\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__130(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__130\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__131(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__131\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__132(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__132\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__133(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__133\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__134(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__134\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__135(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__135\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__136(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__136\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__137(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__137\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__138(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__138\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__139(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__139\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__140(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__140\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__141(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__141\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__142(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__142\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__143(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__143\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__144(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__144\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__145(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__145\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__146(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__146\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__147(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__147\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__148(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__148\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__149(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__149\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__150(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__150\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__151(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__151\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__152(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__152\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__153(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__153\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__154(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__154\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__155(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__155\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__156(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__156\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__157(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__157\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__158(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__158\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__159(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__159\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__160(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__160\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__161(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__161\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__162(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__162\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__163(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__163\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__164(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__164\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__165(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__165\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__166(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__166\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__167(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__167\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__168(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__168\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__169(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__169\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__170(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__170\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__171(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__171\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__172(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__172\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__173(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__173\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__174(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__174\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__175(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__175\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__176(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__176\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__177(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__177\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__178(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__178\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__179(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__179\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__180(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__180\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__181(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__181\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__182(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__182\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__183(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__183\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__184(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__184\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__185(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__185\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__186(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__186\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__187(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__187\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__bclzh__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__bclzl__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__2\n"); );
    // Body
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U]);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U]);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[0U] = 0U;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[1U] = 0U;
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__bclzh__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__3(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__3\n"); );
    // Body
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U]);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U]);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0U] = 0U;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[1U] = 0U;
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__5(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__5\n"); );
    // Body
    vlSelf->__PVT__lzero = ((IData)(vlSelf->__VdfgTmp_h099d915f__0) 
                            & (vlSelf->__PVT__bclzl__DOT__pe0__DOT__b__DOT__addr[0xcU] 
                               >> 5U));
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__0\n"); );
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
}

VL_INLINE_OPT void Vtestbench_bp_be_pipe_int__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1(Vtestbench_bp_be_pipe_int__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_pipe_int__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early__1\n"); );
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
}
