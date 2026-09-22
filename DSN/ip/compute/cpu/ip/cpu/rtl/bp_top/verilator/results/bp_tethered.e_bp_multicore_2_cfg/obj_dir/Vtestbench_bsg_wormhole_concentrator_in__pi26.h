// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_WORMHOLE_CONCENTRATOR_IN__PI26_H_
#define VERILATED_VTESTBENCH_BSG_WORMHOLE_CONCENTRATOR_IN__PI26_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_wormhole_concentrator_in__pi26 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__links_v_i,1,0);
        VL_OUT8(__PVT__links_ready_and_rev_o,1,0);
        VL_OUT8(__PVT__links_credit_late_o,1,0);
        VL_IN8(__PVT__concentrated_link_ready_and_rev_i,0,0);
        VL_OUT8(__PVT__concentrated_link_v_o,0,0);
        CData/*1:0*/ __PVT__reqs;
        CData/*1:0*/ __PVT__data_sel_lo;
        CData/*0:0*/ __Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i;
        CData/*0:0*/ __Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i;
        CData/*1:0*/ __PVT__woc__DOT__scheduled_with_release;
        CData/*1:0*/ woc__DOT____VdfgTmp_hc8ebdcaa__0;
        CData/*1:0*/ __PVT__woc__DOT__scheduled_reg__DOT__data_r;
        CData/*0:0*/ __PVT__woc__DOT__brr__DOT__tag_o;
        CData/*0:0*/ __PVT__woc__DOT__brr__DOT__last;
        CData/*0:0*/ __PVT__woc__DOT__brr__DOT__last_n;
        CData/*0:0*/ __PVT__woc__DOT__brr__DOT__last_r;
        CData/*1:0*/ __PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
        CData/*0:0*/ in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap;
        CData/*1:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap;
        CData/*1:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r;
        CData/*3:0*/ __PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
        CData/*3:0*/ __PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en;
        CData/*0:0*/ in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap;
        CData/*1:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap;
        CData/*1:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r;
        CData/*3:0*/ __PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
        CData/*3:0*/ __PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        VL_INW(__PVT__links_data_i,255,0,8);
    };
    struct {
        VL_OUTW(__PVT__concentrated_link_data_o,127,0,4);
        VlWide<4>/*127:0*/ __Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o;
        VlWide<4>/*127:0*/ __Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        VlWide<4>/*127:0*/ __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r;
        VlUnpacked<VlWide<4>/*127:0*/, 2> __PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 2> __PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_wormhole_concentrator_in__pi26(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_wormhole_concentrator_in__pi26();
    VL_UNCOPYABLE(Vtestbench_bsg_wormhole_concentrator_in__pi26);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
