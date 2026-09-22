// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_BE_FP_BOX__BZ1_H_
#define VERILATED_VTESTBENCH_BP_BE_FP_BOX__BZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_be_fp_box__Bz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__tag_i,0,0);
        CData/*2:0*/ __PVT__exp_code;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
    };
    struct {
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*0:0*/ __VdfgTmp_hb50f5e0d__0;
        CData/*0:0*/ __VdfgTmp_hd484eaa6__0;
        SData/*8:0*/ __PVT__in32_rec__DOT__adjustedExp;
        SData/*8:0*/ __PVT__in32_rec__DOT__exp;
        SData/*11:0*/ __PVT__in64_rec__DOT__adjustedExp;
        VL_OUTW(__PVT__reg_o,65,0,3);
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__reversed;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo;
        VlWide<5>/*143:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
        IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
        VlWide<6>/*191:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr;
        VlWide<6>/*191:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v;
        IData/*22:0*/ __VdfgTmp_h1bcb2658__0;
        VL_IN64(__PVT__ieee_i,63,0);
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__reversed;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo;
        VlWide<12>/*370:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
        QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
        VlWide<14>/*447:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr;
        VlWide<14>/*447:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v;
        QData/*51:0*/ __VdfgTmp_hfbb38d62__0;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_be_fp_box__Bz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_be_fp_box__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_be_fp_box__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
