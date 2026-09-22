// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___ctor_var_reset(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = 0;
    vlSelf->reset_i = 0;
    vlSelf->ready_param_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->data_i);
    vlSelf->v_i = 0;
    vlSelf->v_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->data_o);
    vlSelf->yumi_i = 0;
    vlSelf->__PVT__enq_i = 0;
    vlSelf->__PVT__head_r = 0;
    vlSelf->__PVT__tail_r = 0;
    vlSelf->__PVT__empty_r = 0;
    vlSelf->__PVT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
}
