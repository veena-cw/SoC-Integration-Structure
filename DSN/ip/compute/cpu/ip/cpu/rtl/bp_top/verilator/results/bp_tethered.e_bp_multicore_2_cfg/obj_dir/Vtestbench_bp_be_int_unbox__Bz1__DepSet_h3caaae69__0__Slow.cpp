// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_int_unbox__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_int_unbox__Bz1___ctor_var_reset(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(66, vlSelf->__PVT__reg_i);
    vlSelf->__PVT__tag_i = 0;
    vlSelf->__PVT__unsigned_i = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__val_o);
    vlSelf->__PVT__raw = 0;
}
