// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_cce_dir_segment__pi102.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi72.h"
#include "Vtestbench_bp_me_stream_pump_in__pi74.h"
#include "Vtestbench_bp_me_stream_pump_out__pi73.h"
#include "Vtestbench_bp_me_stream_pump_out__pi75.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__53(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__53\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[4U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[2U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
        = ((0xf1ffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) 
              << 0x19U));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
        = (0x80000U | (0xffc7ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_inc = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_dec = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_inc = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_inc = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr = 0ULL;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 1U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                 >> 0xeU));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                           >> 0x14U)));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li 
        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                 >> 0x11U));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__squash_v_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 0U;
    if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o) {
        if (vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____VdfgExtracted_hf7da3a43__0) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo) 
                            & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_last_o)) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
                } else if ((8U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                             ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                             : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x7ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                             >> 8U)))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x7ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                              >> 8U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x7ffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                            >> 8U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo) 
                            & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_last_o)) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                            >> 3U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x70000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xffc7ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x380000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 3U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo) 
                              << 0x1fU));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                           | (3U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo) 
                                    >> 1U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U])) 
                                                 >> 8U)));
                } else {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                             ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                             : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = (4U | (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x7ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                             >> 8U)))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x7ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                              >> 8U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x7ffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                            >> 8U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo) 
                            & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_last_o)) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                            >> 3U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x70000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xffc7ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x380000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                           >> 3U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x80000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                        = ((0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                           | (3U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]));
                }
            }
        } else if ((0U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 1U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                = ((0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                   | ((0x100000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])
                       ? 0xbU : 4U));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                = (0xffffffffffULL & (((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                       >> 8U)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                   | ((IData)((0x7ffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                      >> 8U)))) 
                      << 8U));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                   | (((IData)((0x7ffffffffffULL & 
                                (((QData)((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                  << 0x18U) | ((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               >> 8U)))) 
                       >> 0x18U) | ((IData)(((0x7ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    >> 8U))) 
                                             >> 0x20U)) 
                                    << 8U)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo) 
                    & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_last_o)) 
                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                   | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                    >> 3U)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                   | (0x70000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                = ((0xffc7ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                   | (0x380000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                   >> 3U)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                   | (0x80000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                = ((0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                   | (3U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[6U]));
        } else if ((1U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
            if ((0x100000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                    = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                         ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                         : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                       & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                    = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                    = (0xcU | (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                    = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                       | ((IData)((0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                       >> 8U)))) << 8U));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                       | (((IData)((0xffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U)))) >> 0x18U) 
                          | ((IData)(((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                             >> 8U))) 
                                      >> 0x20U)) << 8U)));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                    = ((0xfe07ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                       | (0x1f80000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                        >> 3U)));
            } else {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo 
                    = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_v_o;
            }
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                = (0xffffffffffULL & (((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                       >> 8U)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo) 
                    & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pump_in->__PVT__fsm_last_o)) 
                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
        }
    }
    if ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
          & (2U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
         & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy)))) {
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo) 
               & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li));
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
            = (0xffffffffffULL & (((QData)((IData)(
                                                   vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                >> 8U)));
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
            if ((8U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((4U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r)))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x1cU;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                        if ((1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag) 
                                   | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                      >> 0x19U)))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0x1fU & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__squash_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0x10U | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                        } else if ((0x2000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0x1fU & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0xeU | (0x30U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li)));
                        } else if ((IData)((0U != (0x88000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0x1fU & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (9U | (0x30U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li)));
                        } else {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li 
                                = (0x1fU & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                        }
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 5U;
                    } else if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) {
                        if ((4U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x1bU;
                        } else if ((((3U == (0xfU & 
                                             vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                     & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy))) 
                                    & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                     : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                                = (1U | (0xfffffff0U 
                                         & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                                = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U];
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                                = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U];
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                                = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U];
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                                = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U];
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                = (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                       >> 8U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                                = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                                   | ((IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     >> 8U)))) 
                                      << 8U));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                                   | (((IData)((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                      >> 8U)))) 
                                       >> 0x18U) | 
                                      ((IData)(((0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                       >> 8U))) 
                                                >> 0x20U)) 
                                       << 8U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                                    & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r))) 
                                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                = ((0x803fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                                   | (0xffc00000U & 
                                      ((0xe000000U 
                                        & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                           << 0xbU)) 
                                       | (0x1c00000U 
                                          & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             << 3U)))));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo) 
                                    & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li))
                                    ? 0x1bU : 0x1aU);
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                = ((0xfff8ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                                   | (0x70000U & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U]));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy)))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                                = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                                          ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                          : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                   | (0x1c00000U & 
                                      (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                       << 0x13U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v 
                                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo) 
                                   & (IData)((0U != 
                                              (0x302000U 
                                               & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U]))));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 8U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                = (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                       << 0xcU) | ((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                   >> 0x14U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                                = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                         >> 3U));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                                = (7U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U]);
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li 
                                = ((0x2000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                    ? 0U : ((0x200000U 
                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                             ? 7U : 
                                            ((0x100000U 
                                              & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                              ? 3U : 0U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                   | (0x70000000U & 
                                      (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                       << 0x1cU)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo)
                                    ? ((IData)((0x100000U 
                                                == 
                                                (0x102000U 
                                                 & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                        ? 0x1aU : 0x1bU)
                                    : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                                = ((0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                                   | ((IData)((0U != 
                                               (0x202000U 
                                                & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                       ? 9U : ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00000U 
                                                         & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                                ? 8U
                                                : 0xaU)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                                = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                                   | ((IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                     >> 0x14U)))) 
                                      << 8U));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                   | (((IData)((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                      >> 0x14U)))) 
                                       >> 0x18U) | 
                                      ((IData)(((0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                       >> 0x14U))) 
                                                >> 0x20U)) 
                                       << 8U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                   | (((0x2000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                        ? 0U : ((0x200000U 
                                                 & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                 ? 7U
                                                 : 
                                                ((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                  ? 3U
                                                  : 0U))) 
                                      << 0x1fU));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                                = ((0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                                   | (0x7ffU & (((0x2000U 
                                                  & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                  ? 0U
                                                  : 
                                                 ((0x200000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                   ? 7U
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                    ? 3U
                                                    : 0U))) 
                                                >> 1U)));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                                = ((3U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                                   | (0x7fcU & ((0x700U 
                                                 & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                    >> 9U)) 
                                                | ((0xe0U 
                                                    & ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                                        << 6U) 
                                                       | (0x20U 
                                                          & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                             >> 0x1aU)))) 
                                                   | (0x1cU 
                                                      & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                         >> 0xcU))))));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy)))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                            = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                                      ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                      : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                            = (5U | (0xfffffff0U & 
                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo)
                                ? 0x1bU : 0x15U);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                               | ((IData)((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)))) 
                                  << 8U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (((IData)((0xffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                  >> 0x14U)))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                              << 0xcU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                                >> 0x14U))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                << 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (0xf0000000U & ((0x80000000U 
                                                  & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                     << 0xeU)) 
                                                 | (0x70000000U 
                                                    & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U]))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                            = ((0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]) 
                               | (3U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                        >> 0x12U)));
                    }
                } else if (((~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy)) 
                            & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                   ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                   : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                                 & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = ((0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                           | ((3U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                               ? 1U : ((4U == (0xfU 
                                               & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))
                                        ? 2U : 0U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = ((0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        (7U 
                                                         & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                            >> 8U)))) 
                                        << 0x2cU) | 
                                       ((0xffffffffff0ULL 
                                         & (((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                             << 0x10U) 
                                            | (0xfffffffffff0ULL 
                                               & ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                  >> 0x10U)))) 
                                        | (QData)((IData)(
                                                          (0xfU 
                                                           & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                              >> 4U))))))) 
                              << 4U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (((IData)((((QData)((IData)(
                                                         (7U 
                                                          & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                             >> 8U)))) 
                                         << 0x2cU) 
                                        | ((0xffffffffff0ULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                << 0x10U) 
                                               | (0xfffffffffff0ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                     >> 0x10U)))) 
                                           | (QData)((IData)(
                                                             (0xfU 
                                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                 >> 4U))))))) 
                               >> 0x1cU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (7U 
                                                                        & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                           >> 8U)))) 
                                                       << 0x2cU) 
                                                      | ((0xffffffffff0ULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                              << 0x10U) 
                                                             | (0xfffffffffff0ULL 
                                                                & ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                                   >> 0x10U)))) 
                                                         | (QData)((IData)(
                                                                           (0xfU 
                                                                            & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                               >> 4U)))))) 
                                                     >> 0x20U)) 
                                            << 4U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                            & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r))) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0x803fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (0xffc00000U & ((0xe000000U 
                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                 << 0xbU)) 
                                             | (0x1c00000U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   << 3U)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo) 
                            & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__fsm_last_o))
                            ? 5U : 0x14U);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = (0x100000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                }
            } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) {
                        if ((((3U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                              & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy))) 
                             & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy)))) {
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                                    = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                         ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                         : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                                       & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                    = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                                    = (1U | (0xfffffff0U 
                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                                    = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U];
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                                    = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U];
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                                    = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U];
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                                    = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U];
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                    = (0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                             >> 8U)));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                                    = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                                       | ((IData)((0x7ffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                         >> 8U)))) 
                                          << 8U));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                    = ((0xfff80000U 
                                        & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                                       | (((IData)(
                                                   (0x7ffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                          >> 8U)))) 
                                           >> 0x18U) 
                                          | ((IData)(
                                                     ((0x7ffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                           << 0x18U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                             >> 8U))) 
                                                      >> 0x20U)) 
                                             << 8U)));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                                    = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                                        & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r))) 
                                       & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                    = ((0xf03fffffU 
                                        & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                                       | (0xffc00000U 
                                          & ((0xe000000U 
                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                 << 0xbU)) 
                                             | (0x1c00000U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   << 3U)))));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                    = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo) 
                                        & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li))
                                        ? 0x14U : 0x13U);
                            }
                        } else if ((4U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x14U;
                        } else if ((1U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x14U;
                        }
                    }
                } else if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__uc_inv_owner) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy)))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                            = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                                      ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                      : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                               | ((IData)((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)))) 
                                  << 8U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (((IData)((0xffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                  >> 0x14U)))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                              << 0xcU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                                >> 0x14U))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 8U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                            = (0xffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                     >> 0x14U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                            = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                     >> 3U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                            = (7U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U]);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li = 0U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                                << 0x13U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v)
                                ? 0x13U : 0x12U);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                               | (0x70000000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                                 << 0x1cU)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                            = (0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                            = ((0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                               | ((0x800000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                   ? 2U : 7U));
                    }
                } else {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x14U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) {
                    if ((4U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                        if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0xeU;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_r) 
                                   & (~ ((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                   >> 0xeU)))));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag) 
                                    | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__uc_inv_owner))
                                    ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n) 
                                       & (~ ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                                    >> 3U)))))
                                    : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n));
                        } else {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                = ((IData)((0U != (0x4004000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                    ? 0x12U : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag)
                                                ? 0x16U
                                                : 0x1bU));
                        }
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = (0xfeffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]);
                    } else if ((((3U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                 & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy))) 
                                & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                            = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                 ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                 : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                               & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                            = (1U | (0xfffffff0U & 
                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                            = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                            = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                            = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                            = vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                            = (0xffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                     >> 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = (0xfeffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                               | ((IData)((0x7ffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)))) 
                                  << 8U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                  >> 8U)))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                                >> 8U))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                            = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                                & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r))) 
                               & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0x803fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (0xffc00000U & ((0xe000000U 
                                                  & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                     << 0xbU)) 
                                                 | (0x1c00000U 
                                                    & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       << 3U)))));
                        if ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                              & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__fsm_last_o)) 
                             & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_r) 
                                   & (~ ((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                   >> 0xeU)))));
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag) 
                                    | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__uc_inv_owner))
                                    ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n) 
                                       & (~ ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                                    >> 3U)))))
                                    : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n));
                        }
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                                & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__fsm_last_o))
                                ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag)
                                    ? 0xeU : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag)
                                               ? 0x16U
                                               : 0x1bU))
                                : 0x11U);
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy)))) {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                    = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                    = (7U | (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                    = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo)
                        ? 0x11U : 0x10U);
                if ((IData)((0U != (0x4004000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x70000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U]));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                           << 0xcU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                             >> 0x14U)))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0xffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                              >> 0x14U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0xffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                          << 0xcU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                            >> 0x14U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                } else {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0x70000000U & ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                              << 0x1dU) 
                                             | (0x10000000U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                   >> 3U)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U])) 
                                             >> 2U)))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xffff0000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0xffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U])) 
                                              >> 2U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0xffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) 
                                                          << 0x1eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U])) 
                                                            >> 2U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                }
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                    = ((0xfe3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                       | (0x1c00000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                        << 8U)));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                    = (0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]);
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U] 
                    = (0x7fcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[2U]);
            }
        } else if ((8U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
            if ((4U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                        if ((0U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                = ((IData)((0U != (0x4004000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                    ? 0x12U : ((0x2000000U 
                                                & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                ? 0x15U
                                                : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag)
                                                    ? 0x16U
                                                    : 0x1bU)));
                        } else if (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
                                    & (1U == (0xfU 
                                              & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_dec 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo;
                            if ((1U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt))) {
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                                    = ((IData)((0U 
                                                != 
                                                (0x4004000U 
                                                 & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                        ? 0x12U : (
                                                   (0x2000000U 
                                                    & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                    ? 0x15U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag)
                                                     ? 0x16U
                                                     : 0x1bU)));
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t))) {
                            if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy) {
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                    = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r;
                            } else {
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                                    = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                                    = (2U | (0xfffffff0U 
                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_inc 
                                    = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo) 
                                       & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r)));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 8U;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                    = (0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                           << 0xcU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                             >> 0x14U)));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li = 0U;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                                    = ((0xbU >= (0xfU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id))))
                                        ? (7U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_ways_r) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id)))))
                                        : 0U);
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li = 0U;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                                    = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]) 
                                       | ((IData)((0xffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                         >> 0x14U)))) 
                                          << 8U));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                    = ((0xffff0000U 
                                        & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                       | (((IData)(
                                                   (0xffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                        << 0xcU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                          >> 0x14U)))) 
                                           >> 0x18U) 
                                          | ((IData)(
                                                     ((0xffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                           << 0xcU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                             >> 0x14U))) 
                                                      >> 0x20U)) 
                                             << 8U)));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v 
                                    = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_inc;
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                                    = ((4U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li)) 
                                       | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                    = ((0xff3fffffU 
                                        & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                       | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id) 
                                          << 0x16U));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                                    = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v)
                                        ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r) 
                                           & (~ ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id))))
                                        : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r));
                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                                    = ((0x8fffffffU 
                                        & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                                       | (((0xbU >= 
                                            (0xfU & 
                                             ((IData)(3U) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id))))
                                            ? (7U & 
                                               ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_ways_r) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id)))))
                                            : 0U) << 0x1cU));
                                if ((0U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n))) {
                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0xfU;
                                }
                            }
                        }
                        if (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
                             & (1U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li;
                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_dec 
                                = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                 >> 0xeU));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li 
                        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                 >> 0x11U));
                    if ((0x2000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v = 1U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 8U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                            = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                     >> 0x1cU));
                    } else if ((IData)((0U != (0x4004000U 
                                               & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v 
                            = (1U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                     >> 0x18U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 8U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                            = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                     >> 0x1cU));
                    } else {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v = 1U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 7U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li 
                            = (7U & ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                      << 1U) | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                >> 0x1fU)));
                    }
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = ((0x1000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                            ? 0x10U : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag)
                                        ? 0xeU : ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x4004000U 
                                                            & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                                   ? 0x12U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                                    ? 0x15U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag)
                                                     ? 0x16U
                                                     : 0x1bU)))));
                    if (((~ (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                             >> 0x18U)) & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_r) 
                               & (~ ((IData)(1U) << 
                                     (3U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                            >> 0xeU)))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n 
                            = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag) 
                                | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__uc_inv_owner))
                                ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n) 
                                   & (~ ((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[4U] 
                                                   >> 3U)))))
                                : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n));
                    }
                } else {
                    if (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o) 
                         | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U] 
                            = ((3U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                                              ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_coh_state_o)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_coh_state_o)
                                                               : 0U)))) 
                                            << 0x28U) 
                                           | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                               ? (QData)((IData)(
                                                                 ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_tag_lo 
                                                                   << 0xcU) 
                                                                  | (0xfc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                               : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                   ? (QData)((IData)(
                                                                     ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_tag_lo 
                                                                       << 0xcU) 
                                                                      | (0xfc0U 
                                                                         & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                            << 6U)))))
                                                   : 0ULL)))) 
                                  << 2U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xffffe000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_coh_state_o)
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                                ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_coh_state_o)
                                                                : 0U)))) 
                                             << 0x28U) 
                                            | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                                ? (QData)((IData)(
                                                                  ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_tag_lo 
                                                                    << 0xcU) 
                                                                   | (0xfc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                         << 6U)))))
                                                : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                    ? (QData)((IData)(
                                                                      ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_tag_lo 
                                                                        << 0xcU) 
                                                                       | (0xfc0U 
                                                                          & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                             << 6U)))))
                                                    : 0ULL)))) 
                                   >> 0x1eU) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                                                             ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_coh_state_o)
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                                              ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_coh_state_o)
                                                                              : 0U)))) 
                                                           << 0x28U) 
                                                          | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_v_o)
                                                              ? (QData)((IData)(
                                                                                ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__lru_tag_lo 
                                                                                << 0xcU) 
                                                                                | (0xfc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                                << 6U)))))
                                                              : 
                                                             ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_v_o)
                                                               ? (QData)((IData)(
                                                                                ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__lru_tag_lo 
                                                                                << 0xcU) 
                                                                                | (0xfc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment->__PVT__addr_r 
                                                                                >> 6U)) 
                                                                                << 6U)))))
                                                               : 0ULL))) 
                                                         >> 0x20U)) 
                                                << 2U)));
                    }
                    if (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_v_lo) 
                         & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_busy_lo)))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] 
                            = ((0x8fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U]) 
                               | (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__req_lce_cached)
                                    ? ((0xbU >= (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                        >> 0xeU)))))
                                        ? (7U & ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_ways_o) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                         >> 0xeU))))))
                                        : 0U) : 0U) 
                                  << 0x1cU));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0xdU;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xfcffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (0xff000000U & (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_uf_lo) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x4004000U 
                                                               & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                                      ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__req_lce_cached)
                                                      : 
                                                     ((~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_uf_lo)) 
                                                      & ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                                              >> 0xaU))) 
                                                         | ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                                                 >> 0xaU))) 
                                                            | (7U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                                                   >> 0xaU))))))) 
                                                    << 0x18U))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xff87ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (0xfff80000U & (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cof_lo) 
                                                  << 0x16U) 
                                                 | (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cmf_lo) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cef_lo) 
                                                        << 0x14U) 
                                                       | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_csf_lo) 
                                                          << 0x13U))))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xff7fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cff_lo) 
                                  << 0x17U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0x1fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_hf9b9d42f__0)
                                    ? ((0xbU >= (0xfU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo))))
                                        ? (7U & ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_coh_states_o) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo)))))
                                        : 0U) : 0U) 
                                  << 0x1dU));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[4U] 
                            = (0x3fU & ((0x1ffffff8U 
                                         & (((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_hf9b9d42f__0)
                                              ? (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo)
                                              : 0U) 
                                            << 3U)) 
                                        | (((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_hf9b9d42f__0)
                                             ? ((0xbU 
                                                 >= 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo))))
                                                 ? 
                                                (7U 
                                                 & ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_ways_o) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo)))))
                                                 : 0U)
                                             : 0U) 
                                           | (((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_hf9b9d42f__0)
                                                ? (
                                                   (0xbU 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo))))
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_coh_states_o) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo)))))
                                                    : 0U)
                                                : 0U) 
                                              >> 3U))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                            = ((0xfff1ffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                               | (((IData)((0U != (0x4004000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                                    ? 0U : ((0x2000U 
                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])
                                             ? 6U : 
                                            ((1U & 
                                              ((((((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U] 
                                                    >> 0xfU) 
                                                   | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_csf_lo)) 
                                                  | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cef_lo)) 
                                                 | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cmf_lo)) 
                                                | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cof_lo)) 
                                               | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cff_lo)))
                                              ? 1U : 2U))) 
                                  << 0x11U));
                    }
                }
            } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                        = (7U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                 >> 0xeU));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0xcU;
                } else if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy)))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                             ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                             : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                           & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__squash_v_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li = 0x20U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        (7U 
                                                         & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                            >> 8U)))) 
                                        << 0x28U) | 
                                       (0xffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                              >> 0x14U))))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (((IData)((((QData)((IData)(
                                                         (7U 
                                                          & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                             >> 8U)))) 
                                         << 0x28U) 
                                        | (0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                 >> 0x14U))))) 
                               >> 0x18U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (7U 
                                                                        & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                           >> 8U)))) 
                                                       << 0x28U) 
                                                      | (0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                             << 0xcU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                               >> 0x14U)))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                            & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__pump_control__DOT__nz__DOT__state_r))) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0x803fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (0xffc00000U & ((0x70000000U 
                                              & ((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                                  << 0x1dU) 
                                                 | (0x10000000U 
                                                    & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                       >> 3U)))) 
                                             | ((0xe000000U 
                                                 & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                    << 0xbU)) 
                                                | (0x1c00000U 
                                                   & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                      << 3U))))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo)
                            ? 0xbU : 0xaU);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = (0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[2U] = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = (0x80000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                }
            } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((1U & (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                             ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                             : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                           & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v 
                        = (1U & (~ (IData)((0U != (0x4004000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                        = (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 1U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = ((IData)((0U != (0x4004000U 
                                           & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))
                            ? 0xbU : 0xaU);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                        = (1U & (~ (IData)((0U != (0x4004000U 
                                                   & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])))));
                } else {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 9U;
                }
            } else {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                    = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_lo)
                        ? 8U : 9U);
            }
        } else if ((4U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r)))) {
                    if ((0x2000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[3U])) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                            = ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                  ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                  : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                                & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                                    ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                    : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))) 
                               & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo;
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                            = (IData)(((((QData)((IData)(
                                                         (7U 
                                                          & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                             >> 8U)))) 
                                         << 0x30U) 
                                        | (0xffffffffff00ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                               << 0x14U) 
                                              | (0xfffffffffff00ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                    >> 0xcU))))) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          | (0xf0U 
                                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U]))))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (IData)((((((QData)((IData)(
                                                             (7U 
                                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                 >> 8U)))) 
                                             << 0x30U) 
                                            | (0xffffffffff00ULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                   << 0x14U) 
                                                  | (0xfffffffffff00ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                        >> 0xcU))))) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              | (0xf0U 
                                                                 & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U]))))) 
                                          >> 0x20U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U];
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0xf03fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (0xffc00000U & ((0xe000000U 
                                                  & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                     << 0xbU)) 
                                                 | (0x1c00000U 
                                                    & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       << 3U)))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo) 
                                & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__fsm_last_o))
                                ? 5U : 6U);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = (0x100000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                    } else {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                            = ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                                  ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                  : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                                & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                                    ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                    : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))) 
                               & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                               & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__fsm_last_o));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            (7U 
                                                             & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                >> 8U)))) 
                                            << 0x28U) 
                                           | (0xffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                    >> 0x14U))))) 
                                  << 8U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             (7U 
                                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                 >> 8U)))) 
                                             << 0x28U) 
                                            | (0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                     >> 0x14U))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (7U 
                                                                            & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                               >> 8U)))) 
                                                           << 0x28U) 
                                                          | (0xffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U])) 
                                                                 << 0xcU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U])) 
                                                                   >> 0x14U)))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                            = (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo)
                                ? 5U : 6U);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = ((0xf03fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                               | (0xffc00000U & ((0xe000000U 
                                                  & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                     << 0xbU)) 
                                                 | (0x1c00000U 
                                                    & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                       << 3U)))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                            = (0x100000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[4U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
                if ((1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                            ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                            : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                        = ((0xfffe07ffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                           | (0xfffff800U & ((0x1c000U 
                                              & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0xbU)) 
                                             | (0x3800U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 8U)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x1cU;
                    if (((0U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                         | (1U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                            = ((0xfffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                               | ((IData)((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)))) 
                                  << 0x14U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] 
                            = ((0xf0000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U]) 
                               | (((IData)((0xffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                  >> 8U)))) 
                                   >> 0xcU) | ((IData)(
                                                       ((0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U))) 
                                                        >> 0x20U)) 
                                               << 0x14U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pma_cacheable_addr_lo)
                                ? 8U : 0x1cU);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                            = ((0xfffff8ffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                               | (0x700U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                            >> 8U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] 
                            = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U]) 
                               | (0x80000000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 << 2U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U] 
                            = ((0xfffffffcU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U]) 
                               | (0x7fffffffU & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x1eU)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xffffdfffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | ((1U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                  << 0xdU));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xffff7fffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (0x8000U & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                             >> 0xdU)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xefffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pma_cacheable_addr_lo) 
                                  << 0x1cU));
                    } else if (((2U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                | (3U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                            = ((0xfffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                               | ((IData)((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                 >> 8U)))) 
                                  << 0x14U));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] 
                            = ((0xf0000000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U]) 
                               | (((IData)((0xffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                  >> 8U)))) 
                                   >> 0xcU) | ((IData)(
                                                       ((0xffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                             << 0x18U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                               >> 8U))) 
                                                        >> 0x20U)) 
                                               << 0x14U)));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                            = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pma_cacheable_addr_lo)
                                ? 8U : 6U);
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] 
                            = ((0xfffff80fU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U]) 
                               | (0xfffffff0U & ((0x700U 
                                                  & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 8U)) 
                                                 | (0xf0U 
                                                    & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xffff9fffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | (0xffffe000U & (0x4000U 
                                                 | ((3U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                    << 0xdU))));
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] 
                            = ((0xefffffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U]) 
                               | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pma_cacheable_addr_lo) 
                                  << 0x1cU));
                    } else {
                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x1cU;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_resp_coh_ack_yumi)))) {
                if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = ((3U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0))
                            ? 5U : 3U);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo = 1U;
                } else {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 4U;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo = 0U;
                }
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                    = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
                        & (0U != (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U])))
                        ? 0x1cU : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr 
                    = (5U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_inc 
                    = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
                       & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr)));
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr 
                    = (5U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
                if (((0U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)) 
                     & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy)))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo 
                        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__VdfgExtracted_hd82698c1__3)
                                  ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                                  : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U] 
                        = (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[0U]);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_inc 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo;
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U] 
                        = ((0xff3fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo[1U]) 
                           | (0xc00000U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1) 
                                           << 0x16U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_inc)
                            ? 4U : 3U);
                }
            } else {
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[0U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[1U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[2U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[3U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n[4U] = 0U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 2U;
                if (vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_mode_r) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 3U;
                } else if ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                            & ((0U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                               | (1U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0x1cU;
                } else if ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                            & (3U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                        = ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                            & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                                ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))) 
                           & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__fsm_last_o));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = (IData)(((0x7ffffffffff00ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                        << 0x20U) | 
                                       (0xffffffffffffff00ULL 
                                        & (QData)((IData)(
                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                                   | (QData)((IData)(
                                                     (1U 
                                                      | (0xf0U 
                                                         & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (IData)((((0x7ffffffffff00ULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                            << 0x20U) 
                                           | (0xffffffffffffff00ULL 
                                              & (QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          | (0xf0U 
                                                             & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U]))))) 
                                      >> 0x20U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[0U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[1U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[2U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo[3U] 
                        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U];
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xf03fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (0xffc00000U & ((0xe000000U 
                                              & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                             | (0x1c00000U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   << 3U)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = (0x100000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                } else if ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))) 
                            & (2U == (0xfU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo 
                        = ((((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__VdfgExtracted_hd82698c1__2)
                              ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                              : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__gearbox__DOT__fifo__DOT__full_r))) 
                            & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__VdfgExtracted_h5933db0c__2)
                                ? (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                : (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->__PVT__gearbox__DOT__fifo__DOT__empty_r)))) 
                           & (0x20U != (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo 
                        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo) 
                           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pump_out->__PVT__fsm_last_o));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]) 
                           | ((IData)((0x7ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                             >> 8U)))) 
                              << 8U));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (((IData)((0x7ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                              >> 8U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x7ffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                                            >> 8U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = ((0xf03fffffU & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]) 
                           | (0xffc00000U & ((0xe000000U 
                                              & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U]) 
                                             | (0x1c00000U 
                                                & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   << 3U)))));
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                        = (0x100000U | vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U]);
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U] 
                        = (0xfffffff0U & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U]);
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr 
                = (3U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v = 1U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 6U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li = 0ULL;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li 
                = (7U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_inc 
                = (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                = ((0xffffffffe0ULL & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li) 
                   | (IData)((IData)((0x1fU & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0)))));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr 
                = ((0x1fU == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0)) 
                   & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_inc 
                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr) 
                   & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr)));
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr)
                    ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_mode_r)
                        ? 3U : 2U) : 1U);
        } else {
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 1U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 1U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr = 1U;
            vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr = 1U;
        }
    }
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_resp_coh_ack_yumi 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy)) 
              & (2U == (0xfU & vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U]))));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__cnt_up 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__msg_yumi_lo 
        = ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT____VdfgExtracted_h5933db0c__5)
            ? ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li) 
               & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo))
            : (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo));
    if (vlSelf->__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[0U] = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[1U] = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[2U] = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[3U] = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[4U] = 0U;
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[5U] = 0U;
    } else {
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[0U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[0U];
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[1U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[1U];
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[2U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[2U];
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[3U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[3U];
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[4U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[4U];
        vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[5U] 
            = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r[5U];
        if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v) {
            if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li) {
                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb8193ef0__0 
                    = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li) 
                             >> 5U));
                if ((0xbfU >= ((IData)(5U) + (0xffU 
                                              & ((IData)(6U) 
                                                 * 
                                                 (0x1fU 
                                                  & VL_STREAML_FAST_III(6, 
                                                                        (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                         >> 0x1aU), 0))))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[(
                                                                                ((IData)(5U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(6U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       (0x1fU 
                                                        & VL_STREAML_FAST_III(6, 
                                                                              (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                               >> 0x1aU), 0)))))))) 
                            & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[
                            (((IData)(5U) + (0xffU 
                                             & ((IData)(6U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0))))) 
                             >> 5U)]) | ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb8193ef0__0) 
                                         << (0x1fU 
                                             & ((IData)(5U) 
                                                + (0xffU 
                                                   & ((IData)(6U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                              >> 0x1aU), 0))))))));
                }
            }
            if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__squash_v_li) {
                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb85225f3__0 
                    = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li) 
                             >> 4U));
                if ((0xbfU >= ((IData)(4U) + (0xffU 
                                              & ((IData)(6U) 
                                                 * 
                                                 (0x1fU 
                                                  & VL_STREAML_FAST_III(6, 
                                                                        (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                         >> 0x1aU), 0))))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[(
                                                                                ((IData)(4U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(6U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       (0x1fU 
                                                        & VL_STREAML_FAST_III(6, 
                                                                              (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                               >> 0x1aU), 0)))))))) 
                            & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[
                            (((IData)(4U) + (0xffU 
                                             & ((IData)(6U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0))))) 
                             >> 5U)]) | ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb85225f3__0) 
                                         << (0x1fU 
                                             & ((IData)(4U) 
                                                + (0xffU 
                                                   & ((IData)(6U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                              >> 0x1aU), 0))))))));
                }
            }
            if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li) {
                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb851304c__0 
                    = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li) 
                             >> 3U));
                if ((0xbfU >= ((IData)(3U) + (0xffU 
                                              & ((IData)(6U) 
                                                 * 
                                                 (0x1fU 
                                                  & VL_STREAML_FAST_III(6, 
                                                                        (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                         >> 0x1aU), 0))))))) {
                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[(
                                                                                ((IData)(3U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(6U) 
                                                                                * 
                                                                                (0x1fU 
                                                                                & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       (0x1fU 
                                                        & VL_STREAML_FAST_III(6, 
                                                                              (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                               >> 0x1aU), 0)))))))) 
                            & vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n[
                            (((IData)(3U) + (0xffU 
                                             & ((IData)(6U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0))))) 
                             >> 5U)]) | ((IData)(vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb851304c__0) 
                                         << (0x1fU 
                                             & ((IData)(3U) 
                                                + (0xffU 
                                                   & ((IData)(6U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                              >> 0x1aU), 0))))))));
                }
            }
            if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li) {
                vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_h69ffed01__0 
                    = (7U & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li));
                if ((0xbfU >= (0xffU & ((IData)(6U) 
                                        * (0x1fU & VL_STREAML_FAST_III(6, 
                                                                       (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                        >> 0x1aU), 0)))))) {
                    VL_ASSIGNSEL_WI(192,3,(0xffU & 
                                           ((IData)(6U) 
                                            * (0x1fU 
                                               & VL_STREAML_FAST_III(6, 
                                                                     (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                      >> 0x1aU), 0)))), vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n, vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_h69ffed01__0);
                }
            }
        }
    }
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n[0U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[0U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n[1U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[1U];
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n[2U] 
        = vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[2U];
    if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v) {
        if (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li) {
            vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__1 
                = (7U & ((IData)(1U) + ((0x5fU >= (0x7fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                              (((IData)(2U) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))))) 
                                            | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                               (3U 
                                                & (((IData)(3U) 
                                                    * 
                                                    (0x1fU 
                                                     & VL_STREAML_FAST_III(6, 
                                                                           (0x3fU 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))))
                                         : 0U)));
            if ((0x5fU >= (0x7fU & ((IData)(3U) * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))) {
                VL_ASSIGNSEL_WI(96,3,(0x7fU & ((IData)(3U) 
                                               * (0x1fU 
                                                  & VL_STREAML_FAST_III(6, 
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))), vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n, vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__1);
            }
        } else {
            vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__2 
                = (7U & (((0x5fU >= (0x7fU & ((IData)(3U) 
                                              * (0x1fU 
                                                 & VL_STREAML_FAST_III(6, 
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))
                           ? (((0U == (0x1fU & ((IData)(3U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))
                                ? 0U : (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                        (((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(3U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(3U) 
                                             * (0x1fU 
                                                & VL_STREAML_FAST_III(6, 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))))) 
                              | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                 (3U & (((IData)(3U) 
                                         * (0x1fU & VL_STREAML_FAST_III(6, 
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(3U) 
                                           * (0x1fU 
                                              & VL_STREAML_FAST_III(6, 
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0))))))
                           : 0U) - (IData)(1U)));
            if ((0x5fU >= (0x7fU & ((IData)(3U) * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))))) {
                VL_ASSIGNSEL_WI(96,3,(0x7fU & ((IData)(3U) 
                                               * (0x1fU 
                                                  & VL_STREAML_FAST_III(6, 
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                                                >> 6U))), 0)))), vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n, vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__2);
            }
        }
    }
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo 
        = ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U] 
                                       >> 8U))))) & 
           (0x80000000ULL <= (0xffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[1U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo[0U])) 
                                                    >> 8U)))));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_icache 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li)) 
           & (4U > (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li)));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_dcache 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
           & (4U > (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li)));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__cnt_up) 
                        & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li)))
                  : ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__cnt_up) 
                     & (~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li)))));
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__msg_yumi_lo));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_lo 
        = (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_r_v) 
            & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v) 
               & ((0x1fU & VL_STREAML_FAST_III(6, (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr 
                                                              >> 6U))), 0)) 
                  == (0x1fU & VL_STREAML_FAST_III(6, 
                                                  (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                   >> 0x1aU), 0)))))
            ? (0U != ((0x5fU >= (0x7fU & ((IData)(3U) 
                                          * (0x1fU 
                                             & VL_STREAML_FAST_III(6, 
                                                                   (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                    >> 0x1aU), 0)))))
                       ? (7U & (((0U == (0x1fU & ((IData)(3U) 
                                                  * 
                                                  (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0)))))
                                  ? 0U : (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n[
                                          (((IData)(2U) 
                                            + (0x7fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (0x1fU 
                                                     & VL_STREAML_FAST_III(6, 
                                                                           (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                            >> 0x1aU), 0))))))) 
                                | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n[
                                   (3U & (((IData)(3U) 
                                           * (0x1fU 
                                              & VL_STREAML_FAST_III(6, 
                                                                    (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                     >> 0x1aU), 0))) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (0x1fU 
                                                   & VL_STREAML_FAST_III(6, 
                                                                         (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                          >> 0x1aU), 0)))))))
                       : 0U)) : (0U != ((0x5fU >= (0x7fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & VL_STREAML_FAST_III(6, 
                                                                             (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                              >> 0x1aU), 0)))))
                                         ? (7U & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (0x1fU 
                                                         & VL_STREAML_FAST_III(6, 
                                                                               (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                                    (((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0x1fU 
                                                           & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (0x1fU 
                                                          & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))))))) 
                                                  | (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r[
                                                     (3U 
                                                      & (((IData)(3U) 
                                                          * 
                                                          (0x1fU 
                                                           & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (0x1fU 
                                                          & VL_STREAML_FAST_III(6, 
                                                                                (vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[0U] 
                                                                                >> 0x1aU), 0)))))))
                                         : 0U)));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v) 
           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_icache));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_r_v) 
           & ((1U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd)) 
              | ((2U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_icache))));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v) 
           & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_dcache));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_r_v) 
           & ((1U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd)) 
              | ((2U == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_dcache))));
}
