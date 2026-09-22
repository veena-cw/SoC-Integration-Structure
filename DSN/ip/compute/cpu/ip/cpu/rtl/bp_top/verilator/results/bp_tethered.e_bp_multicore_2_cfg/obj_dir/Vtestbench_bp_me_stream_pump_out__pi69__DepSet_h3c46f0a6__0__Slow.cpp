// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_out__pi69___ctor_var_reset(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__msg_header_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__msg_data_o);
    vlSelf->__PVT__msg_v_o = 0;
    vlSelf->__PVT__msg_ready_and_i = 0;
    vlSelf->__PVT__fsm_header_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__fsm_data_i);
    vlSelf->__PVT__fsm_v_i = 0;
    vlSelf->__PVT__fsm_ready_then_o = 0;
    vlSelf->__PVT__fsm_addr_o = 0;
    vlSelf->__PVT__fsm_new_o = 0;
    vlSelf->__PVT__fsm_last_o = 0;
    vlSelf->__PVT__fsm_critical_o = 0;
    vlSelf->__PVT__msg_v_lo = 0;
    vlSelf->__PVT__stream_size = 0;
    vlSelf->__PVT__cnt_up = 0;
    vlSelf->__VdfgExtracted_hd82698c1__0 = 0;
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(192, vlSelf->gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(192, vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo = 0;
}
