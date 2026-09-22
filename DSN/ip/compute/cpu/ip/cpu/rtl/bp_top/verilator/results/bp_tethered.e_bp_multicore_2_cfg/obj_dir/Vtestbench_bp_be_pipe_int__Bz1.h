// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_BE_PIPE_INT__BZ1_H_
#define VERILATED_VTESTBENCH_BP_BE_PIPE_INT__BZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_be_pipe_int__Bz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__en_i,0,0);
        VL_IN8(__PVT__flush_i,0,0);
        VL_OUT8(__PVT__v_o,0,0);
        VL_OUT8(__PVT__branch_o,0,0);
        VL_OUT8(__PVT__btaken_o,0,0);
        VL_OUT8(__PVT__instr_misaligned_v_o,0,0);
        CData/*5:0*/ __PVT__shamt;
        CData/*5:0*/ __PVT__shamtn;
        CData/*0:0*/ __PVT__carry;
        CData/*0:0*/ __PVT__comp_result;
        CData/*0:0*/ __PVT__hzero;
        CData/*0:0*/ __PVT__lzero;
        CData/*5:0*/ __PVT__bindex;
        CData/*0:0*/ __VdfgTmp_hf8f076a0__0;
        CData/*0:0*/ __VdfgTmp_h4b78da8e__0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__left__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__s0;
        CData/*1:0*/ __PVT__popc__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__recurse__DOT__right__DOT__four__DOT__c0;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    };
    struct {
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    };
    struct {
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*0:0*/ __VdfgTmp_h06d11e10__0;
        CData/*0:0*/ __VdfgTmp_h099d915f__0;
        VL_INW(__PVT__reservation_i,520,0,17);
        VL_OUTW(__PVT__data_o,65,0,3);
        VlWide<3>/*64:0*/ __PVT__sum;
        IData/*31:0*/ __VdfgTmp_he74f80dd__0;
        IData/*31:0*/ __VdfgTmp_ha3283292__0;
        VL_OUT64(__PVT__npc_o,38,0);
        QData/*38:0*/ __PVT__ntaken_tgt;
        QData/*63:0*/ __PVT__src1;
        QData/*63:0*/ __PVT__src2;
        QData/*63:0*/ __PVT__alu_result;
        QData/*32:0*/ __PVT__bclzh__DOT__reversed;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__enc_lo;
        VlWide<8>/*230:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    };
    struct {
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzh__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
        VlWide<14>/*447:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__addr;
        VlWide<14>/*447:0*/ __PVT__bclzh__DOT__pe0__DOT__b__DOT__v;
        QData/*32:0*/ __PVT__bclzl__DOT__reversed;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__enc_lo;
        VlWide<8>/*230:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
        QData/*32:0*/ __PVT__bclzl__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
        VlWide<14>/*447:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__addr;
        VlWide<14>/*447:0*/ __PVT__bclzl__DOT__pe0__DOT__b__DOT__v;
        VlWide<3>/*65:0*/ __PVT__box__DOT__reg_cast_o;
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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__box__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__box__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__box__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_be_pipe_int__Bz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_be_pipe_int__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_be_pipe_int__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
