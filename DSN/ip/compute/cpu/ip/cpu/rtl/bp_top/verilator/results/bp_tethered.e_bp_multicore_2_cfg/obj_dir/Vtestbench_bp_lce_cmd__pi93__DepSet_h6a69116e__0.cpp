// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Body
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__credit_return_o = 0U;
    vlSelf->__PVT__cache_req_done_o = 0U;
    vlSelf->__PVT__cache_req_last_o = 0U;
    vlSelf->__PVT__cache_req_critical_o = 0U;
    vlSelf->__PVT__fsm_cmd_yumi_lo = 0U;
    vlSelf->__PVT__fsm_fill_v_lo = 0U;
    vlSelf->__PVT__fsm_resp_v_lo = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    vlSelf->__PVT__cnt_clear = 0U;
    vlSelf->__PVT__tag_mem_pkt_v_o = 0U;
    vlSelf->__PVT__stat_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__state_n = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
                vlSelf->__PVT__cache_req_last_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__cache_req_done_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__credit_return_o = vlSelf->__PVT__cache_req_done_o;
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__credit_return_o)
                                           ? 2U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
            vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                       & (IData)(vlSelf->__PVT__fsm_resp_last_lo))
                                       ? ((1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x1cU))))
                                           ? 4U : 2U)
                                       : (IData)(vlSelf->__PVT__state_r));
        } else {
            vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
            vlSelf->__PVT__state_n = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)
                                       ? 2U : (IData)(vlSelf->__PVT__state_r));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_fill_v_lo = ((IData)(vlSelf->__PVT__fsm_fill_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
                                              & (IData)(vlSelf->__PVT__fsm_fill_last_lo));
            vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                       ? ((0xaU == 
                                           (0xfU & 
                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 5U : (
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                            << 1U) 
                                                           | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x1fU)))))
                                                    ? 4U
                                                    : 2U))
                                       : (IData)(vlSelf->__PVT__state_r));
        } else if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__fsm_cmd_yumi_lo;
                }
            } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                           & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                    vlSelf->__PVT__cache_req_critical_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((3U & (IData)((0xfffffffffULL 
                                             & ((0xffffffffff00000ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x14U)) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                   >> 0xcU))))) 
                              == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                    vlSelf->__PVT__cache_req_last_o 
                        = vlSelf->__PVT__cache_req_critical_o;
                    vlSelf->__PVT__cache_req_done_o 
                        = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                           & (IData)(vlSelf->__PVT__cache_req_last_o));
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__cache_req_done_o;
                } else {
                    vlSelf->__PVT__tag_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((9U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                              | (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                    vlSelf->__PVT__stat_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                    vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo))) 
                                               & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                                  | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)))
                                               ? 3U
                                               : (IData)(vlSelf->__PVT__state_r));
                }
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & ((9U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                vlSelf->__PVT__stat_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                   & (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                            & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                               | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo))) 
                                           & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                              | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)))
                                           ? 3U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (7U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)) 
                                                  & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                     | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)));
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                           ? 5U : (IData)(vlSelf->__PVT__state_r));
            } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                vlSelf->__PVT__fsm_cmd_yumi_lo = ((
                                                   (~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo));
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & ((3U & (IData)((0xfffffffffULL 
                                         & ((0xffffffffff00000ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x14U)) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 0xcU))))) 
                          == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                                           & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_last_o))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__fsm_resp_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                                  & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            }
        } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        } else {
            vlSelf->__PVT__fsm_resp_v_lo = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            vlSelf->__PVT__cnt_clear = ((1U == (IData)(vlSelf->__PVT__cnt_r)) 
                                        & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
            vlSelf->__PVT__cnt_inc = ((1U > (IData)(vlSelf->__PVT__cnt_r)) 
                                      & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clear = (((0x3fU == (IData)(vlSelf->__PVT__cnt_r)) 
                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__tag_mem_pkt_v_o = 1U;
        vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
        vlSelf->__PVT__cnt_inc = (((0x3fU > (IData)(vlSelf->__PVT__cnt_r)) 
                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clear)
                                   ? 2U : (IData)(vlSelf->__PVT__state_r));
    } else {
        vlSelf->__PVT__state_n = 1U;
    }
    if (vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5) {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
               & (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_fill_v_lo;
    } else {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_fill_v_lo;
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo;
    }
    if (vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6) {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
               & (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_resp_v_lo;
    } else {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_resp_v_lo;
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo;
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_fill_last_lo)))
                  : ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_fill_last_lo)))));
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_resp_last_lo)))
                  : ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_resp_last_lo)))));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<6>/*187:0*/ __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(188, __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*6:0*/ __Vdly__cnt_r;
    __Vdly__cnt_r = 0;
    // Body
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cnt_r = vlSelf->__PVT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_fill_data_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_fill_data_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_fill_data_lo[2U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_fill_data_lo[3U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__fsm_fill_header_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__fsm_fill_header_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__fsm_fill_header_lo[2U];
        __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_resp_data_lo[0U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_resp_data_lo[1U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_resp_data_lo[2U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_resp_data_lo[3U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = (IData)(vlSelf->__PVT__fsm_resp_header_lo);
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = (IData)((vlSelf->__PVT__fsm_resp_header_lo 
                       >> 0x20U));
        __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx1];
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx2];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx2];
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx2];
    vlSelf->__PVT__sync_done_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & ((IData)(vlSelf->__PVT__sync_done_reg__DOT__data_r) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__PVT__state_r)) 
                                                       & (IData)(vlSelf->__PVT__cnt_clear))));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cnt_r = 0U;
        __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__state_r = 0U;
    } else {
        if (vlSelf->__PVT__cnt_clear) {
            __Vdly__cnt_r = vlSelf->__PVT__cnt_inc;
        } else if (vlSelf->__PVT__cnt_inc) {
            __Vdly__cnt_r = (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt_r)));
        }
        if (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__resp_pump_out__DOT__cnt_up) {
                __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__fill_pump_out__DOT__cnt_up) {
                __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up)));
        }
        vlSelf->__PVT__state_r = vlSelf->__PVT__state_n;
    }
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[1U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[2U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[3U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[4U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[5U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[6U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[7U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[8U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[9U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xaU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xbU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xcU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xdU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xeU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xfU];
    }
    if (vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
               << 8U);
    }
    if (vlSelf->__PVT__fsm_cmd_yumi_lo) {
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[2U] 
            = (0x7ffU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]);
    }
    if (vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((0xb7U >= (0xffU & ((IData)(0x17U) * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                ? (0x7fffffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                                  ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                                          (((IData)(0x16U) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))))) 
                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                                   (7U & (((IData)(0x17U) 
                                           * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x17U) 
                                                * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))))
                : 0U);
    }
    if (__Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    vlSelf->__PVT__cnt_r = __Vdly__cnt_r;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo) 
           & (1U == (3U & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o))));
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
           & (4U == (7U & (IData)(vlSelf->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__1(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__1\n"); );
    // Init
    IData/*25:0*/ __VdfgExtracted_h808693e3__0;
    __VdfgExtracted_h808693e3__0 = 0;
    IData/*25:0*/ __VdfgExtracted_h77ddc221__0;
    __VdfgExtracted_h77ddc221__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h5185104b__0;
    VlWide<16>/*511:0*/ __Vtemp_hb181b85c__0;
    // Body
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    __VdfgExtracted_h808693e3__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | (0x700000U & 
                                       ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              >> 0xbU)))));
    __VdfgExtracted_h77ddc221__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | ((0x700000U & 
                                        ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                          << 0x15U) 
                                         | (0x100000U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0xbU)))) 
                                       | (0xfffffU 
                                          & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              << 0xcU) 
                                             | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 0x14U)))));
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[3U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[4U] = 0U;
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
                                       << 8U) : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                             >> 0x1aU))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__stat_mem_pkt_cast_o 
                                    = (1U | ((0x7e0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 9U)) 
                                             | (0x1cU 
                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x1aU))));
                            }
                        } else {
                            vlSelf->__PVT__stat_mem_pkt_cast_o 
                                = (1U | ((0x7e0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 9U)) 
                                         | (0x1cU & 
                                            (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             >> 0x1aU))));
                        }
                    }
                } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (1U | ((0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 9U)) 
                                     | (0x1cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x1aU))));
                    }
                } else if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = ((0x1fU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                               | (0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                            >> 9U)));
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (0x7fcU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->__PVT__cnt_r) 
                                                        << 5U)));
            vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__fsm_fill_header_lo[0U]));
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_fill_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U)))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0x3fffffU & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (0xffc00000U & ((0x80000000U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                 << 0x17U)) 
                                             | ((0x70000000U 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                    << 0x17U)) 
                                                | ((0xe000000U 
                                                    & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                                   | (0x1c00000U 
                                                      & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                         << 0x14U)))))));
                    vlSelf->__PVT__fsm_fill_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__fsm_fill_header_lo[2U]) 
                           | (3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                    >> 9U)));
                }
            }
        }
    }
    vlSelf->__PVT__fill_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
    vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5 
        = ((0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])) 
           & ((~ (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U]))) 
              & (0U < (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])))
            ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                        >> 8U))) & vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_header_lo = 0ULL;
    vlSelf->__PVT__fsm_fill_ready_then_li = (1U & ((IData)(vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                      >> 2U)))) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x1ffU 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7e00U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 5U)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                        = (((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x7fc0U 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fffU 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (2U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                } else {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fc0U 
                                              & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (1U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                }
                                if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                                        = (2ULL | ((QData)((IData)(
                                                                   ((0xfc000000U 
                                                                     & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                        << 0xcU)) 
                                                                    | __VdfgExtracted_h77ddc221__0))) 
                                                   << 3U));
                                }
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fc0U & 
                                          ((0x7e00U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                               >> 5U)) 
                                           | (0x1c0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (1U | (0xfffffffcU 
                                             & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x7fc0U & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                            vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                = (1U | (0xfffffffcU 
                                         & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h77ddc221__0))) 
                                           << 3U));
                        } else {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__data_mem_pkt_v_o 
                                    = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            }
                            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x1c0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 0x16U)));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h808693e3__0))) 
                                               << 3U));
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x1ffU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7e00U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 5U)));
                                __Vtemp_h5185104b__0[0U] 
                                    = ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                        << 4U) | (0xfU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((IData)(
                                                                 (((0x1ffffffff8ULL 
                                                                    & ((0x1fffffffffe00000ULL 
                                                                        & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                                           << 0x15U)) 
                                                                       | (0x1ffffffffffff8ULL 
                                                                          & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                                             >> 0xbU)))) 
                                                                   | ((QData)((IData)(
                                                                                ((0x30U 
                                                                                & (((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (((2U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                                >> 1U)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                                >> 8U))))) 
                                                                      >> 3U)) 
                                                                  & (((0xfffffffff0ULL 
                                                                       < vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask)
                                                                       ? vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask
                                                                       : 0xfffffffff0ULL) 
                                                                     >> 3U))) 
                                                         >> 1U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                       | (__Vtemp_h5185104b__0[0U] 
                                          << 2U));
                                vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                    = ((__Vtemp_h5185104b__0[0U] 
                                        >> 0x1eU) | 
                                       ((0x3cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                                  >> 0x1aU)) 
                                        | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                           << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e00U & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fffU & 
                                          ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                  >> 0x1aU)) 
                                           | ((0x1c0U 
                                               & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 0x16U)) 
                                              | (0x3cU 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                    >> 0x1aU))))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (0xfffffffcU 
                                       & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (1ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x1c0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x16U)));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h808693e3__0))) 
                                           << 3U));
                        } else {
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = ((0x7fffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                                   | ((QData)((IData)(
                                                      ((0xfc0U 
                                                        & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                           >> 8U)) 
                                                       | (0x38U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x17U));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | (0x7fffffff8ULL 
                                           & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        }
                    } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((0x3fU 
                                                   & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                      >> 0xeU)))) 
                                  << 0x1dU));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)((0x3fU & (IData)(vlSelf->__PVT__cnt_r)))) 
                        << 0x1dU));
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fc000000ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | (0xffffffffff00ULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffffff00ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = (2ULL | (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                << 3U) 
                                               | (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x19U))))) 
                              << 0x36U));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xffffffffffffff0ULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (IData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                         ? 3U : 4U))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                          << 3U) | 
                                         (7U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                >> 0x19U))))) 
                        << 0x36U));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xff8ffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                          ? 6U : 0U))) 
                        << 0x30U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0xfff0000000000ffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | (0xffffffffff00ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = (1ULL | (0xffffffffffffff0ULL 
                                               & vlSelf->__PVT__fsm_resp_header_lo));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0x3fffffffffffffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | ((QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                            << 3U) 
                                                           | (7U 
                                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                 >> 0x19U))))) 
                                          << 0x36U));
                            }
                        } else if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = ((0x3fffffffffffffULL 
                                    & vlSelf->__PVT__fsm_resp_header_lo) 
                                   | ((QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                        << 3U) 
                                                       | (7U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x36U));
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo);
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__resp_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (IData)(
                                                       (vlSelf->__PVT__fsm_resp_header_lo 
                                                        >> 0x30U)))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__fsm_resp_header_lo 
                                                    >> 0x30U)))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_header_lo 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSelf->__PVT__fsm_resp_header_lo 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__fsm_fill_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6 
        = ((8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))) 
           & ((~ (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo)))) 
              & (0U < (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))))
            ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSelf->__PVT__fsm_resp_header_lo >> 8U) 
           & vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_ready_then_li = (1U & ((IData)(vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__dirty_data_select = 0U;
    vlSelf->__PVT__fsm_resp_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_hb181b85c__0[0U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0U];
        __Vtemp_hb181b85c__0[1U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[1U];
        __Vtemp_hb181b85c__0[2U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[2U];
        __Vtemp_hb181b85c__0[3U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[3U];
        __Vtemp_hb181b85c__0[4U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[4U];
        __Vtemp_hb181b85c__0[5U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[5U];
        __Vtemp_hb181b85c__0[6U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[6U];
        __Vtemp_hb181b85c__0[7U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[7U];
        __Vtemp_hb181b85c__0[8U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[8U];
        __Vtemp_hb181b85c__0[9U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[9U];
        __Vtemp_hb181b85c__0[0xaU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xaU];
        __Vtemp_hb181b85c__0[0xbU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xbU];
        __Vtemp_hb181b85c__0[0xcU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xcU];
        __Vtemp_hb181b85c__0[0xdU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xdU];
        __Vtemp_hb181b85c__0[0xeU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xeU];
        __Vtemp_hb181b85c__0[0xfU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xfU];
    } else {
        __Vtemp_hb181b85c__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_hb181b85c__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_hb181b85c__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_hb181b85c__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_hb181b85c__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_hb181b85c__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_hb181b85c__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_hb181b85c__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_hb181b85c__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_hb181b85c__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_hb181b85c__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_hb181b85c__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_hb181b85c__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_hb181b85c__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_hb181b85c__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_hb181b85c__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__dirty_data_select 
                        = (3U & (IData)((((0xffffffffcULL 
                                           & (vlSelf->__PVT__fsm_resp_header_lo 
                                              >> 0xcU)) 
                                          | ((QData)((IData)(
                                                             ((0x30U 
                                                               & (((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                                    ? 
                                                                   ((2U 
                                                                     & (((2U 
                                                                          <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                          >> 1U)
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((1U 
                                                                           <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                           ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                           : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 4U))) 
                                                                  << 4U)) 
                                                              | (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fsm_resp_header_lo 
                                                                            >> 8U)))))) 
                                             >> 4U)) 
                                         & (((0xfffffffff0ULL 
                                              < vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                              ? vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                              : 0xfffffffff0ULL) 
                                            >> 4U))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__dirty_data_select = 
                    (3U & (IData)((((0xffffffffcULL 
                                     & ((0xffffffffff00000ULL 
                                         & ((QData)((IData)(
                                                            vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                                            << 0x14U)) 
                                        | (0xffffffffffffcULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                              >> 0xcU)))) 
                                    | ((QData)((IData)(
                                                       ((0x30U 
                                                         & (((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                              ? 
                                                             ((2U 
                                                               & (((2U 
                                                                    <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                    >> 1U)
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 5U))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((1U 
                                                                     <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                     ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                     : (IData)(
                                                                               (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                         >> 4U))) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (vlSelf->__PVT__fsm_fill_header_lo[0U] 
                                                              >> 8U))))) 
                                       >> 4U)) & ((
                                                   (0xfffffffff0ULL 
                                                    < vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                                    ? vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                                    : 0xfffffffff0ULL) 
                                                  >> 4U))));
            }
        }
    }
    vlSelf->__PVT__dirty_data_selected[0U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb181b85c__0[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_hb181b85c__0[
                                                 (0xcU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 2U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[1U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb181b85c__0[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_hb181b85c__0[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[2U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb181b85c__0[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_hb181b85c__0[
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[3U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_hb181b85c__0[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_hb181b85c__0[
                                                 ((IData)(3U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__fsm_fill_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[3U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_fill_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_fill_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_fill_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_resp_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_resp_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_resp_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Body
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__credit_return_o = 0U;
    vlSelf->__PVT__cache_req_done_o = 0U;
    vlSelf->__PVT__cache_req_last_o = 0U;
    vlSelf->__PVT__cache_req_critical_o = 0U;
    vlSelf->__PVT__fsm_cmd_yumi_lo = 0U;
    vlSelf->__PVT__fsm_fill_v_lo = 0U;
    vlSelf->__PVT__fsm_resp_v_lo = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    vlSelf->__PVT__cnt_clear = 0U;
    vlSelf->__PVT__tag_mem_pkt_v_o = 0U;
    vlSelf->__PVT__stat_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__state_n = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
                vlSelf->__PVT__cache_req_last_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__cache_req_done_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__credit_return_o = vlSelf->__PVT__cache_req_done_o;
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__credit_return_o)
                                           ? 2U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
            vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                       & (IData)(vlSelf->__PVT__fsm_resp_last_lo))
                                       ? ((1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x1cU))))
                                           ? 4U : 2U)
                                       : (IData)(vlSelf->__PVT__state_r));
        } else {
            vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
            vlSelf->__PVT__state_n = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)
                                       ? 2U : (IData)(vlSelf->__PVT__state_r));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_fill_v_lo = ((IData)(vlSelf->__PVT__fsm_fill_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
                                              & (IData)(vlSelf->__PVT__fsm_fill_last_lo));
            vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                       ? ((0xaU == 
                                           (0xfU & 
                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 5U : (
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                            << 1U) 
                                                           | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x1fU)))))
                                                    ? 4U
                                                    : 2U))
                                       : (IData)(vlSelf->__PVT__state_r));
        } else if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__fsm_cmd_yumi_lo;
                }
            } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                           & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                    vlSelf->__PVT__cache_req_critical_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((3U & (IData)((0xfffffffffULL 
                                             & ((0xffffffffff00000ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x14U)) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                   >> 0xcU))))) 
                              == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                    vlSelf->__PVT__cache_req_last_o 
                        = vlSelf->__PVT__cache_req_critical_o;
                    vlSelf->__PVT__cache_req_done_o 
                        = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                           & (IData)(vlSelf->__PVT__cache_req_last_o));
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__cache_req_done_o;
                } else {
                    vlSelf->__PVT__tag_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((9U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                              | (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                    vlSelf->__PVT__stat_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                    vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo))) 
                                               & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                                  | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)))
                                               ? 3U
                                               : (IData)(vlSelf->__PVT__state_r));
                }
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & ((9U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                vlSelf->__PVT__stat_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                   & (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                            & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                               | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo))) 
                                           & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                              | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)))
                                           ? 3U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (7U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                                                  & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                     | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)));
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                           ? 5U : (IData)(vlSelf->__PVT__state_r));
            } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                vlSelf->__PVT__fsm_cmd_yumi_lo = ((
                                                   (~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo));
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & ((3U & (IData)((0xfffffffffULL 
                                         & ((0xffffffffff00000ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x14U)) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 0xcU))))) 
                          == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                                           & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_last_o))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__fsm_resp_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                                  & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            }
        } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        } else {
            vlSelf->__PVT__fsm_resp_v_lo = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            vlSelf->__PVT__cnt_clear = ((1U == (IData)(vlSelf->__PVT__cnt_r)) 
                                        & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
            vlSelf->__PVT__cnt_inc = ((1U > (IData)(vlSelf->__PVT__cnt_r)) 
                                      & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clear = (((0x3fU == (IData)(vlSelf->__PVT__cnt_r)) 
                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__tag_mem_pkt_v_o = 1U;
        vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
        vlSelf->__PVT__cnt_inc = (((0x3fU > (IData)(vlSelf->__PVT__cnt_r)) 
                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clear)
                                   ? 2U : (IData)(vlSelf->__PVT__state_r));
    } else {
        vlSelf->__PVT__state_n = 1U;
    }
    if (vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5) {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
               & (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_fill_v_lo;
    } else {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_fill_v_lo;
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo;
    }
    if (vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6) {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
               & (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_resp_v_lo;
    } else {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_resp_v_lo;
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo;
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_fill_last_lo)))
                  : ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_fill_last_lo)))));
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_resp_last_lo)))
                  : ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_resp_last_lo)))));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<6>/*187:0*/ __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(188, __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*6:0*/ __Vdly__cnt_r;
    __Vdly__cnt_r = 0;
    // Body
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cnt_r = vlSelf->__PVT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_fill_data_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_fill_data_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_fill_data_lo[2U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_fill_data_lo[3U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__fsm_fill_header_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__fsm_fill_header_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__fsm_fill_header_lo[2U];
        __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_resp_data_lo[0U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_resp_data_lo[1U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_resp_data_lo[2U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_resp_data_lo[3U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = (IData)(vlSelf->__PVT__fsm_resp_header_lo);
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = (IData)((vlSelf->__PVT__fsm_resp_header_lo 
                       >> 0x20U));
        __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx3];
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx4];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx4];
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx4];
    vlSelf->__PVT__sync_done_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & ((IData)(vlSelf->__PVT__sync_done_reg__DOT__data_r) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__PVT__state_r)) 
                                                       & (IData)(vlSelf->__PVT__cnt_clear))));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cnt_r = 0U;
        __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__state_r = 0U;
    } else {
        if (vlSelf->__PVT__cnt_clear) {
            __Vdly__cnt_r = vlSelf->__PVT__cnt_inc;
        } else if (vlSelf->__PVT__cnt_inc) {
            __Vdly__cnt_r = (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt_r)));
        }
        if (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__resp_pump_out__DOT__cnt_up) {
                __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__fill_pump_out__DOT__cnt_up) {
                __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up)));
        }
        vlSelf->__PVT__state_r = vlSelf->__PVT__state_n;
    }
    if (vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((0xb7U >= (0xffU & ((IData)(0x17U) * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                ? (0x7fffffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                                  ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[
                                          (((IData)(0x16U) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))))) 
                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[
                                   (7U & (((IData)(0x17U) 
                                           * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x17U) 
                                                * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))))
                : 0U);
    }
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[1U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[2U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[3U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[4U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[5U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[6U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[7U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[8U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[9U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xaU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xbU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xcU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xdU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xeU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xfU];
    }
    if (vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o;
    }
    if (vlSelf->__PVT__fsm_cmd_yumi_lo) {
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[2U] 
            = (0x7ffU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]);
    }
    if (__Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    vlSelf->__PVT__cnt_r = __Vdly__cnt_r;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
           & (4U == (7U & (IData)(vlSelf->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo) 
           & (1U == (3U & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o))));
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__1(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__1\n"); );
    // Init
    IData/*25:0*/ __VdfgExtracted_h808693e3__0;
    __VdfgExtracted_h808693e3__0 = 0;
    IData/*25:0*/ __VdfgExtracted_h77ddc221__0;
    __VdfgExtracted_h77ddc221__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h5185104b__0;
    VlWide<16>/*511:0*/ __Vtemp_he16b239f__0;
    // Body
    __VdfgExtracted_h808693e3__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | (0x700000U & 
                                       ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              >> 0xbU)))));
    __VdfgExtracted_h77ddc221__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | ((0x700000U & 
                                        ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                          << 0x15U) 
                                         | (0x100000U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0xbU)))) 
                                       | (0xfffffU 
                                          & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              << 0xcU) 
                                             | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 0x14U)))));
    vlSelf->__PVT__fsm_fill_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[2U] = 0U;
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->__PVT__data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[3U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[4U] = 0U;
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o)
                                    : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__fsm_fill_header_lo[0U]));
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_fill_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U)))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0x3fffffU & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (0xffc00000U & ((0x80000000U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                 << 0x17U)) 
                                             | ((0x70000000U 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                    << 0x17U)) 
                                                | ((0xe000000U 
                                                    & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                                   | (0x1c00000U 
                                                      & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                         << 0x14U)))))));
                    vlSelf->__PVT__fsm_fill_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__fsm_fill_header_lo[2U]) 
                           | (3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                    >> 9U)));
                }
            }
        }
    }
    vlSelf->__PVT__fill_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
    vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5 
        = ((0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])) 
           & ((~ (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U]))) 
              & (0U < (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])))
            ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                        >> 8U))) & vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_header_lo = 0ULL;
    vlSelf->__PVT__fsm_fill_ready_then_li = (1U & ((IData)(vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                             >> 0x1aU))));
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | (0xffffffffff00ULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffffff00ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = (2ULL | (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                << 3U) 
                                               | (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x19U))))) 
                              << 0x36U));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xffffffffffffff0ULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (IData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                         ? 3U : 4U))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                          << 3U) | 
                                         (7U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                >> 0x19U))))) 
                        << 0x36U));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xff8ffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                          ? 6U : 0U))) 
                        << 0x30U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__stat_mem_pkt_cast_o 
                                    = (1U | ((0x7e0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 9U)) 
                                             | (0x1cU 
                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x1aU))));
                            }
                        } else {
                            vlSelf->__PVT__stat_mem_pkt_cast_o 
                                = (1U | ((0x7e0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 9U)) 
                                         | (0x1cU & 
                                            (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             >> 0x1aU))));
                        }
                    }
                } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (1U | ((0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 9U)) 
                                     | (0x1cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x1aU))));
                    }
                } else if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = ((0x1fU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                               | (0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                            >> 9U)));
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (0x7fcU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0xfff0000000000ffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | (0xffffffffff00ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = (1ULL | (0xffffffffffffff0ULL 
                                               & vlSelf->__PVT__fsm_resp_header_lo));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0x3fffffffffffffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | ((QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                            << 3U) 
                                                           | (7U 
                                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                 >> 0x19U))))) 
                                          << 0x36U));
                            }
                        } else if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = ((0x3fffffffffffffULL 
                                    & vlSelf->__PVT__fsm_resp_header_lo) 
                                   | ((QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                        << 3U) 
                                                       | (7U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x36U));
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo);
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->__PVT__cnt_r) 
                                                        << 5U)));
            vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                      >> 2U)))) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x1ffU 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7e00U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 5U)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                        = (((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x7fc0U 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fffU 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (2U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                } else {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fc0U 
                                              & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (1U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                }
                                if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                                        = (2ULL | ((QData)((IData)(
                                                                   ((0xfc000000U 
                                                                     & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                        << 0xcU)) 
                                                                    | __VdfgExtracted_h77ddc221__0))) 
                                                   << 3U));
                                }
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fc0U & 
                                          ((0x7e00U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                               >> 5U)) 
                                           | (0x1c0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (1U | (0xfffffffcU 
                                             & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x7fc0U & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                            vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                = (1U | (0xfffffffcU 
                                         & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h77ddc221__0))) 
                                           << 3U));
                        } else {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__data_mem_pkt_v_o 
                                    = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            }
                            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x1c0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 0x16U)));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h808693e3__0))) 
                                               << 3U));
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x1ffU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7e00U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 5U)));
                                __Vtemp_h5185104b__0[0U] 
                                    = ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                        << 4U) | (0xfU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((IData)(
                                                                 (((0x1ffffffff8ULL 
                                                                    & ((0x1fffffffffe00000ULL 
                                                                        & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                                           << 0x15U)) 
                                                                       | (0x1ffffffffffff8ULL 
                                                                          & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                                             >> 0xbU)))) 
                                                                   | ((QData)((IData)(
                                                                                ((0x30U 
                                                                                & (((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (((2U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                                >> 1U)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                                >> 8U))))) 
                                                                      >> 3U)) 
                                                                  & (((0xfffffffff0ULL 
                                                                       < vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask)
                                                                       ? vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask
                                                                       : 0xfffffffff0ULL) 
                                                                     >> 3U))) 
                                                         >> 1U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                       | (__Vtemp_h5185104b__0[0U] 
                                          << 2U));
                                vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                    = ((__Vtemp_h5185104b__0[0U] 
                                        >> 0x1eU) | 
                                       ((0x3cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                                  >> 0x1aU)) 
                                        | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                           << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e00U & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fffU & 
                                          ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                  >> 0x1aU)) 
                                           | ((0x1c0U 
                                               & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 0x16U)) 
                                              | (0x3cU 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                    >> 0x1aU))))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (0xfffffffcU 
                                       & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (1ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x1c0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x16U)));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h808693e3__0))) 
                                           << 3U));
                        } else {
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = ((0x7fffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                                   | ((QData)((IData)(
                                                      ((0xfc0U 
                                                        & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                           >> 8U)) 
                                                       | (0x38U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x17U));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | (0x7fffffff8ULL 
                                           & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        }
                    } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((0x3fU 
                                                   & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                      >> 0xeU)))) 
                                  << 0x1dU));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)((0x3fU & (IData)(vlSelf->__PVT__cnt_r)))) 
                        << 0x1dU));
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fc000000ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
            }
        }
    }
    vlSelf->__PVT__resp_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (IData)(
                                                       (vlSelf->__PVT__fsm_resp_header_lo 
                                                        >> 0x30U)))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__fsm_resp_header_lo 
                                                    >> 0x30U)))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_header_lo 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSelf->__PVT__fsm_resp_header_lo 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__fsm_fill_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6 
        = ((8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))) 
           & ((~ (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo)))) 
              & (0U < (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))))
            ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSelf->__PVT__fsm_resp_header_lo >> 8U) 
           & vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_ready_then_li = (1U & ((IData)(vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__dirty_data_select = 0U;
    vlSelf->__PVT__fsm_resp_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_he16b239f__0[0U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0U];
        __Vtemp_he16b239f__0[1U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[1U];
        __Vtemp_he16b239f__0[2U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[2U];
        __Vtemp_he16b239f__0[3U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[3U];
        __Vtemp_he16b239f__0[4U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[4U];
        __Vtemp_he16b239f__0[5U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[5U];
        __Vtemp_he16b239f__0[6U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[6U];
        __Vtemp_he16b239f__0[7U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[7U];
        __Vtemp_he16b239f__0[8U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[8U];
        __Vtemp_he16b239f__0[9U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[9U];
        __Vtemp_he16b239f__0[0xaU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xaU];
        __Vtemp_he16b239f__0[0xbU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xbU];
        __Vtemp_he16b239f__0[0xcU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xcU];
        __Vtemp_he16b239f__0[0xdU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xdU];
        __Vtemp_he16b239f__0[0xeU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xeU];
        __Vtemp_he16b239f__0[0xfU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xfU];
    } else {
        __Vtemp_he16b239f__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_he16b239f__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_he16b239f__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_he16b239f__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_he16b239f__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_he16b239f__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_he16b239f__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_he16b239f__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_he16b239f__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_he16b239f__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_he16b239f__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_he16b239f__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_he16b239f__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_he16b239f__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_he16b239f__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_he16b239f__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__dirty_data_select 
                        = (3U & (IData)((((0xffffffffcULL 
                                           & (vlSelf->__PVT__fsm_resp_header_lo 
                                              >> 0xcU)) 
                                          | ((QData)((IData)(
                                                             ((0x30U 
                                                               & (((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                                    ? 
                                                                   ((2U 
                                                                     & (((2U 
                                                                          <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                          >> 1U)
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((1U 
                                                                           <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                           ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                           : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 4U))) 
                                                                  << 4U)) 
                                                              | (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fsm_resp_header_lo 
                                                                            >> 8U)))))) 
                                             >> 4U)) 
                                         & (((0xfffffffff0ULL 
                                              < vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                              ? vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                              : 0xfffffffff0ULL) 
                                            >> 4U))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__dirty_data_select = 
                    (3U & (IData)((((0xffffffffcULL 
                                     & ((0xffffffffff00000ULL 
                                         & ((QData)((IData)(
                                                            vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                                            << 0x14U)) 
                                        | (0xffffffffffffcULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                              >> 0xcU)))) 
                                    | ((QData)((IData)(
                                                       ((0x30U 
                                                         & (((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                              ? 
                                                             ((2U 
                                                               & (((2U 
                                                                    <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                    >> 1U)
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 5U))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((1U 
                                                                     <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                     ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                     : (IData)(
                                                                               (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                         >> 4U))) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (vlSelf->__PVT__fsm_fill_header_lo[0U] 
                                                              >> 8U))))) 
                                       >> 4U)) & ((
                                                   (0xfffffffff0ULL 
                                                    < vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                                    ? vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                                    : 0xfffffffff0ULL) 
                                                  >> 4U))));
            }
        }
    }
    vlSelf->__PVT__dirty_data_selected[0U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_he16b239f__0[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_he16b239f__0[
                                                 (0xcU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 2U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[1U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_he16b239f__0[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_he16b239f__0[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[2U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_he16b239f__0[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_he16b239f__0[
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[3U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_he16b239f__0[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_he16b239f__0[
                                                 ((IData)(3U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__fsm_fill_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[3U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_fill_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_fill_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_fill_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_resp_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_resp_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_resp_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Body
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__credit_return_o = 0U;
    vlSelf->__PVT__cache_req_done_o = 0U;
    vlSelf->__PVT__cache_req_last_o = 0U;
    vlSelf->__PVT__cache_req_critical_o = 0U;
    vlSelf->__PVT__fsm_cmd_yumi_lo = 0U;
    vlSelf->__PVT__fsm_fill_v_lo = 0U;
    vlSelf->__PVT__fsm_resp_v_lo = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    vlSelf->__PVT__cnt_clear = 0U;
    vlSelf->__PVT__tag_mem_pkt_v_o = 0U;
    vlSelf->__PVT__stat_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__state_n = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
                vlSelf->__PVT__cache_req_last_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__cache_req_done_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__credit_return_o = vlSelf->__PVT__cache_req_done_o;
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__credit_return_o)
                                           ? 2U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
            vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                       & (IData)(vlSelf->__PVT__fsm_resp_last_lo))
                                       ? ((1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x1cU))))
                                           ? 4U : 2U)
                                       : (IData)(vlSelf->__PVT__state_r));
        } else {
            vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
            vlSelf->__PVT__state_n = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)
                                       ? 2U : (IData)(vlSelf->__PVT__state_r));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_fill_v_lo = ((IData)(vlSelf->__PVT__fsm_fill_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
                                              & (IData)(vlSelf->__PVT__fsm_fill_last_lo));
            vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                       ? ((0xaU == 
                                           (0xfU & 
                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 5U : (
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                            << 1U) 
                                                           | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x1fU)))))
                                                    ? 4U
                                                    : 2U))
                                       : (IData)(vlSelf->__PVT__state_r));
        } else if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__fsm_cmd_yumi_lo;
                }
            } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                           & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                    vlSelf->__PVT__cache_req_critical_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((3U & (IData)((0xfffffffffULL 
                                             & ((0xffffffffff00000ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x14U)) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                   >> 0xcU))))) 
                              == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                    vlSelf->__PVT__cache_req_last_o 
                        = vlSelf->__PVT__cache_req_critical_o;
                    vlSelf->__PVT__cache_req_done_o 
                        = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                           & (IData)(vlSelf->__PVT__cache_req_last_o));
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__cache_req_done_o;
                } else {
                    vlSelf->__PVT__tag_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((9U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                              | (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                    vlSelf->__PVT__stat_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                    vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo))) 
                                               & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                                  | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)))
                                               ? 3U
                                               : (IData)(vlSelf->__PVT__state_r));
                }
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & ((9U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                vlSelf->__PVT__stat_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                   & (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                            & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                               | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo))) 
                                           & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                              | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)))
                                           ? 3U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (7U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)) 
                                                  & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                     | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)));
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                           ? 5U : (IData)(vlSelf->__PVT__state_r));
            } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                vlSelf->__PVT__fsm_cmd_yumi_lo = ((
                                                   (~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo));
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & ((3U & (IData)((0xfffffffffULL 
                                         & ((0xffffffffff00000ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x14U)) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 0xcU))))) 
                          == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                                           & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_last_o))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__fsm_resp_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                                  & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            }
        } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        } else {
            vlSelf->__PVT__fsm_resp_v_lo = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            vlSelf->__PVT__cnt_clear = ((1U == (IData)(vlSelf->__PVT__cnt_r)) 
                                        & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
            vlSelf->__PVT__cnt_inc = ((1U > (IData)(vlSelf->__PVT__cnt_r)) 
                                      & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clear = (((0x3fU == (IData)(vlSelf->__PVT__cnt_r)) 
                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__tag_mem_pkt_v_o = 1U;
        vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
        vlSelf->__PVT__cnt_inc = (((0x3fU > (IData)(vlSelf->__PVT__cnt_r)) 
                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clear)
                                   ? 2U : (IData)(vlSelf->__PVT__state_r));
    } else {
        vlSelf->__PVT__state_n = 1U;
    }
    if (vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5) {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
               & (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_fill_v_lo;
    } else {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_fill_v_lo;
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo;
    }
    if (vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6) {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
               & (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_resp_v_lo;
    } else {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_resp_v_lo;
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo;
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_fill_last_lo)))
                  : ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_fill_last_lo)))));
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_resp_last_lo)))
                  : ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_resp_last_lo)))));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<6>/*187:0*/ __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(188, __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*6:0*/ __Vdly__cnt_r;
    __Vdly__cnt_r = 0;
    // Body
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cnt_r = vlSelf->__PVT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_fill_data_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_fill_data_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_fill_data_lo[2U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_fill_data_lo[3U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__fsm_fill_header_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__fsm_fill_header_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__fsm_fill_header_lo[2U];
        __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_resp_data_lo[0U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_resp_data_lo[1U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_resp_data_lo[2U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_resp_data_lo[3U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = (IData)(vlSelf->__PVT__fsm_resp_header_lo);
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = (IData)((vlSelf->__PVT__fsm_resp_header_lo 
                       >> 0x20U));
        __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx5];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx5];
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx6];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx6];
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx6];
    vlSelf->__PVT__sync_done_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & ((IData)(vlSelf->__PVT__sync_done_reg__DOT__data_r) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__PVT__state_r)) 
                                                       & (IData)(vlSelf->__PVT__cnt_clear))));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cnt_r = 0U;
        __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__state_r = 0U;
    } else {
        if (vlSelf->__PVT__cnt_clear) {
            __Vdly__cnt_r = vlSelf->__PVT__cnt_inc;
        } else if (vlSelf->__PVT__cnt_inc) {
            __Vdly__cnt_r = (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt_r)));
        }
        if (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__resp_pump_out__DOT__cnt_up) {
                __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__fill_pump_out__DOT__cnt_up) {
                __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up)));
        }
        vlSelf->__PVT__state_r = vlSelf->__PVT__state_n;
    }
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[1U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[2U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[3U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[4U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[5U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[6U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[7U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[8U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[9U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xaU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xbU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xcU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xdU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xeU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xfU];
    }
    if (vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
               << 8U);
    }
    if (vlSelf->__PVT__fsm_cmd_yumi_lo) {
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[2U] 
            = (0x7ffU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]);
    }
    if (vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((0xb7U >= (0xffU & ((IData)(0x17U) * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                ? (0x7fffffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                                  ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                                          (((IData)(0x16U) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))))) 
                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                                   (7U & (((IData)(0x17U) 
                                           * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x17U) 
                                                * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))))
                : 0U);
    }
    if (__Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    vlSelf->__PVT__cnt_r = __Vdly__cnt_r;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo) 
           & (1U == (3U & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o))));
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
           & (4U == (7U & (IData)(vlSelf->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__1(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__1\n"); );
    // Init
    IData/*25:0*/ __VdfgExtracted_h808693e3__0;
    __VdfgExtracted_h808693e3__0 = 0;
    IData/*25:0*/ __VdfgExtracted_h77ddc221__0;
    __VdfgExtracted_h77ddc221__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h5185104b__0;
    VlWide<16>/*511:0*/ __Vtemp_h37244aac__0;
    // Body
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    __VdfgExtracted_h808693e3__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | (0x700000U & 
                                       ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              >> 0xbU)))));
    __VdfgExtracted_h77ddc221__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | ((0x700000U & 
                                        ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                          << 0x15U) 
                                         | (0x100000U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0xbU)))) 
                                       | (0xfffffU 
                                          & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              << 0xcU) 
                                             | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 0x14U)))));
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[3U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[4U] = 0U;
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
                                       << 8U) : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                             >> 0x1aU))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__stat_mem_pkt_cast_o 
                                    = (1U | ((0x7e0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 9U)) 
                                             | (0x1cU 
                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x1aU))));
                            }
                        } else {
                            vlSelf->__PVT__stat_mem_pkt_cast_o 
                                = (1U | ((0x7e0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 9U)) 
                                         | (0x1cU & 
                                            (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             >> 0x1aU))));
                        }
                    }
                } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (1U | ((0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 9U)) 
                                     | (0x1cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x1aU))));
                    }
                } else if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = ((0x1fU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                               | (0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                            >> 9U)));
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (0x7fcU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->__PVT__cnt_r) 
                                                        << 5U)));
            vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__fsm_fill_header_lo[0U]));
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_fill_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U)))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0x3fffffU & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (0xffc00000U & ((0x80000000U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                 << 0x17U)) 
                                             | ((0x70000000U 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                    << 0x17U)) 
                                                | ((0xe000000U 
                                                    & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                                   | (0x1c00000U 
                                                      & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                         << 0x14U)))))));
                    vlSelf->__PVT__fsm_fill_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__fsm_fill_header_lo[2U]) 
                           | (3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                    >> 9U)));
                }
            }
        }
    }
    vlSelf->__PVT__fill_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
    vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5 
        = ((0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])) 
           & ((~ (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U]))) 
              & (0U < (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])))
            ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                        >> 8U))) & vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_header_lo = 0ULL;
    vlSelf->__PVT__fsm_fill_ready_then_li = (1U & ((IData)(vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                      >> 2U)))) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x1ffU 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7e00U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 5U)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                        = (((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x7fc0U 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fffU 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (2U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                } else {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fc0U 
                                              & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (1U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                }
                                if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                                        = (2ULL | ((QData)((IData)(
                                                                   ((0xfc000000U 
                                                                     & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                        << 0xcU)) 
                                                                    | __VdfgExtracted_h77ddc221__0))) 
                                                   << 3U));
                                }
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fc0U & 
                                          ((0x7e00U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                               >> 5U)) 
                                           | (0x1c0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (1U | (0xfffffffcU 
                                             & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x7fc0U & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                            vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                = (1U | (0xfffffffcU 
                                         & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h77ddc221__0))) 
                                           << 3U));
                        } else {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__data_mem_pkt_v_o 
                                    = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            }
                            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x1c0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 0x16U)));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h808693e3__0))) 
                                               << 3U));
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x1ffU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7e00U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 5U)));
                                __Vtemp_h5185104b__0[0U] 
                                    = ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                        << 4U) | (0xfU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((IData)(
                                                                 (((0x1ffffffff8ULL 
                                                                    & ((0x1fffffffffe00000ULL 
                                                                        & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                                           << 0x15U)) 
                                                                       | (0x1ffffffffffff8ULL 
                                                                          & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                                             >> 0xbU)))) 
                                                                   | ((QData)((IData)(
                                                                                ((0x30U 
                                                                                & (((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (((2U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                                >> 1U)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                                >> 8U))))) 
                                                                      >> 3U)) 
                                                                  & (((0xfffffffff0ULL 
                                                                       < vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask)
                                                                       ? vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask
                                                                       : 0xfffffffff0ULL) 
                                                                     >> 3U))) 
                                                         >> 1U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                       | (__Vtemp_h5185104b__0[0U] 
                                          << 2U));
                                vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                    = ((__Vtemp_h5185104b__0[0U] 
                                        >> 0x1eU) | 
                                       ((0x3cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                                  >> 0x1aU)) 
                                        | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                           << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e00U & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fffU & 
                                          ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                  >> 0x1aU)) 
                                           | ((0x1c0U 
                                               & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 0x16U)) 
                                              | (0x3cU 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                    >> 0x1aU))))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (0xfffffffcU 
                                       & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (1ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x1c0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x16U)));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h808693e3__0))) 
                                           << 3U));
                        } else {
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = ((0x7fffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                                   | ((QData)((IData)(
                                                      ((0xfc0U 
                                                        & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                           >> 8U)) 
                                                       | (0x38U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x17U));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | (0x7fffffff8ULL 
                                           & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        }
                    } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((0x3fU 
                                                   & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                      >> 0xeU)))) 
                                  << 0x1dU));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)((0x3fU & (IData)(vlSelf->__PVT__cnt_r)))) 
                        << 0x1dU));
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fc000000ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | (0xffffffffff00ULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffffff00ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = (2ULL | (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                << 3U) 
                                               | (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x19U))))) 
                              << 0x36U));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xffffffffffffff0ULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (IData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                         ? 3U : 4U))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                          << 3U) | 
                                         (7U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                >> 0x19U))))) 
                        << 0x36U));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xff8ffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                          ? 6U : 0U))) 
                        << 0x30U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0xfff0000000000ffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | (0xffffffffff00ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = (1ULL | (0xffffffffffffff0ULL 
                                               & vlSelf->__PVT__fsm_resp_header_lo));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0x3fffffffffffffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | ((QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                            << 3U) 
                                                           | (7U 
                                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                 >> 0x19U))))) 
                                          << 0x36U));
                            }
                        } else if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = ((0x3fffffffffffffULL 
                                    & vlSelf->__PVT__fsm_resp_header_lo) 
                                   | ((QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) 
                                                        << 3U) 
                                                       | (7U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x36U));
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo);
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__resp_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (IData)(
                                                       (vlSelf->__PVT__fsm_resp_header_lo 
                                                        >> 0x30U)))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__fsm_resp_header_lo 
                                                    >> 0x30U)))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_header_lo 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSelf->__PVT__fsm_resp_header_lo 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__fsm_fill_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6 
        = ((8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))) 
           & ((~ (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo)))) 
              & (0U < (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))))
            ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSelf->__PVT__fsm_resp_header_lo >> 8U) 
           & vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_ready_then_li = (1U & ((IData)(vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__dirty_data_select = 0U;
    vlSelf->__PVT__fsm_resp_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_h37244aac__0[0U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0U];
        __Vtemp_h37244aac__0[1U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[1U];
        __Vtemp_h37244aac__0[2U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[2U];
        __Vtemp_h37244aac__0[3U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[3U];
        __Vtemp_h37244aac__0[4U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[4U];
        __Vtemp_h37244aac__0[5U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[5U];
        __Vtemp_h37244aac__0[6U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[6U];
        __Vtemp_h37244aac__0[7U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[7U];
        __Vtemp_h37244aac__0[8U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[8U];
        __Vtemp_h37244aac__0[9U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[9U];
        __Vtemp_h37244aac__0[0xaU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xaU];
        __Vtemp_h37244aac__0[0xbU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xbU];
        __Vtemp_h37244aac__0[0xcU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xcU];
        __Vtemp_h37244aac__0[0xdU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xdU];
        __Vtemp_h37244aac__0[0xeU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xeU];
        __Vtemp_h37244aac__0[0xfU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo[0xfU];
    } else {
        __Vtemp_h37244aac__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_h37244aac__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_h37244aac__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_h37244aac__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_h37244aac__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_h37244aac__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_h37244aac__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_h37244aac__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_h37244aac__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_h37244aac__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_h37244aac__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_h37244aac__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_h37244aac__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_h37244aac__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_h37244aac__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_h37244aac__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__dirty_data_select 
                        = (3U & (IData)((((0xffffffffcULL 
                                           & (vlSelf->__PVT__fsm_resp_header_lo 
                                              >> 0xcU)) 
                                          | ((QData)((IData)(
                                                             ((0x30U 
                                                               & (((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                                    ? 
                                                                   ((2U 
                                                                     & (((2U 
                                                                          <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                          >> 1U)
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((1U 
                                                                           <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                           ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                           : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 4U))) 
                                                                  << 4U)) 
                                                              | (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fsm_resp_header_lo 
                                                                            >> 8U)))))) 
                                             >> 4U)) 
                                         & (((0xfffffffff0ULL 
                                              < vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                              ? vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                              : 0xfffffffff0ULL) 
                                            >> 4U))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__dirty_data_select = 
                    (3U & (IData)((((0xffffffffcULL 
                                     & ((0xffffffffff00000ULL 
                                         & ((QData)((IData)(
                                                            vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                                            << 0x14U)) 
                                        | (0xffffffffffffcULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                              >> 0xcU)))) 
                                    | ((QData)((IData)(
                                                       ((0x30U 
                                                         & (((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                              ? 
                                                             ((2U 
                                                               & (((2U 
                                                                    <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                    >> 1U)
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 5U))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((1U 
                                                                     <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                     ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                     : (IData)(
                                                                               (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                         >> 4U))) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (vlSelf->__PVT__fsm_fill_header_lo[0U] 
                                                              >> 8U))))) 
                                       >> 4U)) & ((
                                                   (0xfffffffff0ULL 
                                                    < vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                                    ? vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                                    : 0xfffffffff0ULL) 
                                                  >> 4U))));
            }
        }
    }
    vlSelf->__PVT__dirty_data_selected[0U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h37244aac__0[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h37244aac__0[
                                                 (0xcU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 2U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[1U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h37244aac__0[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h37244aac__0[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[2U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h37244aac__0[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h37244aac__0[
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[3U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h37244aac__0[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h37244aac__0[
                                                 ((IData)(3U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__fsm_fill_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[3U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_fill_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_fill_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_fill_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_resp_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_resp_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_resp_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Body
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__credit_return_o = 0U;
    vlSelf->__PVT__cache_req_done_o = 0U;
    vlSelf->__PVT__cache_req_last_o = 0U;
    vlSelf->__PVT__cache_req_critical_o = 0U;
    vlSelf->__PVT__fsm_cmd_yumi_lo = 0U;
    vlSelf->__PVT__fsm_fill_v_lo = 0U;
    vlSelf->__PVT__fsm_resp_v_lo = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    vlSelf->__PVT__cnt_clear = 0U;
    vlSelf->__PVT__tag_mem_pkt_v_o = 0U;
    vlSelf->__PVT__stat_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__state_n = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
                vlSelf->__PVT__cache_req_last_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__cache_req_done_o = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                                   & (IData)(vlSelf->__PVT__fsm_resp_last_lo));
                vlSelf->__PVT__credit_return_o = vlSelf->__PVT__cache_req_done_o;
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__credit_return_o)
                                           ? 2U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_resp_v_lo = vlSelf->__PVT__fsm_resp_ready_then_li;
            vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
                                       & (IData)(vlSelf->__PVT__fsm_resp_last_lo))
                                       ? ((1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x1cU))))
                                           ? 4U : 2U)
                                       : (IData)(vlSelf->__PVT__state_r));
        } else {
            vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
            vlSelf->__PVT__state_n = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)
                                       ? 2U : (IData)(vlSelf->__PVT__state_r));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__fsm_fill_v_lo = ((IData)(vlSelf->__PVT__fsm_fill_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
                                              & (IData)(vlSelf->__PVT__fsm_fill_last_lo));
            vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                       ? ((0xaU == 
                                           (0xfU & 
                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                           ? 5U : (
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                            << 1U) 
                                                           | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                              >> 0x1fU)))))
                                                    ? 4U
                                                    : 2U))
                                       : (IData)(vlSelf->__PVT__state_r));
        } else if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
                } else {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__fsm_cmd_yumi_lo;
                }
            } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    vlSelf->__PVT__fsm_cmd_yumi_lo 
                        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                           & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                    vlSelf->__PVT__cache_req_critical_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((3U & (IData)((0xfffffffffULL 
                                             & ((0xffffffffff00000ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x14U)) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                   >> 0xcU))))) 
                              == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                    vlSelf->__PVT__cache_req_last_o 
                        = vlSelf->__PVT__cache_req_critical_o;
                    vlSelf->__PVT__cache_req_done_o 
                        = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                           & (IData)(vlSelf->__PVT__cache_req_last_o));
                    vlSelf->__PVT__credit_return_o 
                        = vlSelf->__PVT__cache_req_done_o;
                } else {
                    vlSelf->__PVT__tag_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & ((9U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                              | (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                    vlSelf->__PVT__stat_mem_pkt_v_o 
                        = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                           & (0xaU == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                    vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo))) 
                                               & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                                  | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)))
                                               ? 3U
                                               : (IData)(vlSelf->__PVT__state_r));
                }
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & ((9U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     | (0xaU 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                vlSelf->__PVT__stat_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                   & (0xaU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                            & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                               | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo))) 
                                           & ((~ (IData)(vlSelf->__PVT__stat_mem_pkt_v_o)) 
                                              | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)))
                                           ? 3U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (7U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                                                  & ((~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                     | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)));
                vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo)
                                           ? 5U : (IData)(vlSelf->__PVT__state_r));
            } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                                                  & (~ (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)));
                vlSelf->__PVT__fsm_cmd_yumi_lo = ((
                                                   (~ (IData)(vlSelf->__PVT__tag_mem_pkt_v_o)) 
                                                   | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo));
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & ((3U & (IData)((0xfffffffffULL 
                                         & ((0xffffffffff00000ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x14U)) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 0xcU))))) 
                          == (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)));
                vlSelf->__PVT__state_n = (((IData)(vlSelf->__PVT__fsm_cmd_yumi_lo) 
                                           & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_last_o))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            }
        } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__cache_req_critical_o 
                    = ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o) 
                       & (5U == (0xfU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])));
                vlSelf->__PVT__state_n = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                           & (5U == 
                                              (0xfU 
                                               & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))
                                           ? 7U : (IData)(vlSelf->__PVT__state_r));
            } else {
                vlSelf->__PVT__fsm_resp_v_lo = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo;
                vlSelf->__PVT__tag_mem_pkt_v_o = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                                  & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
                vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            }
        } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
            vlSelf->__PVT__tag_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__stat_mem_pkt_v_o = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
            vlSelf->__PVT__fsm_cmd_yumi_lo = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        } else {
            vlSelf->__PVT__fsm_resp_v_lo = ((IData)(vlSelf->__PVT__fsm_resp_ready_then_li) 
                                            & (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__fsm_cmd_yumi_lo = vlSelf->__PVT__fsm_resp_v_lo;
            vlSelf->__PVT__cnt_clear = ((1U == (IData)(vlSelf->__PVT__cnt_r)) 
                                        & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
            vlSelf->__PVT__cnt_inc = ((1U > (IData)(vlSelf->__PVT__cnt_r)) 
                                      & (IData)(vlSelf->__PVT__fsm_cmd_yumi_lo));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clear = (((0x3fU == (IData)(vlSelf->__PVT__cnt_r)) 
                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__tag_mem_pkt_v_o = 1U;
        vlSelf->__PVT__stat_mem_pkt_v_o = 1U;
        vlSelf->__PVT__cnt_inc = (((0x3fU > (IData)(vlSelf->__PVT__cnt_r)) 
                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clear)
                                   ? 2U : (IData)(vlSelf->__PVT__state_r));
    } else {
        vlSelf->__PVT__state_n = 1U;
    }
    if (vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5) {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_fill_v_lo) 
               & (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_fill_v_lo;
    } else {
        vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_fill_v_lo;
        vlSelf->__PVT__fill_pump_out__DOT__cnt_up = vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo;
    }
    if (vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6) {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = ((IData)(vlSelf->__PVT__fsm_resp_v_lo) 
               & (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)));
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__fsm_resp_v_lo;
    } else {
        vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo 
            = vlSelf->__PVT__fsm_resp_v_lo;
        vlSelf->__PVT__resp_pump_out__DOT__cnt_up = vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo;
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_fill_last_lo)))
                  : ((IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_fill_last_lo)))));
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__fsm_resp_last_lo)))
                  : ((IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__fsm_resp_last_lo)))));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*0:0*/ __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<6>/*187:0*/ __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(188, __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*6:0*/ __Vdly__cnt_r;
    __Vdly__cnt_r = 0;
    // Body
    __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cnt_r = vlSelf->__PVT__cnt_r;
    __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_fill_data_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_fill_data_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_fill_data_lo[2U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_fill_data_lo[3U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__fsm_fill_header_lo[0U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__fsm_fill_header_lo[1U];
        __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__fsm_fill_header_lo[2U];
        __Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__fsm_resp_data_lo[0U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__fsm_resp_data_lo[1U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__fsm_resp_data_lo[2U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__fsm_resp_data_lo[3U];
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = (IData)(vlSelf->__PVT__fsm_resp_header_lo);
        __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = (IData)((vlSelf->__PVT__fsm_resp_header_lo 
                       >> 0x20U));
        __Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx7];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx7];
    }
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx7];
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx8];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx8];
    }
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx8];
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx8];
    vlSelf->__PVT__sync_done_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & ((IData)(vlSelf->__PVT__sync_done_reg__DOT__data_r) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__PVT__state_r)) 
                                                       & (IData)(vlSelf->__PVT__cnt_clear))));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cnt_r = 0U;
        __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__state_r = 0U;
    } else {
        if (vlSelf->__PVT__cnt_clear) {
            __Vdly__cnt_r = vlSelf->__PVT__cnt_inc;
        } else if (vlSelf->__PVT__cnt_inc) {
            __Vdly__cnt_r = (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt_r)));
        }
        if (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__resp_pump_out__DOT__cnt_up) {
                __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__resp_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__fill_pump_out__DOT__cnt_up) {
                __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__fill_pump_out__DOT__cnt_up)));
        }
        vlSelf->__PVT__state_r = vlSelf->__PVT__state_n;
    }
    if (vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = ((0xb7U >= (0xffU & ((IData)(0x17U) * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                ? (0x7fffffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                                  ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[
                                          (((IData)(0x16U) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))))) 
                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[
                                   (7U & (((IData)(0x17U) 
                                           * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x17U) 
                                                * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))))
                : 0U);
    }
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[1U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[2U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[3U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[4U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[5U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[6U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[7U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[8U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[9U];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xaU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xbU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xcU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xdU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xeU];
        vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xfU];
    }
    if (vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r) {
        vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o;
    }
    if (vlSelf->__PVT__fsm_cmd_yumi_lo) {
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
            = vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U];
        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[2U] 
            = (0x7ffU & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]);
    }
    if (__Vdlyvset__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    vlSelf->__PVT__cnt_r = __Vdly__cnt_r;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
           & (4U == (7U & (IData)(vlSelf->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo) 
           & (1U == (3U & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o))));
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
}

VL_INLINE_OPT void Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__1(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__1\n"); );
    // Init
    IData/*25:0*/ __VdfgExtracted_h808693e3__0;
    __VdfgExtracted_h808693e3__0 = 0;
    IData/*25:0*/ __VdfgExtracted_h77ddc221__0;
    __VdfgExtracted_h77ddc221__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h5185104b__0;
    VlWide<16>/*511:0*/ __Vtemp_h79cae478__0;
    // Body
    __VdfgExtracted_h808693e3__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | (0x700000U & 
                                       ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              >> 0xbU)))));
    __VdfgExtracted_h77ddc221__0 = ((0x3800000U & (
                                                   vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 5U)) 
                                    | ((0x700000U & 
                                        ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                          << 0x15U) 
                                         | (0x100000U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                               >> 0xbU)))) 
                                       | (0xfffffU 
                                          & ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                              << 0xcU) 
                                             | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 0x14U)))));
    vlSelf->__PVT__fsm_fill_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_header_lo[2U] = 0U;
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->__PVT__data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[3U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[4U] = 0U;
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o)
                                    : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__fsm_fill_header_lo[0U]));
                    vlSelf->__PVT__fsm_fill_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_fill_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U)))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_fill_header_lo[1U] 
                        = ((0x3fffffU & vlSelf->__PVT__fsm_fill_header_lo[1U]) 
                           | (0xffc00000U & ((0x80000000U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                 << 0x17U)) 
                                             | ((0x70000000U 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                    << 0x17U)) 
                                                | ((0xe000000U 
                                                    & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                                   | (0x1c00000U 
                                                      & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                                         << 0x14U)))))));
                    vlSelf->__PVT__fsm_fill_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__fsm_fill_header_lo[2U]) 
                           | (3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                    >> 9U)));
                }
            }
        }
    }
    vlSelf->__PVT__fill_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                            >> 0x10U))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->__PVT__fsm_fill_header_lo[1U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
    vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5 
        = ((0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])) 
           & ((~ (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U]))) 
              & (0U < (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x10U >> (0xfU & vlSelf->__PVT__fsm_fill_header_lo[0U])))
            ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                        >> 8U))) & vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_header_lo = 0ULL;
    vlSelf->__PVT__fsm_fill_ready_then_li = (1U & ((IData)(vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                             >> 0x1aU))));
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | (0xffffffffff00ULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffffff00ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = (2ULL | (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo));
                    vlSelf->__PVT__fsm_resp_header_lo 
                        = ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                           | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                << 3U) 
                                               | (7U 
                                                  & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                     >> 0x19U))))) 
                              << 0x36U));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xfff0000000000ffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (0xffffffffff00ULL & (((QData)((IData)(
                                                              vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[0U]))))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xffffffffffffff0ULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | (IData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                         ? 3U : 4U))));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0x3fffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                          << 3U) | 
                                         (7U & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                >> 0x19U))))) 
                        << 0x36U));
                vlSelf->__PVT__fsm_resp_header_lo = 
                    ((0xff8ffffffffffffULL & vlSelf->__PVT__fsm_resp_header_lo) 
                     | ((QData)((IData)(((IData)(vlSelf->__VdfgTmp_h462b05e0__0)
                                          ? 6U : 0U))) 
                        << 0x30U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__stat_mem_pkt_cast_o 
                                    = (1U | ((0x7e0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 9U)) 
                                             | (0x1cU 
                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 0x1aU))));
                            }
                        } else {
                            vlSelf->__PVT__stat_mem_pkt_cast_o 
                                = (1U | ((0x7e0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 9U)) 
                                         | (0x1cU & 
                                            (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             >> 0x1aU))));
                        }
                    }
                } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                    if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (1U | ((0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                >> 9U)) 
                                     | (0x1cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x1aU))));
                    }
                } else if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = ((0x1fU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                               | (0x7e0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                            >> 9U)));
                        vlSelf->__PVT__stat_mem_pkt_cast_o 
                            = (0x7fcU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
                    }
                }
                if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0xfff0000000000ffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | (0xffffffffff00ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                              << 0x20U) 
                                             | (0xffffffffffffff00ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = (1ULL | (0xffffffffffffff0ULL 
                                               & vlSelf->__PVT__fsm_resp_header_lo));
                                vlSelf->__PVT__fsm_resp_header_lo 
                                    = ((0x3fffffffffffffULL 
                                        & vlSelf->__PVT__fsm_resp_header_lo) 
                                       | ((QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                            << 3U) 
                                                           | (7U 
                                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                                 >> 0x19U))))) 
                                          << 0x36U));
                            }
                        } else if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = ((0x3fffffffffffffULL 
                                    & vlSelf->__PVT__fsm_resp_header_lo) 
                                   | ((QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) 
                                                        << 3U) 
                                                       | (7U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x36U));
                            vlSelf->__PVT__fsm_resp_header_lo 
                                = (0xffffffffffffff0ULL 
                                   & vlSelf->__PVT__fsm_resp_header_lo);
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->__PVT__cnt_r) 
                                                        << 5U)));
            vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if ((8U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & (~ (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                      >> 2U)))) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x1ffU 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7e00U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                 >> 5U)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                        = (((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                        = (((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U])))) 
                                            >> 0x1aU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x7fc0U 
                                            & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fffU 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (2U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                } else {
                                    vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                        = ((0x3fU & 
                                            vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                           | (0x7fc0U 
                                              & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                        = (1U | (0xfffffffcU 
                                                 & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                }
                                if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                                        = (2ULL | ((QData)((IData)(
                                                                   ((0xfc000000U 
                                                                     & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                        << 0xcU)) 
                                                                    | __VdfgExtracted_h77ddc221__0))) 
                                                   << 3U));
                                }
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fc0U & 
                                          ((0x7e00U 
                                            & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                               >> 5U)) 
                                           | (0x1c0U 
                                              & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (1U | (0xfffffffcU 
                                             & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((4U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_v_o 
                                = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x7fc0U & ((0x7e00U 
                                                  & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                     >> 5U)) 
                                                 | (0x1c0U 
                                                    & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       >> 0x16U)))));
                            vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                = (1U | (0xfffffffcU 
                                         & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h77ddc221__0))) 
                                           << 3U));
                        } else {
                            if ((1U & (~ vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                                vlSelf->__PVT__data_mem_pkt_v_o 
                                    = vlSelf->__PVT__cmd_pump_in->__PVT__fsm_v_o;
                            }
                            if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x1c0U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 0x16U)));
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (2ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h808693e3__0))) 
                                               << 3U));
                            } else {
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x1ffU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7e00U & 
                                          (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                           >> 5U)));
                                __Vtemp_h5185104b__0[0U] 
                                    = ((vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                        << 4U) | (0xfU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((IData)(
                                                                 (((0x1ffffffff8ULL 
                                                                    & ((0x1fffffffffe00000ULL 
                                                                        & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                                           << 0x15U)) 
                                                                       | (0x1ffffffffffff8ULL 
                                                                          & ((QData)((IData)(
                                                                                vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                                             >> 0xbU)))) 
                                                                   | ((QData)((IData)(
                                                                                ((0x30U 
                                                                                & (((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__state_r)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (((2U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                                >> 1U)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                <= (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__size_li))
                                                                                 ? (IData)(vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                                >> 8U))))) 
                                                                      >> 3U)) 
                                                                  & (((0xfffffffff0ULL 
                                                                       < vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask)
                                                                       ? vlSelf->__PVT__cmd_pump_in->__PVT__pump_control__DOT__nz__DOT__addr_mask
                                                                       : 0xfffffffff0ULL) 
                                                                     >> 3U))) 
                                                         >> 1U)))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                                       | (__Vtemp_h5185104b__0[0U] 
                                          << 2U));
                                vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                                    = ((__Vtemp_h5185104b__0[0U] 
                                        >> 0x1eU) | 
                                       ((0x3cU & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U] 
                                                  >> 0x1aU)) 
                                        | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                           << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[3U] 
                                    = ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                              >> 0x1aU)) 
                                       | ((0x3cU & 
                                           (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U] 
                                            >> 0x1aU)) 
                                          | (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                             << 6U)));
                                vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                    = ((0x7e00U & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                       | (0x7fffU & 
                                          ((3U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                  >> 0x1aU)) 
                                           | ((0x1c0U 
                                               & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 0x16U)) 
                                              | (0x3cU 
                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U] 
                                                    >> 0x1aU))))));
                                vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                                    = (0xfffffffcU 
                                       & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                                vlSelf->__PVT__tag_mem_pkt_cast_o 
                                    = (1ULL | ((QData)((IData)(
                                                               ((0xfc000000U 
                                                                 & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                    << 0xcU)) 
                                                                | __VdfgExtracted_h77ddc221__0))) 
                                               << 3U));
                            }
                        }
                    } else if ((2U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                            vlSelf->__PVT__data_mem_pkt_cast_o[4U] 
                                = ((0x7e3fU & vlSelf->__PVT__data_mem_pkt_cast_o[4U]) 
                                   | (0x1c0U & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x16U)));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | ((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                                << 0xcU)) 
                                                            | __VdfgExtracted_h808693e3__0))) 
                                           << 3U));
                        } else {
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = ((0x7fffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                                   | ((QData)((IData)(
                                                      ((0xfc0U 
                                                        & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                           >> 8U)) 
                                                       | (0x38U 
                                                          & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                             >> 0x19U))))) 
                                      << 0x17U));
                            vlSelf->__PVT__tag_mem_pkt_cast_o 
                                = (2ULL | (0x7fffffff8ULL 
                                           & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        }
                    } else if ((1U & vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((0x3fU 
                                                   & (vlSelf->__PVT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U] 
                                                      >> 0xeU)))) 
                                  << 0x1dU));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)((0x3fU & (IData)(vlSelf->__PVT__cnt_r)))) 
                        << 0x1dU));
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fc000000ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
            }
        }
    }
    vlSelf->__PVT__resp_pump_out__DOT__stream_size 
        = (3U & (((1U < (((IData)(1U) << (7U & (IData)(
                                                       (vlSelf->__PVT__fsm_resp_header_lo 
                                                        >> 0x30U)))) 
                         >> 4U)) ? (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__fsm_resp_header_lo 
                                                    >> 0x30U)))) 
                                    >> 4U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_header_lo 
                                                                >> 0x30U)))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & (IData)(
                                                            (vlSelf->__PVT__fsm_resp_header_lo 
                                                             >> 0x30U)))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__fsm_fill_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6 
        = ((8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))) 
           & ((~ (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo)))) 
              & (0U < (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (8U >> (0xfU & (IData)(vlSelf->__PVT__fsm_resp_header_lo))))
            ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__stream_size)
            : 0U);
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
        = ((vlSelf->__PVT__fsm_resp_header_lo >> 8U) 
           & vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_resp_ready_then_li = (1U & ((IData)(vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6)
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__dirty_data_select = 0U;
    vlSelf->__PVT__fsm_resp_last_lo = ((3U & ((IData)(
                                                      (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                       >> 4U)) 
                                              + (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))) 
                                       == (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_h79cae478__0[0U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0U];
        __Vtemp_h79cae478__0[1U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[1U];
        __Vtemp_h79cae478__0[2U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[2U];
        __Vtemp_h79cae478__0[3U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[3U];
        __Vtemp_h79cae478__0[4U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[4U];
        __Vtemp_h79cae478__0[5U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[5U];
        __Vtemp_h79cae478__0[6U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[6U];
        __Vtemp_h79cae478__0[7U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[7U];
        __Vtemp_h79cae478__0[8U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[8U];
        __Vtemp_h79cae478__0[9U] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[9U];
        __Vtemp_h79cae478__0[0xaU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xaU];
        __Vtemp_h79cae478__0[0xbU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xbU];
        __Vtemp_h79cae478__0[0xcU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xcU];
        __Vtemp_h79cae478__0[0xdU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xdU];
        __Vtemp_h79cae478__0[0xeU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xeU];
        __Vtemp_h79cae478__0[0xfU] = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo[0xfU];
    } else {
        __Vtemp_h79cae478__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_h79cae478__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_h79cae478__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_h79cae478__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_h79cae478__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_h79cae478__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_h79cae478__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_h79cae478__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_h79cae478__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_h79cae478__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_h79cae478__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_h79cae478__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_h79cae478__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_h79cae478__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_h79cae478__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_h79cae478__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__dirty_data_select 
                        = (3U & (IData)((((0xffffffffcULL 
                                           & (vlSelf->__PVT__fsm_resp_header_lo 
                                              >> 0xcU)) 
                                          | ((QData)((IData)(
                                                             ((0x30U 
                                                               & (((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                                    ? 
                                                                   ((2U 
                                                                     & (((2U 
                                                                          <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                          >> 1U)
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 5U))) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((1U 
                                                                           <= (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                           ? (IData)(vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                           : (IData)(
                                                                                (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 4U))) 
                                                                  << 4U)) 
                                                              | (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fsm_resp_header_lo 
                                                                            >> 8U)))))) 
                                             >> 4U)) 
                                         & (((0xfffffffff0ULL 
                                              < vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                              ? vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                              : 0xfffffffff0ULL) 
                                            >> 4U))));
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__dirty_data_select = 
                    (3U & (IData)((((0xffffffffcULL 
                                     & ((0xffffffffff00000ULL 
                                         & ((QData)((IData)(
                                                            vlSelf->__PVT__fsm_fill_header_lo[1U])) 
                                            << 0x14U)) 
                                        | (0xffffffffffffcULL 
                                           & ((QData)((IData)(
                                                              vlSelf->__PVT__fsm_fill_header_lo[0U])) 
                                              >> 0xcU)))) 
                                    | ((QData)((IData)(
                                                       ((0x30U 
                                                         & (((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r)
                                                              ? 
                                                             ((2U 
                                                               & (((2U 
                                                                    <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo) 
                                                                    >> 1U)
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                               >> 5U))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((1U 
                                                                     <= (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li))
                                                                     ? (IData)(vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo)
                                                                     : (IData)(
                                                                               (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                                >> 4U)))))
                                                              : (IData)(
                                                                        (vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                                                         >> 4U))) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (vlSelf->__PVT__fsm_fill_header_lo[0U] 
                                                              >> 8U))))) 
                                       >> 4U)) & ((
                                                   (0xfffffffff0ULL 
                                                    < vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask)
                                                    ? vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask
                                                    : 0xfffffffff0ULL) 
                                                  >> 4U))));
            }
        }
    }
    vlSelf->__PVT__dirty_data_selected[0U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h79cae478__0[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h79cae478__0[
                                                 (0xcU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 2U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[1U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h79cae478__0[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h79cae478__0[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[2U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h79cae478__0[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h79cae478__0[
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__dirty_data_selected[3U] = (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                    << 7U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_h79cae478__0[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xcU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                        << 7U))))) 
                                              | (__Vtemp_h79cae478__0[
                                                 ((IData)(3U) 
                                                  + 
                                                  (0xcU 
                                                   & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                      << 2U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__dirty_data_select) 
                                                     << 7U))));
    vlSelf->__PVT__fsm_fill_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_fill_data_lo[3U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[0U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[1U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[2U] = 0U;
    vlSelf->__PVT__fsm_resp_data_lo[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_fill_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_fill_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_fill_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_fill_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__fsm_resp_data_lo[0U] 
                        = vlSelf->__PVT__dirty_data_selected[0U];
                    vlSelf->__PVT__fsm_resp_data_lo[1U] 
                        = vlSelf->__PVT__dirty_data_selected[1U];
                    vlSelf->__PVT__fsm_resp_data_lo[2U] 
                        = vlSelf->__PVT__dirty_data_selected[2U];
                    vlSelf->__PVT__fsm_resp_data_lo[3U] 
                        = vlSelf->__PVT__dirty_data_selected[3U];
                }
            }
        }
    }
}
