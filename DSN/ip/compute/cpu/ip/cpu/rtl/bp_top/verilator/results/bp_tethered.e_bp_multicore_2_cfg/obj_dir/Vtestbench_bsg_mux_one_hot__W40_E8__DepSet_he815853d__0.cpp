// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W40_E8.h"

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                    Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0\n"); );
    // Body
    vlSelf->data_o = (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0x10U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xfU])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xeU])) 
                                                 >> 0x1dU))) 
                       & (- (QData)((IData)((1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                   >> 7U)))))) 
                      | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xeU])) 
                            << 0x23U) | (((QData)((IData)(
                                                          vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xdU])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xcU])) 
                                          >> 0x1dU))) 
                          & (- (QData)((IData)((1U 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                   >> 6U)))))) 
                         | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xcU])) 
                               << 0x23U) | (((QData)((IData)(
                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xbU])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xaU])) 
                                               >> 0x1dU))) 
                             & (- (QData)((IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                      >> 5U)))))) 
                            | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xaU])) 
                                  << 0x23U) | (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[9U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[8U])) 
                                                  >> 0x1dU))) 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                         >> 4U)))))) 
                               | (((((QData)((IData)(
                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[8U])) 
                                     << 0x23U) | (((QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[7U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[6U])) 
                                                     >> 0x1dU))) 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                            >> 3U)))))) 
                                  | (((((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[6U])) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[5U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[4U])) 
                                                   >> 0x1dU))) 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                               >> 2U)))))) 
                                     | (((((QData)((IData)(
                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[4U])) 
                                           << 0x23U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[3U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                                >> 0x1dU))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                                  >> 1U)))))) 
                                        | ((((QData)((IData)(
                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])) 
                                                  >> 0x1dU))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv)))))))))))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                    Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0\n"); );
    // Body
    vlSelf->data_o = (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0x10U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xfU])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xeU])) 
                                                 >> 0x1dU))) 
                       & (- (QData)((IData)((1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                   >> 7U)))))) 
                      | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xeU])) 
                            << 0x23U) | (((QData)((IData)(
                                                          vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xdU])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xcU])) 
                                          >> 0x1dU))) 
                          & (- (QData)((IData)((1U 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                   >> 6U)))))) 
                         | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xcU])) 
                               << 0x23U) | (((QData)((IData)(
                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xbU])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xaU])) 
                                               >> 0x1dU))) 
                             & (- (QData)((IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                      >> 5U)))))) 
                            | (((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0xaU])) 
                                  << 0x23U) | (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[9U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[8U])) 
                                                  >> 0x1dU))) 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                         >> 4U)))))) 
                               | (((((QData)((IData)(
                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[8U])) 
                                     << 0x23U) | (((QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[7U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[6U])) 
                                                     >> 0x1dU))) 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                            >> 3U)))))) 
                                  | (((((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[6U])) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[5U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[4U])) 
                                                   >> 0x1dU))) 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                               >> 2U)))))) 
                                     | (((((QData)((IData)(
                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[4U])) 
                                           << 0x23U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[3U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                                >> 0x1dU))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv) 
                                                                  >> 1U)))))) 
                                        | ((((QData)((IData)(
                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])) 
                                                  >> 0x1dU))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv)))))))))))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__host__DOT__register__DOT__rmux_oh__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                    Vtestbench_bsg_mux_one_hot__W40_E8___nba_sequent__TOP__testbench__DOT__host__DOT__register__DOT__rmux_oh__0\n"); );
    // Body
    vlSelf->data_o = (((((QData)((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xeU]))) 
                       & (- (QData)((IData)((1U & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                   >> 7U)))))) 
                      | (((((QData)((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xcU]))) 
                          & (- (QData)((IData)((1U 
                                                & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                   >> 6U)))))) 
                         | (((((QData)((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xbU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0xaU]))) 
                             & (- (QData)((IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                      >> 5U)))))) 
                            | (((((QData)((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__data_li[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSymsp->TOP.testbench__DOT__host__DOT__data_li[8U]))) 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                         >> 4U)))))) 
                               | (((((QData)((IData)(
                                                     vlSymsp->TOP.testbench__DOT__host__DOT__data_li[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__host__DOT__data_li[6U]))) 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                            >> 3U)))))) 
                                  | (((((QData)((IData)(
                                                        vlSymsp->TOP.testbench__DOT__host__DOT__data_li[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__host__DOT__data_li[4U]))) 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                               >> 2U)))))) 
                                     | (((((QData)((IData)(
                                                           vlSymsp->TOP.testbench__DOT__host__DOT__data_li[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.testbench__DOT__host__DOT__data_li[2U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                                                                  >> 1U)))))) 
                                        | ((((QData)((IData)(
                                                             vlSymsp->TOP.testbench__DOT__host__DOT__data_li[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP.testbench__DOT__host__DOT__data_li[0U]))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r)))))))))))));
}
