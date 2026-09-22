// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mem_1rw_sync__pi178.h"

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[58].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[59].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xeU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[60].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[61].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[62].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=          8, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem.synth.nz.bk[63].mem_1rw_sync)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i)) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi178* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                      Vtestbench_bsg_mem_1rw_sync__pi178___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_li[0xfU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
}
