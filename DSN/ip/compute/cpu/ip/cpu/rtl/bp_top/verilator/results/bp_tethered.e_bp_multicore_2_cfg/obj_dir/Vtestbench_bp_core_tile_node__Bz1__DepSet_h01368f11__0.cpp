// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"
#include "Vtestbench_bp_me_stream_pump_out__pi69.h"

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h10a543f1_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h428acd64_0;

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__84(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__84\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h6b5304ae__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h6b5304ae__0 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done = 0U;
    if ((4U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n 
            = ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))
                ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_init_done_o)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))
                : ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))
                    ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_init_done_o)
                        ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))
                    : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o)
                        ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))));
    } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
                   & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_credits_full_li)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n 
                = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo) 
                    & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_last_o))
                    ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r));
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_req_done_o;
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li 
            = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
                & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__full_r))) 
               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r) 
                  | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
                     & (4U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li)
                ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_load_v_li) 
                    | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_store_v_li) 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
                          & ((3U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)) 
                             | (5U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0))))))
                    ? 3U : 1U) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo)
                                   ? 4U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_init_done_o)
                ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r));
    }
    if (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r)) 
         & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r)) 
            & (0x40U == (0xf0U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellout__cache_req_fifo__data_o[0U]))))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
               & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_credits_full_li)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_last_o));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_v_reg__DOT__data_r) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done)) 
              | (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_req_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_read 
        = ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
               >> 2U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h6b5304ae__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_read));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li 
        = (0x3fU & ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h6b5304ae__0)
                     ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__paddr_reg__DOT__data_r 
                                >> 6U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_cast_o) 
                                           >> 5U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo 
        = ((~ (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h6b5304ae__0)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_v_o));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__coherence_blocked 
        = (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo)) 
            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
           | (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
              | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_v_o))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_read) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_w_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_v_o) 
                 & (1U != (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h10bb38c6__0 
        = (1U & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__stat_mem_pkt_v_o)) 
                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo)) 
                 & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo)) 
                    & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_n 
        = ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r))
            ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li)
                ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r))
            : ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r))
                ? (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)) 
                    & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_req_last_o) 
                       & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h10bb38c6__0)))
                    ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r))
                : 0U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv 
        = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_req_critical_o) 
              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h10bb38c6__0)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(1U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     (0x3fU & (((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x21cU) 
                                             * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[1U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[1U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(2U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(1U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[1U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[2U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[2U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(3U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(2U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[2U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[3U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[3U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(4U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(3U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[3U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[4U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[4U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(5U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(4U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[4U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[5U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[5U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(6U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(5U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[5U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[6U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[6U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(7U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(6U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[6U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[7U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[7U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(7U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[7U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[8U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[8U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(9U) + (0x3fU & 
                                            (((IData)(0x21cU) 
                                              * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(8U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[8U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[9U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[9U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xaU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(9U) + (0x3fU & (((IData)(0x21cU) 
                                               * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[9U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xaU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xaU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xbU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xaU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xaU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xbU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xbU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xcU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xbU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xbU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xcU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xcU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xdU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xcU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xcU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xdU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xdU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xeU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xdU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xdU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xeU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xeU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0xfU) + (0x3fU 
                                              & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xeU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xeU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0xfU] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0xfU] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0x10U) + (0x3fU 
                                               & (((IData)(0x21cU) 
                                                   * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0xfU) + (0x3fU & (((IData)(0x21cU) 
                                                 * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0xfU]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o[0x10U] 
        = (Vtestbench__ConstPool__CONST_h10a543f1_0[0x10U] 
           & ((0x437U >= (0x7ffU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
               ? (((0U == (0x1fU & ((IData)(0x21cU) 
                                    * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv))))
                    ? 0U : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                            ((IData)(0x11U) + (0x3fU 
                                               & (((IData)(0x21cU) 
                                                   * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x21cU) 
                                                     * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))) 
                  | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[
                     ((IData)(0x10U) + (0x3fU & (((IData)(0x21cU) 
                                                  * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x21cU) * (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)))))
               : Vtestbench__ConstPool__CONST_h428acd64_0[0x10U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__paddr_reg__en_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__paddr_tv_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv)
            ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__paddr_reg__DOT__data_r
            : (((QData)((IData)((0xfffffffU & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_entry_lo 
                                                       >> 8U))))) 
                << 0xcU) | (QData)((IData)((0xfffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                       >> 3U)))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__86(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__86\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h41183a4b__0;
    VlWide<21>/*671:0*/ __Vtemp_hf3035511__0;
    VlWide<21>/*671:0*/ __Vtemp_h726583f8__0;
    VlWide<22>/*703:0*/ __Vtemp_h6c68f224__0;
    VlWide<22>/*703:0*/ __Vtemp_h628b8eae__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done = 0U;
    if ((4U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n 
            = ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))
                ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_init_done_o)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))
                : ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))
                    ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_init_done_o)
                        ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))
                    : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o)
                        ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))));
    } else if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
                   & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_credits_full_li)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n 
                = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo) 
                    & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_last_o))
                    ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r));
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_req_done_o;
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li 
            = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_v_lo) 
                & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__full_r))) 
               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r) 
                  | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_v_lo) 
                     & (0x40U == (0xf0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_cast_o[0U])))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li)
                ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__miss_load_v_li) 
                    | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__miss_store_v_li) 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_v_lo) 
                          & ((3U == (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_cast_o[0U] 
                                             >> 4U))) 
                             | (5U == (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_cast_o[0U] 
                                               >> 4U)))))))
                    ? 3U : 1U) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_v_lo)
                                   ? 4U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_init_done_o)
                ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r));
    }
    if (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r)) 
         & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r)) 
            & (0x40U == (0xf0U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellout__cache_req_fifo__data_o[0U]))))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
               & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_credits_full_li)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_last_o));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_v_reg__DOT__data_r) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done)) 
              | (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_req_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_pump_out->__PVT__fsm_ready_then_o) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_sent 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_req) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_n 
        = (((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
            & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_req_last_o) 
               & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h0ae2a02e__0)))
            ? 0U : (((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_sent))
                     ? 2U : (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__any_miss_tv)))
                              ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__snoop_v 
        = ((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_sent));
    __Vtemp_h41183a4b__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xfffffffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                                       >> 8U))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                        >> 0x21U))))))) 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(1U) 
                                                                           << 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x24U))))))) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((~ (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x17U))) 
                                                                              & ((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x11U)) 
                                                                                | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__ptag_uncached_lo)))))) 
                                                          << 0x21U) 
                                                         | (0x1ffffffffULL 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r))) 
                                                     >> 0x20U)));
    __Vtemp_hf3035511__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0x800000U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                             ? 
                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                              << 0x1cU) 
                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                >> 4U))
                                                             : 
                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[4U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                >> 1U))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0x800000U 
                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                              ? 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                               << 0x1cU) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[8U] 
                                                                 >> 4U))
                                                              : 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                               << 0x1fU) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[2U] 
                                                                 >> 1U))))))) 
                                 << 0x12U) | (((IData)(
                                                       (((QData)((IData)(
                                                                         (0xfffffffU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                                                >> 8U))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x21U))))))) 
                                               >> 0x16U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0xfffffffU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                                                >> 8U))))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (0xfffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x21U)))))) 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_hf3035511__0[3U] = (((IData)((((QData)((IData)(
                                                           ((0x800000U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                             ? 
                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                              << 0x1cU) 
                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                >> 4U))
                                                             : 
                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[4U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                >> 1U))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0x800000U 
                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                              ? 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                               << 0x1cU) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[8U] 
                                                                 >> 4U))
                                                              : 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                               << 0x1fU) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[2U] 
                                                                 >> 1U))))))) 
                                 >> 0xeU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x800000U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                          ? 
                                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                                           << 0x1cU) 
                                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                             >> 4U))
                                                                          : 
                                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[4U] 
                                                                           << 0x1fU) 
                                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                             >> 1U))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                           ? 
                                                                          ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                            << 0x1cU) 
                                                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[8U] 
                                                                              >> 4U))
                                                                           : 
                                                                          ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                            << 0x1fU) 
                                                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[2U] 
                                                                              >> 1U)))))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h726583f8__0[0x14U] = ((0xfffc0000U & (
                                                   (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__7__KET____DOT__tag_match_tl) 
                                                     & (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                            >> 0x15U)))) 
                                                    << 0x19U) 
                                                   | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__6__KET____DOT__tag_match_tl) 
                                                        & (0U 
                                                           != 
                                                           (7U 
                                                            & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                                << 2U) 
                                                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                                  >> 0x1eU))))) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__5__KET____DOT__tag_match_tl) 
                                                           & (0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                                  >> 7U)))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__4__KET____DOT__tag_match_tl) 
                                                              & (0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                                     >> 0x10U)))) 
                                                             << 0x16U) 
                                                            | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__3__KET____DOT__tag_match_tl) 
                                                                 & (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                        >> 0x19U)))) 
                                                                << 0x15U) 
                                                               | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__2__KET____DOT__tag_match_tl) 
                                                                    & (0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                           >> 2U)))) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__1__KET____DOT__tag_match_tl) 
                                                                       & (0U 
                                                                          != 
                                                                          (7U 
                                                                           & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                                              >> 0xbU)))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__0__KET____DOT__tag_match_tl) 
                                                                         & (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                                >> 0x14U)))) 
                                                                        << 0x12U))))))))) 
                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                                      >> 0xeU));
    __Vtemp_h6c68f224__0[0x15U] = ((0xfffffffcU & (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                         >> 0x15U))) 
                                                    << 9U) 
                                                   | (((0U 
                                                        != 
                                                        (7U 
                                                         & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                             << 2U) 
                                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 0x1eU)))) 
                                                       << 8U) 
                                                      | (((0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 7U))) 
                                                          << 7U) 
                                                         | (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                                  >> 0x10U))) 
                                                             << 6U) 
                                                            | (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                     >> 0x19U))) 
                                                                << 5U) 
                                                               | (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                        >> 2U))) 
                                                                   << 4U) 
                                                                  | (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                                           >> 0xbU))) 
                                                                      << 3U) 
                                                                     | ((0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                             >> 0x14U))) 
                                                                        << 2U))))))))) 
                                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_tl) 
                                      >> 6U));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__snoop_v) {
        __Vtemp_h628b8eae__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & ((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U] 
                                                                     >> 4U)))))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x21U) 
                                               | (0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[0U])))))));
        __Vtemp_h628b8eae__0[4U] = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i) 
                                     << 0x12U) | ((
                                                   (0x200U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[4U] 
                                                       << 9U)) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[3U] 
                                                      >> 0x17U)) 
                                                  | (0x3fc00U 
                                                     & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[4U] 
                                                        << 9U))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0U] 
            = __Vtemp_h628b8eae__0[0U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[1U] 
            = ((0xfffffc00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U] 
                               << 9U)) | (IData)(((
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U] 
                                                                            >> 4U)))))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[4U] 
                                                                           >> 9U)))) 
                                                       << 0x21U) 
                                                      | (0x1ffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[0U])))))) 
                                                  >> 0x20U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[2U] 
            = (((0x200U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[2U] 
                           << 9U)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[1U] 
                                      >> 0x17U)) | 
               (0xfffffc00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[2U] 
                               << 9U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[3U] 
            = (((0x200U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[3U] 
                           << 9U)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[2U] 
                                      >> 0x17U)) | 
               (0xfffffc00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r[3U] 
                               << 9U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[4U] 
            = __Vtemp_h628b8eae__0[4U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[5U] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[6U] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[7U] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[8U] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[9U] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xaU] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xbU] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xcU] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xdU] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xeU] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xfU] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x10U] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x11U] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x12U] 
            = (((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
                         >> 0x20U)) >> 0xeU) | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i) 
                                                << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x13U] 
            = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i) 
                >> 0xeU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
                                     >> 0x20U)) << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x14U] 
            = ((0xfffc0000U & (((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                  << (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                            >> 6U))) 
                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                    << (7U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                      >> 0x1aU))))) 
                                << 0x1aU) | (0x3fc0000U 
                                             & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                      >> 6U))) 
                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                >> 0x1aU))))) 
                                                << 0x12U)))) 
               | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
                           >> 0x20U)) >> 0xeU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x15U] 
            = (0x3ffU & ((0x3fcU & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                      << (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                >> 6U))) 
                                     | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                        << (7U & (IData)(
                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                          >> 0x1aU))))) 
                                    << 2U)) | (3U & 
                                               ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                      >> 6U))) 
                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                >> 0x1aU))))) 
                                                >> 6U))));
    } else {
        __Vtemp_h628b8eae__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & ((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                             >> 0x24U))))))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x17U))) 
                                                                    & ((IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 0x11U)) 
                                                                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__ptag_uncached_lo)))))) 
                                                << 0x21U) 
                                               | (0x1ffffffffULL 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r))));
        __Vtemp_h628b8eae__0[4U] = (((IData)(((((QData)((IData)(
                                                                ((0x800000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                  ? 
                                                                 ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                                   << 0x1cU) 
                                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                     >> 4U))
                                                                  : 
                                                                 ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[4U] 
                                                                   << 0x1fU) 
                                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                     >> 1U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((0x800000U 
                                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                   ? 
                                                                  ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[9U] 
                                                                    << 0x1cU) 
                                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[8U] 
                                                                      >> 4U))
                                                                   : 
                                                                  ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[3U] 
                                                                    << 0x1fU) 
                                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[2U] 
                                                                      >> 1U)))))) 
                                              >> 0x20U)) 
                                     >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
                                                 << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0U] 
            = __Vtemp_h628b8eae__0[0U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[1U] 
            = __Vtemp_h41183a4b__0[1U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[2U] 
            = __Vtemp_hf3035511__0[2U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[3U] 
            = __Vtemp_hf3035511__0[3U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[4U] 
            = __Vtemp_h628b8eae__0[4U];
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[5U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[6U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[7U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[8U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[9U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xaU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xbU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xcU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xdU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xeU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0xfU] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x10U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x11U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x12U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x13U] 
            = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
                >> 0xeU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                            << 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x14U] 
            = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_tl) 
                << 0x1aU) | __Vtemp_h726583f8__0[0x14U]);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0[0x15U] 
            = __Vtemp_h6c68f224__0[0x15U];
    }
}
