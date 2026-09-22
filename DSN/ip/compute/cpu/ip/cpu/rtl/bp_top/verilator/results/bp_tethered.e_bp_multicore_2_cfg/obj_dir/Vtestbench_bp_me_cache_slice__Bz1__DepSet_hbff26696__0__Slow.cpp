// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi86.h"
#include "Vtestbench_bp_me_stream_pump_out__pi87.h"
#include "Vtestbench_bsg_mem_1rw_sync__pi178.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb9ad54a3__0;
    // Body
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                    << 0x38U) | (((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                    ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                  ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                           ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                           : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[1U] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                       ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                       : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                     << 0x38U) | (((QData)((IData)(
                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                         ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                         : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                                ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                                : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[2U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[3U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[4U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[5U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[6U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[7U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[8U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[9U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xaU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xbU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xcU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xdU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xeU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xfU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__VdfgExtracted_h5933db0c__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__cache_controller__DOT__is_uc_op 
        = ((0x100000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
           & (0x180000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o));
    vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op 
        = (IData)(((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                    >> 5U) & (0x80000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfff0U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                  >> 1U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff0fU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xf0ffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff00U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                     >> 2U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_pkt_yumi_o) 
           & (IData)(vlSelf->__PVT__dma_pkt_v_o));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
        = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                              ? ((QData)((IData)((0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 6U))))) 
                                 << 6U) : (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                              ? (IData)(
                                                                        ((0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)) 
                                                                         >> 0x20U))
                                                              : 
                                                             (((0x80000000ULL 
                                                                > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                               & (0U 
                                                                  == 
                                                                  (0x20U 
                                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                               ? 
                                                              vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U]
                                                               : (IData)(
                                                                         (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                          >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                               ? (IData)(
                                                                         (0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)))
                                                               : 
                                                              (((0x80000000ULL 
                                                                 > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                                & (0U 
                                                                   == 
                                                                   (0x20U 
                                                                    & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                                ? 
                                                               vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U]
                                                                : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))))));
    __Vtemp_hb9ad54a3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 << 0x10U) | (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))));
    __Vtemp_hb9ad54a3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffff0000U 
                                                                          | ((0xff00U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hb9ad54a3__0[2U] = ((IData)(((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo 
        = ((0x4fU >= (0x7fU & (((0x10U < ((IData)(1U) 
                                          << (7U & 
                                              (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))))
                                 ? 4U : (7U & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))) 
                               << 4U))) ? (0xffffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((0x10U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U))))
                                                      ? 4U
                                                      : 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U))) 
                                                    << 4U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb9ad54a3__0[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((0x10U 
                                                           < 
                                                           ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                >> 0x10U))))
                                                           ? 4U
                                                           : 
                                                          (7U 
                                                           & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x10U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x10U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                               >> 0x10U))))
                                                          ? 4U
                                                          : 
                                                         (7U 
                                                          & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x10U))) 
                                                        << 4U))))) 
                                              | (__Vtemp_hb9ad54a3__0[
                                                 (3U 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     >> 1U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     << 4U)))))
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                            = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                        = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)));
    }
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                    = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                    = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     >> 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = (0x320000U | (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
            if ((0x80000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)) {
                if ((0U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                           | (0x7fffffU & (((0x40000U 
                                             & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                             ? 0xcU
                                             : ((0x20000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 1U
                                                  : 0U))) 
                                           << 0x11U)));
                } else if (((1U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                            | (2U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    if ((0x40000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = (0x1a0000U | (0x1ffffU 
                                            & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]));
                    } else if ((0x20000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        if ((0x80U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                          >> 6U)))) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((0x20U 
                                               & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x28U
                                                    : 0x38U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x27U
                                                    : 0x37U))
                                               : ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x26U
                                                    : 0x36U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x25U
                                                    : 0x35U))) 
                                             << 0x11U)));
                            }
                        } else if ((0x40U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((0x20U 
                                                     & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x24U
                                                       : 0x34U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x23U
                                                       : 0x33U))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x22U
                                                       : 0x32U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x21U
                                                       : 0x31U))) 
                                                   << 0x11U)));
                        } else if ((0x20U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((0x10U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x10U)))
                                               ? 0x20U
                                               : 0x30U) 
                                             << 0x11U)));
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                             >> 4U)))) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U)))
                                                     ? 0xaU
                                                     : 0xbU) 
                                                   << 0x11U)));
                        }
                    } else {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                               | (0x7fffffU & (((0x10000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 9U
                                                 : 8U) 
                                               << 0x11U)));
                    }
                } else {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = (0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]);
                }
            } else if (((((((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))) 
                              | (0x28U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                             | (0x30U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                            | (0x38U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                           | (0U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                          | (8U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                         | (0x10U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                        | (0x18U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                       | (0x7fffffU & (((0x20U == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                         ? 0x11U : 
                                        ((0x28U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                          ? 0x12U : 
                                         ((0x30U == 
                                           (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                           ? 0x13U : 
                                          ((0x38U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                            ? 0x10U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                ? 0x18U
                                                : (
                                                   (8U 
                                                    == 
                                                    (0xfffffU 
                                                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                    ? 0x19U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                     ? 0x1aU
                                                     : 
                                                    ((1U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U])
                                                      ? 0x1bU
                                                      : 0x1cU)))))))) 
                                       << 0x11U)));
            }
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                    << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 >> 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                = ((0x7e0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                   | (0x7fffffU & (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                          >> 0x20U)) 
                                                 << 0x10U))));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 1U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = ((0xffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]) 
               | ((IData)((0x2000000000ULL | (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                 << 6U)))) 
                  << 0x10U));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
            = (0x7fffffU & (((IData)((0x2000000000ULL 
                                      | (0x1ffffffffULL 
                                         & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                            << 6U)))) 
                             >> 0x10U) | ((IData)((
                                                   (0x2000000000ULL 
                                                    | (0x1ffffffffULL 
                                                       & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                          << 6U))) 
                                                   >> 0x20U)) 
                                          << 0x10U)));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = (0xffff0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0 
        = ((0x180000U & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 5U)) | (0x7ffffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                                                   >> 0x10U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x200000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? 0U : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                     ? 0U : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 0U : 3U)))
                        : 3U) : ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                  ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                      ? 0U : ((0x40000U 
                                               & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                               ? 0U
                                               : ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 0U
                                                   : 2U)))
                                  : 2U)) : ((0x200000U 
                                             & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                             ? 0U : 
                                            ((0x100000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? ((0x80000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 0U
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 1U
                                                    : 0U)))
                                              : ((0x40000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 1U
                                                   : 0U))))) 
              << 0x13U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = (0x10U | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
            ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                    : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                        : ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                            : (8U | (0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)))))
                : ((0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
                   | ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                       ? ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 7U : 6U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 5U : 4U))
                       : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 3U : 2U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 1U : 0U)))))
            : (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb9ad54a3__0;
    // Body
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                    << 0x38U) | (((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                    ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                  ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                           ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                           : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[1U] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                       ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                       : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                     << 0x38U) | (((QData)((IData)(
                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                         ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                         : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                                ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                                : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[2U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[3U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[4U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[5U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[6U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[7U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[8U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[9U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xaU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xbU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xcU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xdU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xeU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xfU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__VdfgExtracted_h5933db0c__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__cache_controller__DOT__is_uc_op 
        = ((0x100000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
           & (0x180000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o));
    vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op 
        = (IData)(((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                    >> 5U) & (0x80000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfff0U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                  >> 1U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff0fU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xf0ffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff00U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                     >> 2U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_pkt_yumi_o) 
           & (IData)(vlSelf->__PVT__dma_pkt_v_o));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
        = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                              ? ((QData)((IData)((0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 6U))))) 
                                 << 6U) : (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                              ? (IData)(
                                                                        ((0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)) 
                                                                         >> 0x20U))
                                                              : 
                                                             (((0x80000000ULL 
                                                                > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                               & (0U 
                                                                  == 
                                                                  (0x20U 
                                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                               ? 
                                                              vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U]
                                                               : (IData)(
                                                                         (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                          >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                               ? (IData)(
                                                                         (0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)))
                                                               : 
                                                              (((0x80000000ULL 
                                                                 > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                                & (0U 
                                                                   == 
                                                                   (0x20U 
                                                                    & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                                ? 
                                                               vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U]
                                                                : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))))));
    __Vtemp_hb9ad54a3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 << 0x10U) | (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))));
    __Vtemp_hb9ad54a3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffff0000U 
                                                                          | ((0xff00U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hb9ad54a3__0[2U] = ((IData)(((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo 
        = ((0x4fU >= (0x7fU & (((0x10U < ((IData)(1U) 
                                          << (7U & 
                                              (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))))
                                 ? 4U : (7U & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))) 
                               << 4U))) ? (0xffffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((0x10U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U))))
                                                      ? 4U
                                                      : 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U))) 
                                                    << 4U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb9ad54a3__0[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((0x10U 
                                                           < 
                                                           ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                >> 0x10U))))
                                                           ? 4U
                                                           : 
                                                          (7U 
                                                           & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x10U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x10U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                               >> 0x10U))))
                                                          ? 4U
                                                          : 
                                                         (7U 
                                                          & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x10U))) 
                                                        << 4U))))) 
                                              | (__Vtemp_hb9ad54a3__0[
                                                 (3U 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     >> 1U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     << 4U)))))
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                            = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                        = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)));
    }
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                    = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                    = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     >> 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = (0x320000U | (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
            if ((0x80000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)) {
                if ((0U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                           | (0x7fffffU & (((0x40000U 
                                             & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                             ? 0xcU
                                             : ((0x20000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 1U
                                                  : 0U))) 
                                           << 0x11U)));
                } else if (((1U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                            | (2U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    if ((0x40000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = (0x1a0000U | (0x1ffffU 
                                            & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]));
                    } else if ((0x20000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        if ((0x80U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                          >> 6U)))) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((0x20U 
                                               & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x28U
                                                    : 0x38U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x27U
                                                    : 0x37U))
                                               : ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x26U
                                                    : 0x36U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x25U
                                                    : 0x35U))) 
                                             << 0x11U)));
                            }
                        } else if ((0x40U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((0x20U 
                                                     & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x24U
                                                       : 0x34U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x23U
                                                       : 0x33U))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x22U
                                                       : 0x32U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x21U
                                                       : 0x31U))) 
                                                   << 0x11U)));
                        } else if ((0x20U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((0x10U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x10U)))
                                               ? 0x20U
                                               : 0x30U) 
                                             << 0x11U)));
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                             >> 4U)))) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U)))
                                                     ? 0xaU
                                                     : 0xbU) 
                                                   << 0x11U)));
                        }
                    } else {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                               | (0x7fffffU & (((0x10000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 9U
                                                 : 8U) 
                                               << 0x11U)));
                    }
                } else {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = (0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]);
                }
            } else if (((((((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))) 
                              | (0x28U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                             | (0x30U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                            | (0x38U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                           | (0U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                          | (8U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                         | (0x10U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                        | (0x18U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                       | (0x7fffffU & (((0x20U == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                         ? 0x11U : 
                                        ((0x28U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                          ? 0x12U : 
                                         ((0x30U == 
                                           (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                           ? 0x13U : 
                                          ((0x38U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                            ? 0x10U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                ? 0x18U
                                                : (
                                                   (8U 
                                                    == 
                                                    (0xfffffU 
                                                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                    ? 0x19U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                     ? 0x1aU
                                                     : 
                                                    ((1U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U])
                                                      ? 0x1bU
                                                      : 0x1cU)))))))) 
                                       << 0x11U)));
            }
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                    << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 >> 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                = ((0x7e0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                   | (0x7fffffU & (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                          >> 0x20U)) 
                                                 << 0x10U))));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 1U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = ((0xffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]) 
               | ((IData)((0x2000000000ULL | (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                 << 6U)))) 
                  << 0x10U));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
            = (0x7fffffU & (((IData)((0x2000000000ULL 
                                      | (0x1ffffffffULL 
                                         & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                            << 6U)))) 
                             >> 0x10U) | ((IData)((
                                                   (0x2000000000ULL 
                                                    | (0x1ffffffffULL 
                                                       & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                          << 6U))) 
                                                   >> 0x20U)) 
                                          << 0x10U)));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = (0xffff0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0 
        = ((0x180000U & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 5U)) | (0x7ffffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                                                   >> 0x10U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x200000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? 0U : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                     ? 0U : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 0U : 3U)))
                        : 3U) : ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                  ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                      ? 0U : ((0x40000U 
                                               & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                               ? 0U
                                               : ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 0U
                                                   : 2U)))
                                  : 2U)) : ((0x200000U 
                                             & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                             ? 0U : 
                                            ((0x100000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? ((0x80000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 0U
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 1U
                                                    : 0U)))
                                              : ((0x40000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 1U
                                                   : 0U))))) 
              << 0x13U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = (0x10U | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
            ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                    : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                        : ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                            : (8U | (0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)))))
                : ((0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
                   | ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                       ? ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 7U : 6U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 5U : 4U))
                       : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 3U : 2U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 1U : 0U)))))
            : (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb9ad54a3__0;
    // Body
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                    << 0x38U) | (((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                    ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                  ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                           ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                           : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[1U] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                       ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                       : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                     << 0x38U) | (((QData)((IData)(
                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                         ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                         : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                                ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                                : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[2U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[3U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[4U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[5U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[6U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[7U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[8U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[9U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xaU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xbU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xcU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xdU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xeU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xfU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__VdfgExtracted_h5933db0c__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__cache_controller__DOT__is_uc_op 
        = ((0x100000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
           & (0x180000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o));
    vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op 
        = (IData)(((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                    >> 5U) & (0x80000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfff0U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                  >> 1U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff0fU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xf0ffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff00U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                     >> 2U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_pkt_yumi_o) 
           & (IData)(vlSelf->__PVT__dma_pkt_v_o));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
        = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                              ? ((QData)((IData)((0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 6U))))) 
                                 << 6U) : (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                              ? (IData)(
                                                                        ((0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)) 
                                                                         >> 0x20U))
                                                              : 
                                                             (((0x80000000ULL 
                                                                > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                               & (0U 
                                                                  == 
                                                                  (0x20U 
                                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                               ? 
                                                              vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U]
                                                               : (IData)(
                                                                         (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                          >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                               ? (IData)(
                                                                         (0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)))
                                                               : 
                                                              (((0x80000000ULL 
                                                                 > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                                & (0U 
                                                                   == 
                                                                   (0x20U 
                                                                    & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                                ? 
                                                               vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U]
                                                                : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))))));
    __Vtemp_hb9ad54a3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 << 0x10U) | (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))));
    __Vtemp_hb9ad54a3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffff0000U 
                                                                          | ((0xff00U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hb9ad54a3__0[2U] = ((IData)(((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo 
        = ((0x4fU >= (0x7fU & (((0x10U < ((IData)(1U) 
                                          << (7U & 
                                              (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))))
                                 ? 4U : (7U & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))) 
                               << 4U))) ? (0xffffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((0x10U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U))))
                                                      ? 4U
                                                      : 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U))) 
                                                    << 4U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb9ad54a3__0[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((0x10U 
                                                           < 
                                                           ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                >> 0x10U))))
                                                           ? 4U
                                                           : 
                                                          (7U 
                                                           & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x10U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x10U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                               >> 0x10U))))
                                                          ? 4U
                                                          : 
                                                         (7U 
                                                          & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x10U))) 
                                                        << 4U))))) 
                                              | (__Vtemp_hb9ad54a3__0[
                                                 (3U 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     >> 1U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     << 4U)))))
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                            = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                        = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)));
    }
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                    = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                    = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     >> 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = (0x320000U | (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
            if ((0x80000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)) {
                if ((0U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                           | (0x7fffffU & (((0x40000U 
                                             & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                             ? 0xcU
                                             : ((0x20000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 1U
                                                  : 0U))) 
                                           << 0x11U)));
                } else if (((1U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                            | (2U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    if ((0x40000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = (0x1a0000U | (0x1ffffU 
                                            & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]));
                    } else if ((0x20000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        if ((0x80U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                          >> 6U)))) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((0x20U 
                                               & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x28U
                                                    : 0x38U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x27U
                                                    : 0x37U))
                                               : ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x26U
                                                    : 0x36U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x25U
                                                    : 0x35U))) 
                                             << 0x11U)));
                            }
                        } else if ((0x40U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((0x20U 
                                                     & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x24U
                                                       : 0x34U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x23U
                                                       : 0x33U))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x22U
                                                       : 0x32U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x21U
                                                       : 0x31U))) 
                                                   << 0x11U)));
                        } else if ((0x20U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((0x10U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x10U)))
                                               ? 0x20U
                                               : 0x30U) 
                                             << 0x11U)));
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                             >> 4U)))) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U)))
                                                     ? 0xaU
                                                     : 0xbU) 
                                                   << 0x11U)));
                        }
                    } else {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                               | (0x7fffffU & (((0x10000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 9U
                                                 : 8U) 
                                               << 0x11U)));
                    }
                } else {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = (0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]);
                }
            } else if (((((((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))) 
                              | (0x28U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                             | (0x30U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                            | (0x38U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                           | (0U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                          | (8U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                         | (0x10U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                        | (0x18U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                       | (0x7fffffU & (((0x20U == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                         ? 0x11U : 
                                        ((0x28U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                          ? 0x12U : 
                                         ((0x30U == 
                                           (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                           ? 0x13U : 
                                          ((0x38U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                            ? 0x10U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                ? 0x18U
                                                : (
                                                   (8U 
                                                    == 
                                                    (0xfffffU 
                                                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                    ? 0x19U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                     ? 0x1aU
                                                     : 
                                                    ((1U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U])
                                                      ? 0x1bU
                                                      : 0x1cU)))))))) 
                                       << 0x11U)));
            }
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                    << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 >> 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                = ((0x7e0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                   | (0x7fffffU & (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                          >> 0x20U)) 
                                                 << 0x10U))));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 1U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = ((0xffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]) 
               | ((IData)((0x2000000000ULL | (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                 << 6U)))) 
                  << 0x10U));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
            = (0x7fffffU & (((IData)((0x2000000000ULL 
                                      | (0x1ffffffffULL 
                                         & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                            << 6U)))) 
                             >> 0x10U) | ((IData)((
                                                   (0x2000000000ULL 
                                                    | (0x1ffffffffULL 
                                                       & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                          << 6U))) 
                                                   >> 0x20U)) 
                                          << 0x10U)));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = (0xffff0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0 
        = ((0x180000U & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 5U)) | (0x7ffffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                                                   >> 0x10U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x200000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? 0U : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                     ? 0U : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 0U : 3U)))
                        : 3U) : ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                  ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                      ? 0U : ((0x40000U 
                                               & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                               ? 0U
                                               : ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 0U
                                                   : 2U)))
                                  : 2U)) : ((0x200000U 
                                             & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                             ? 0U : 
                                            ((0x100000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? ((0x80000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 0U
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 1U
                                                    : 0U)))
                                              : ((0x40000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 1U
                                                   : 0U))))) 
              << 0x13U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = (0x10U | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
            ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                    : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                        : ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                            : (8U | (0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)))))
                : ((0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
                   | ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                       ? ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 7U : 6U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 5U : 4U))
                       : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 3U : 2U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 1U : 0U)))))
            : (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__1(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb9ad54a3__0;
    // Body
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                    << 0x38U) | (((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                    ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                  ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                        ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                        : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                           ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                           : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[1U] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                       ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                       : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                     << 0x38U) | (((QData)((IData)(
                                                   ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                      ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                      : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                         ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                         : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                          << 0x10U) 
                                                                         | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                               ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                               : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                                             << 8U) 
                                                                            | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                                ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                                : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[2U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[3U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[4U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[5U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[6U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[7U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[8U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[9U] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xaU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xbU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xcU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xdU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xeU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xfU] 
        = ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
              ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
              : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                          << 0x10U) | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                          ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                          : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                        << 8U) | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                   ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                   : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__VdfgExtracted_h5933db0c__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
    vlSelf->__PVT__cache_controller__DOT__is_uc_op 
        = ((0x100000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
           & (0x180000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o));
    vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op 
        = (IData)(((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                    >> 5U) & (0x80000000ULL > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfff0U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                  >> 1U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff0fU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xf0ffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xfffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xff00U & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                     >> 2U))))))))));
    vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o 
        = ((0xffU & (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_pkt_yumi_o) 
           & (IData)(vlSelf->__PVT__dma_pkt_v_o));
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
        = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                              ? ((QData)((IData)((0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                             >> 6U))))) 
                                 << 6U) : (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                              ? (IData)(
                                                                        ((0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)) 
                                                                         >> 0x20U))
                                                              : 
                                                             (((0x80000000ULL 
                                                                > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                               & (0U 
                                                                  == 
                                                                  (0x20U 
                                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                               ? 
                                                              vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U]
                                                               : (IData)(
                                                                         (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                          >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__cache_controller__DOT__bank_select__DOT__is_tag_op)
                                                               ? (IData)(
                                                                         (0x1ffffffffULL 
                                                                          & ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 6U))))) 
                                                                             << 6U)))
                                                               : 
                                                              (((0x80000000ULL 
                                                                 > vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o) 
                                                                & (0U 
                                                                   == 
                                                                   (0x20U 
                                                                    & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))
                                                                ? 
                                                               vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U]
                                                                : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))))));
    __Vtemp_hb9ad54a3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 << 0x10U) | (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))));
    __Vtemp_hb9ad54a3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o)))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffff0000U 
                                                                          | ((0xff00U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hb9ad54a3__0[2U] = ((IData)(((((QData)((IData)(
                                                           (0xffff0000U 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o 
                                                                                >> 3U)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__2__KET____DOT__non_max_size__DOT__mask_expand__o) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelf->cache_controller__DOT____Vcellout__cache_pkt_sel__BRA__1__KET____DOT__non_max_size__DOT__mask_expand__o))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo 
        = ((0x4fU >= (0x7fU & (((0x10U < ((IData)(1U) 
                                          << (7U & 
                                              (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))))
                                 ? 4U : (7U & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0x10U))) 
                               << 4U))) ? (0xffffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((0x10U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U))))
                                                      ? 4U
                                                      : 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U))) 
                                                    << 4U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb9ad54a3__0[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((0x10U 
                                                           < 
                                                           ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                >> 0x10U))))
                                                           ? 4U
                                                           : 
                                                          (7U 
                                                           & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x10U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x10U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                               >> 0x10U))))
                                                          ? 4U
                                                          : 
                                                         (7U 
                                                          & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x10U))) 
                                                        << 4U))))) 
                                              | (__Vtemp_hb9ad54a3__0[
                                                 (3U 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     >> 1U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & (((0x10U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                            >> 0x10U))))
                                                       ? 4U
                                                       : 
                                                      (7U 
                                                       & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                          >> 0x10U))) 
                                                     << 4U)))))
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                            = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
                        = vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_pkt_yumi_i;
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li 
            = ((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
               & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)));
    }
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] = 0U;
    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                    = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                        >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     << 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                    = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                     >> 0x10U));
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = (0x320000U | (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo 
                = vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li;
            if ((0x80000000ULL <= vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)) {
                if ((0U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                           | (0x7fffffU & (((0x40000U 
                                             & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                             ? 0xcU
                                             : ((0x20000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x10000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                  ? 1U
                                                  : 0U))) 
                                           << 0x11U)));
                } else if (((1U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                            | (2U == (0xfU & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    if ((0x40000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = (0x1a0000U | (0x1ffffU 
                                            & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]));
                    } else if ((0x20000U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                        if ((0x80U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                          >> 6U)))) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((0x20U 
                                               & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x28U
                                                    : 0x38U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x27U
                                                    : 0x37U))
                                               : ((0x10U 
                                                   & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x26U
                                                    : 0x36U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U)))
                                                    ? 0x25U
                                                    : 0x35U))) 
                                             << 0x11U)));
                            }
                        } else if ((0x40U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((0x20U 
                                                     & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x24U
                                                       : 0x34U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x23U
                                                       : 0x33U))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x22U
                                                       : 0x32U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                           >> 0x10U)))
                                                       ? 0x21U
                                                       : 0x31U))) 
                                                   << 0x11U)));
                        } else if ((0x20U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((0x10U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                    = ((0x1ffffU & 
                                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                       | (0x7fffffU 
                                          & (((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x10U)))
                                               ? 0x20U
                                               : 0x30U) 
                                             << 0x11U)));
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                             >> 4U)))) {
                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                                = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                                   | (0x7fffffU & (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                         >> 0x10U)))
                                                     ? 0xaU
                                                     : 0xbU) 
                                                   << 0x11U)));
                        }
                    } else {
                        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                            = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                               | (0x7fffffU & (((0x10000U 
                                                 & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                 ? 9U
                                                 : 8U) 
                                               << 0x11U)));
                    }
                } else {
                    vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                        = (0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]);
                }
            } else if (((((((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))) 
                              | (0x28U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                             | (0x30U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                            | (0x38U == (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                           | (0U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                          | (8U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                         | (0x10U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))) 
                        | (0x18U == (0xfffffU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o))))) {
                vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                    = ((0x1ffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                       | (0x7fffffU & (((0x20U == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                         ? 0x11U : 
                                        ((0x28U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                          ? 0x12U : 
                                         ((0x30U == 
                                           (0x3fU & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                           ? 0x13U : 
                                          ((0x38U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                            ? 0x10U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                ? 0x18U
                                                : (
                                                   (8U 
                                                    == 
                                                    (0xfffffU 
                                                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                    ? 0x19U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_addr_o)))
                                                     ? 0x1aU
                                                     : 
                                                    ((1U 
                                                      & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U])
                                                      ? 0x1bU
                                                      : 0x1cU)))))))) 
                                       << 0x11U)));
            }
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    << 0x10U) | (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_mask_lo));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                = ((vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                    >> 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 << 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                    << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                 >> 0x10U));
            vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
                = ((0x7e0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U]) 
                   | (0x7fffffU & (((IData)(vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__cache_controller__DOT__fwd_pkt_daddr_lo 
                                                          >> 0x20U)) 
                                                 << 0x10U))));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo = 1U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = ((0xffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]) 
               | ((IData)((0x2000000000ULL | (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                 << 6U)))) 
                  << 0x10U));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U] 
            = (0x7fffffU & (((IData)((0x2000000000ULL 
                                      | (0x1ffffffffULL 
                                         & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                            << 6U)))) 
                             >> 0x10U) | ((IData)((
                                                   (0x2000000000ULL 
                                                    | (0x1ffffffffULL 
                                                       & ((QData)((IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                                                          << 6U))) 
                                                   >> 0x20U)) 
                                          << 0x10U)));
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
            = (0xffff0000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U]);
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_done_li;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo = 1U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgExtracted_hcf84b2dc__0 
        = ((0x180000U & (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                         << 5U)) | (0x7ffffU & ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                                                   >> 0x10U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
           | (((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x200000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? 0U : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                     ? 0U : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 0U : 3U)))
                        : 3U) : ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                  ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                      ? 0U : ((0x40000U 
                                               & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                               ? 0U
                                               : ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 0U
                                                   : 2U)))
                                  : 2U)) : ((0x200000U 
                                             & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                             ? 0U : 
                                            ((0x100000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? ((0x80000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 0U
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                    ? 1U
                                                    : 0U)))
                                              : ((0x40000U 
                                                  & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                                   ? 1U
                                                   : 0U))))) 
              << 0x13U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = (0x10U | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
        = ((0x400000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
            ? ((0x100000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                ? ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                    ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                    : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                        ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                        : ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                            ? (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)
                            : (8U | (0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode)))))
                : ((0x1ffff0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode) 
                   | ((0x80000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                       ? ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 7U : 6U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 5U : 4U))
                       : ((0x40000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                           ? ((0x20000U & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                               ? 3U : 2U) : ((0x20000U 
                                              & vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])
                                              ? 1U : 0U)))))
            : (0x1fffe0U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode));
}
