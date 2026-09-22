// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
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
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
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
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
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

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
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
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
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
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
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

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
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
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
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
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
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

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
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
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
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
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
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
