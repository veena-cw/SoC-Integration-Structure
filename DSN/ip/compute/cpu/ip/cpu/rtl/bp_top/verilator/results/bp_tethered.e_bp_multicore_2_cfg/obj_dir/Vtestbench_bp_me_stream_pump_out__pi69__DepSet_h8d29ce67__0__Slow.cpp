// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__0(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__0\n"); );
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
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
            >> 8U) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x18U >> (0xfU & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li))))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__VdfgExtracted_hd82698c1__0 = ((0x18U 
                                             >> (0xfU 
                                                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li))) 
                                            & ((~ (0x18U 
                                                   >> 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li)))) 
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

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__1(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__1\n"); );
    // Body
    if (vlSelf->__VdfgExtracted_hd82698c1__0) {
        vlSelf->__PVT__msg_v_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li) 
                                   & (~ (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__cnt_up = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
    } else {
        vlSelf->__PVT__msg_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
        vlSelf->__PVT__cnt_up = vlSelf->__PVT__msg_v_lo;
    }
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_stream_to_wh.__PVT__pr_ready_and_o));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (IData)(vlSelf->__PVT__msg_v_lo));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSelf->__PVT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__0(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__0\n"); );
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
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
                                                             >> 0x30U)))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li 
            >> 8U) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x18U >> (0xfU & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li))))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__VdfgExtracted_hd82698c1__0 = ((0x18U 
                                             >> (0xfU 
                                                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li))) 
                                            & ((~ (0x18U 
                                                   >> 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li)))) 
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

VL_ATTR_COLD void Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__1(Vtestbench_bp_me_stream_pump_out__pi69* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_out__pi69___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__req_pump_out__1\n"); );
    // Body
    if (vlSelf->__VdfgExtracted_hd82698c1__0) {
        vlSelf->__PVT__msg_v_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li) 
                                   & (~ (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__cnt_up = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
    } else {
        vlSelf->__PVT__msg_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
        vlSelf->__PVT__cnt_up = vlSelf->__PVT__msg_v_lo;
    }
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_stream_to_wh.__PVT__pr_ready_and_o));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (IData)(vlSelf->__PVT__msg_v_lo));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSelf->__PVT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
}
