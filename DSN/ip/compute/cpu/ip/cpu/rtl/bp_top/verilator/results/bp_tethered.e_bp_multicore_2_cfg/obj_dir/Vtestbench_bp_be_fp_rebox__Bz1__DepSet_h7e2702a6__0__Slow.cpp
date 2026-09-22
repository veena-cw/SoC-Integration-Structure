// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_rebox__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_fp_rebox__Bz1___ctor_var_reset(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(75, vlSelf->__PVT__raw_i);
    vlSelf->__PVT__tag_i = 0;
    vlSelf->__PVT__frm_i = 0;
    vlSelf->__PVT__invalid_exc_i = 0;
    vlSelf->__PVT__infinite_exc_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__reg_o);
    vlSelf->__PVT__fflags_o = 0;
    vlSelf->__Vcellout__round_mixed__midExceptionFlags = 0;
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags = 0;
    vlSelf->__PVT__fflags_lo = 0;
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp = 0;
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 = 0;
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut = 0;
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut = 0;
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 = 0;
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0 = 0;
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp = 0;
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN = 0;
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf = 0;
    vlSelf->__VdfgTmp_h183e8778__0 = 0;
}
