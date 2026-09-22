// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_control__pi104.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_control__pi104___ctor_var_reset(Vtestbench_bp_me_stream_pump_control__pi104* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_me_stream_pump_control__pi104___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__header_i);
    vlSelf->__PVT__ack_i = 0;
    vlSelf->__PVT__addr_o = 0;
    vlSelf->__PVT__first_o = 0;
    vlSelf->__PVT__critical_o = 0;
    vlSelf->__PVT__last_o = 0;
    vlSelf->__PVT__nz__DOT__state_n = 0;
    vlSelf->__PVT__nz__DOT__state_r = 0;
    vlSelf->__PVT__nz__DOT__size_li = 0;
    vlSelf->__PVT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__nz__DOT__cnt_lo = 0;
}
