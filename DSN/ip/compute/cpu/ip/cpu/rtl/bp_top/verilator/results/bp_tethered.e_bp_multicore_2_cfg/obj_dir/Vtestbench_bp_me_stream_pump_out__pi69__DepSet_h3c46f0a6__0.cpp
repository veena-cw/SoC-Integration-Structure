// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_out__pi69___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out__1(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out__1\n"); );
    // Body
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
}
