// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_WORMHOLE_ROUTER__PI33_H_
#define VERILATED_VTESTBENCH_BSG_WORMHOLE_ROUTER__PI33_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench_bsg_mux_one_hot__W80_Ez28;
class Vtestbench_bsg_two_fifo__W80;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_wormhole_router__pi33 final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench_bsg_two_fifo__W80* __PVT__in_ch__BRA__0__KET____DOT__twofer;
    Vtestbench_bsg_two_fifo__W80* __PVT__in_ch__BRA__1__KET____DOT__twofer;
    Vtestbench_bsg_two_fifo__W80* __PVT__in_ch__BRA__2__KET____DOT__twofer;
    Vtestbench_bsg_mux_one_hot__W80_Ez28* __PVT__out_ch__BRA__1__KET____DOT__data_mux;
    Vtestbench_bsg_mux_one_hot__W80_Ez28* __PVT__out_ch__BRA__2__KET____DOT__data_mux;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset_i,0,0);
    VL_IN8(__PVT__my_cord_i,2,0);
    CData/*2:0*/ __Vcellinp__in_ch__BRA__0__KET____DOT__conc__i;
    CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__detected_header_lo;
    CData/*1:0*/ __PVT__in_ch__BRA__1__KET____DOT__yumis_li;
    CData/*0:0*/ __PVT__in_ch__BRA__1__KET____DOT__detected_header_lo;
    CData/*1:0*/ __PVT__in_ch__BRA__2__KET____DOT__yumis_li;
    CData/*0:0*/ __PVT__in_ch__BRA__2__KET____DOT__detected_header_lo;
    CData/*2:0*/ __PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
    CData/*2:0*/ __Vcellinp__out_ch__BRA__0__KET____DOT__conc__i;
    CData/*1:0*/ __PVT__out_ch__BRA__1__KET____DOT__reqs_li;
    CData/*1:0*/ __PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__reqs_li;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__release_li;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__valids_li;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
    CData/*0:0*/ __PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt;
    CData/*3:0*/ __PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    CData/*3:0*/ __PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    CData/*3:0*/ __PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    CData/*3:0*/ __PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    CData/*3:0*/ __PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    CData/*3:0*/ __PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    CData/*2:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release;
    CData/*2:0*/ out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0;
    CData/*2:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r;
    CData/*1:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o;
    CData/*1:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last;
    CData/*1:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
    CData/*1:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r;
    CData/*2:0*/ __PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n;
    CData/*1:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release;
    CData/*1:0*/ out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0;
    CData/*1:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r;
    CData/*0:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o;
    CData/*0:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last;
    CData/*0:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
    CData/*0:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r;
    CData/*1:0*/ __PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release;
    CData/*1:0*/ out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r;
    CData/*0:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o;
    CData/*0:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last;
    CData/*0:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
    CData/*0:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r;
    CData/*1:0*/ __PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n;
    VL_INW(__PVT__link_i,389,0,13);
    VL_OUTW(__PVT__link_o,389,0,13);
    VlWide<8>/*255:0*/ __Vcellout__out_ch__BRA__1__KET____DOT__conc4__o;
    VlWide<8>/*255:0*/ __Vcellout__out_ch__BRA__2__KET____DOT__conc4__o;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__in_ch__BRA__0__KET____DOT__dor__DOT__cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__in_ch__BRA__1__KET____DOT__dor__DOT__cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__in_ch__BRA__2__KET____DOT__dor__DOT__cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};

    // CONSTRUCTORS
    Vtestbench_bsg_wormhole_router__pi33(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_wormhole_router__pi33();
    VL_UNCOPYABLE(Vtestbench_bsg_wormhole_router__pi33);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
