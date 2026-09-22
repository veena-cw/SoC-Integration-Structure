// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_xbar_stream__pi92.h"

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__PVT__msg_ready_and_o = ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__PVT__msg_ready_and_o = ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}
