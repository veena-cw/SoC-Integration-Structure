// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_wormhole_concentrator_in__pi26.h"

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_v_i)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_v_i) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtestbench__ConstPool__TABLE_he9947f7f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestbench__ConstPool__TABLE_hb25c36cc_0;

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx1];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx1];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.req_concentrator.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_v_i)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_v_i) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx2];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx2];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.resp_concentrator.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_v_li)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_v_li) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx3];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx3];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_v_i)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_v_i) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__req_concentrator__links_data_i[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx4 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx4];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx4];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.req_concentrator.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_v_i)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_v_i) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellinp__resp_concentrator__links_data_i[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx5];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx5];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.resp_concentrator.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = (1U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_v_li)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_v_li) 
              >> 1U));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r)));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n 
            = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n) 
               == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    } else {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o 
            = (1U & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].twofer.hardened.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) 
               & (~ (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
              | (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n)));
    if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[4U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[5U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[6U];
        __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[7U];
        __Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
         & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0))) {
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[0U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[1U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[2U];
        __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[3U];
        __Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[4U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[5U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[6U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[7U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__links_data_li[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    }
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                                 & (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 1U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__data_sel_lo;
        if (((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r 
                = vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
            vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r 
                = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        }
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    if (__Vdlyvset__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx6 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx6];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx6];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__1(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__1\n"); );
    // Body
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = (1U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))) 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                                        & (0U 
                                                           != (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                                                     ? (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o)
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__reqs))
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__tag_o))
                                                      : (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                 & (IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
           & ((IData)(vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__2(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                      & (IData)(vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)) 
                     & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.fill_concentrator.concentrator_in.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
