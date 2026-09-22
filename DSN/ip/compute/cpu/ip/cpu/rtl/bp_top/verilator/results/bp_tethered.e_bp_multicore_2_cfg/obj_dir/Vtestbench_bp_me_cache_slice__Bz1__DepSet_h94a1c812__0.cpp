// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi86.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__8\n"); );
    // Init
    CData/*0:0*/ bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0;
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0 = 0;
    CData/*0:0*/ bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0;
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0 = 0;
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_full_lo) 
           & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellinp__miss__ack_i) 
              & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
                    & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we 
        = (1U & (((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard)) 
                  & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)) 
                     | ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                             >> 0xeU) & (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo))) 
                        & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo)) 
                           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo)) 
                              & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)) 
                                 & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo) 
                                       | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo))))))))) 
                 & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r)) 
                    | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o))));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en 
        = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
            >> 0xeU) & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo) 
               & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo))
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li 
        = (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
             >> 5U) & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)) 
           | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo) 
               & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r 
                   >> 5U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r))) 
              | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo) 
                 | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_clear = 0U;
    vlSelf->__PVT__cache_controller__DOT__state_n = vlSelf->__PVT__cache_controller__DOT__state_r;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li;
                vlSelf->__PVT__cache_controller__DOT__state_n 
                    = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo)
                        ? 2U : (IData)(vlSelf->__PVT__cache_controller__DOT__state_r));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            if (vlSelf->__PVT__cache_controller__DOT__is_uc_op) {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li) 
                       & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_last_o)));
                vlSelf->__PVT__cache_controller__DOT__state_n 
                    = ((((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li) 
                         & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_last_o)) 
                        & (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li))
                        ? 4U : (IData)(vlSelf->__PVT__cache_controller__DOT__state_r));
            } else {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li;
            }
        } else {
            vlSelf->__PVT__cache_controller__DOT__state_n 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li) 
                    | (IData)(vlSelf->__PVT__cache_data_v_lo))
                    ? 2U : 3U);
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__set_clear 
            = ((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
               & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
        vlSelf->__PVT__cache_controller__DOT__state_n 
            = ((IData)(vlSelf->__PVT__cache_controller__DOT__set_clear)
                ? 2U : 1U);
    } else {
        vlSelf->__PVT__cache_controller__DOT__state_n = 1U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li 
        = (0x3ffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo)
                      ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                 >> 4U)) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)
                                             ? ((0x3fcU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)))
                                             : ((IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0)
                                                 ? 
                                                ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                    >> 0x14U))
                                                 : 
                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                                                    >> 0x16U))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo) 
           & ((~ (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0)) 
              & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)) 
                 & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) 
                       & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0) 
                          & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o)) 
                             & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__pump_control__DOT__nz__DOT__state_r)) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo));
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li 
        = (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
            & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)) 
           | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo) 
                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r)) 
               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0)) 
              | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo) 
                 | (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) 
           | (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 1U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 2U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 3U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 4U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 5U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 6U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 7U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 8U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 9U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xaU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xbU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xcU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xdU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xeU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xfU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x10U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x11U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x12U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x13U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x14U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x15U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x16U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x17U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x18U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x19U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x20U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x21U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x22U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x23U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x24U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x25U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x26U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x27U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x28U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x29U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x30U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x31U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x32U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x33U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x34U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x35U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x36U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x37U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x38U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x39U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 1U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 2U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 3U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 5U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 6U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 7U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 9U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xaU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xbU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xdU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xeU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xfU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x10U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x11U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x12U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x13U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x14U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x15U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x16U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x17U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x18U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x19U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1fU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x20U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x21U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x22U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x23U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x24U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x25U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x26U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x27U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x28U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x29U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2fU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x30U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x31U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x32U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x33U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x34U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x35U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x36U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x37U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x38U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x39U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3fU))));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__7\n"); );
    // Init
    CData/*0:0*/ bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0;
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0 = 0;
    CData/*0:0*/ bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0;
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0 = 0;
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we 
        = (1U & (((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard)) 
                  & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)) 
                     | ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
                             >> 0xeU) & (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo))) 
                        & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo)) 
                           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo)) 
                              & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)) 
                                 & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo) 
                                       | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo))))))))) 
                 & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r)) 
                    | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o))));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en 
        = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
            >> 0xeU) & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0 
        = ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)
            ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo) 
               & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo))
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li 
        = (((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode 
             >> 5U) & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)) 
           | (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo) 
               & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r 
                   >> 5U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r))) 
              | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_v_lo) 
                 | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tagst_write_en))));
    vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_clear = 0U;
    vlSelf->__PVT__cache_controller__DOT__state_n = vlSelf->__PVT__cache_controller__DOT__state_r;
    if ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__state_r)))) {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li;
                vlSelf->__PVT__cache_controller__DOT__state_n 
                    = ((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo)
                        ? 2U : (IData)(vlSelf->__PVT__cache_controller__DOT__state_r));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
            if (vlSelf->__PVT__cache_controller__DOT__is_uc_op) {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = ((IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li) 
                       & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_last_o)));
                vlSelf->__PVT__cache_controller__DOT__state_n 
                    = ((((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_v_li) 
                         & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__fsm_last_o)) 
                        & (IData)(vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li))
                        ? 4U : (IData)(vlSelf->__PVT__cache_controller__DOT__state_r));
            } else {
                vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo 
                    = vlSelf->__PVT__cache_controller__DOT__cache_pkt_yumi_li;
            }
        } else {
            vlSelf->__PVT__cache_controller__DOT__state_n 
                = (((IData)(vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li) 
                    | (IData)(vlSelf->__PVT__cache_data_v_lo))
                    ? 2U : 3U);
        }
    } else if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
        vlSelf->__PVT__cache_controller__DOT__set_clear 
            = ((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
               & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque));
        vlSelf->__PVT__cache_controller__DOT__state_n 
            = ((IData)(vlSelf->__PVT__cache_controller__DOT__set_clear)
                ? 2U : 1U);
    } else {
        vlSelf->__PVT__cache_controller__DOT__state_n = 1U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li 
        = (0x3ffU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo)
                      ? (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                 >> 4U)) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)
                                             ? ((0x3fcU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)))
                                             : ((IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0)
                                                 ? 
                                                ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                                                    >> 0x14U))
                                                 : 
                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_lo[4U] 
                                                    >> 0x16U))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo) 
           & ((~ (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h3bc52b9e__0)) 
              & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo)) 
                 & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) 
                       & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0) 
                          & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o)) 
                             & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_v)))))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__pump_control__DOT__nz__DOT__state_r)) 
           & (IData)(vlSelf->__PVT__cache_controller__DOT__fsm_fwd_yumi_lo));
    bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap 
        = (7U & (((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                  - (IData)(3U)) + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap 
        = (3U & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li 
        = (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
            & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h487289e1__0)) 
           | ((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo) 
                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r)) 
               & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0)) 
              | ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo) 
                 | (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo) 
           | (IData)(bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h22735c9b__0));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 1U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 2U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 3U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 4U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 5U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 6U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 7U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 8U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 9U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xaU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xbU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xcU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xdU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xeU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0xfU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x10U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x11U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x12U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x13U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x14U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x15U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x16U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x17U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x18U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x19U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x1fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x20U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x21U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x22U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x23U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x24U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x25U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x26U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x27U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x28U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x29U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x2fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x30U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x31U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x32U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x33U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x34U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x35U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x36U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x37U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x38U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x39U)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3aU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3bU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3cU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3dU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3eU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li) 
           & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                      >> 0x3fU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 1U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 2U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 3U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 5U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 6U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 7U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 9U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xaU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xbU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xdU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xeU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0xfU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x10U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x11U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x12U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x13U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x14U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x15U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x16U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x17U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x18U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x19U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x1fU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x20U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x21U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x22U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x23U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x24U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x25U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x26U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x27U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x28U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x29U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x2fU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x30U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x31U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x32U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x33U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x34U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x35U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x36U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x37U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x38U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x39U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3aU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3bU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3cU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3dU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3eU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_v_li) 
           & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_li)) 
              | (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_w_mask_li 
                         >> 0x3fU))));
}
