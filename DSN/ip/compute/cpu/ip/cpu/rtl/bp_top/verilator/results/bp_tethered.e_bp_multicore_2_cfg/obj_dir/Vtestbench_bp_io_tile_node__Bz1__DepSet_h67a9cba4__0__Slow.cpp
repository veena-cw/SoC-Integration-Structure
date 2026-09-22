// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi10.h"

VL_ATTR_COLD void Vtestbench_bp_io_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__3(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__3\n"); );
    // Body
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_stream_to_wormhole->pr_ready_and_o));
}
