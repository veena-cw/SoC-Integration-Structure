// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35.h"

VL_ATTR_COLD void Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35___ctor_var_reset(Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__v_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__data_i);
    vlSelf->__PVT__ready_and_o = 0;
    vlSelf->__PVT__v_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__data_o);
    vlSelf->__PVT__ready_and_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__initial_data_reg__DOT__data_r);
}
