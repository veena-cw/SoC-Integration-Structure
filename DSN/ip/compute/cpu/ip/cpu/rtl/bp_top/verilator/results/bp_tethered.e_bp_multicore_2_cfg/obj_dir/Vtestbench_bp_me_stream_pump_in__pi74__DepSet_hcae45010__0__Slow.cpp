// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_in__pi74.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi74___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__rev_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi74* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi74___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__rev_pump_in__0\n"); );
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
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (5U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__VdfgExtracted_h5933db0c__3 = ((~ (5U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((5U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi74___ctor_var_reset(Vtestbench_bp_me_stream_pump_in__pi74* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi74___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__msg_header_i);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__msg_data_i);
    vlSelf->__PVT__msg_v_i = 0;
    vlSelf->__PVT__msg_ready_and_o = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__fsm_header_o);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__fsm_data_o);
    vlSelf->__PVT__fsm_v_o = 0;
    vlSelf->__PVT__fsm_yumi_i = 0;
    vlSelf->__PVT__fsm_addr_o = 0;
    vlSelf->__PVT__fsm_new_o = 0;
    vlSelf->__PVT__fsm_critical_o = 0;
    vlSelf->__PVT__fsm_last_o = 0;
    vlSelf->__PVT__stream_size = 0;
    vlSelf->__VdfgExtracted_h5933db0c__3 = 0;
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(194, vlSelf->gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(194, vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo = 0;
}
