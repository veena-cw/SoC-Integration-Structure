// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.command.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
    }
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[2U];
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx1];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx1];
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.command.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly__gearbox__DOT__fifo__DOT__tail_r;
    __Vdly__gearbox__DOT__fifo__DOT__tail_r = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__gearbox__DOT__fifo__DOT__tail_r = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        __Vdly__gearbox__DOT__fifo__DOT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx2];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx2];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx2];
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[2U];
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
        = __Vdly__gearbox__DOT__fifo__DOT__tail_r;
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.command.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
    }
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[2U];
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx3];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx3];
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.command.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__gearbox__DOT__fifo__DOT__tail_r;
    __Vdly__gearbox__DOT__fifo__DOT__tail_r = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__gearbox__DOT__fifo__DOT__tail_r = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command.__PVT__fsm_cmd_yumi_lo)));
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        __Vdly__gearbox__DOT__fifo__DOT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx4];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx4];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx4];
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_data_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_header_o[2U];
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
        = __Vdly__gearbox__DOT__fifo__DOT__tail_r;
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar.__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__fsm_v_o = (1U & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
                                     ? (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))
                                     : (~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_link.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[1U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[0U] 
                             >> 0xbU));
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[2U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[1U] 
                             >> 0xbU));
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[2U] 
                         >> 0xbU));
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li)));
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx5];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx5];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx5];
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__1(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__1\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li)));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__2(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__2\n"); );
    // Body
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_link.cmd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__0(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*202:0*/ __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(203, __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__pump_control__DOT__nz__DOT__cnt_r = vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[1U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[0U] 
                             >> 0xbU));
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[2U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[1U] 
                             >> 0xbU));
        __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo.data_o[2U] 
                         >> 0xbU));
        __Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r) {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 0U;
    } else if (vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r) {
        if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) {
            __Vdly__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)));
        }
    } else {
        __Vdly__pump_control__DOT__nz__DOT__cnt_r = 
            (3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                            >> 4U)) + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li)));
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx6];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx6];
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx6];
    if (__Vdlyvset__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask 
        = ((0xffffffffc0ULL < (0xffffffffffULL & (~ 
                                                  ((1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                        >> 0x10U))) 
                                                   - 1ULL))))
            ? (0xffffffffffULL & (~ ((1ULL << (7U & 
                                               (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                >> 0x10U))) 
                                     - 1ULL))) : 0xffffffffc0ULL);
    vlSelf->__PVT__stream_size = (3U & (((1U < (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                                >> 4U))
                                          ? (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                     >> 0x10U))) 
                                             >> 4U)
                                          : 1U) - (IData)(1U)));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
        = ((((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
             << 0x38U) | (((QData)((IData)(vlSelf->gearbox__DOT____Vcellout__fifo__data_o[5U])) 
                           << 0x18U) | ((QData)((IData)(
                                                        vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                        >> 8U))) & vlSelf->__PVT__pump_control__DOT__nz__DOT__addr_mask);
    vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li 
        = ((1U & (0x810U >> (0xfU & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])))
            ? (IData)(vlSelf->__PVT__stream_size) : 0U);
    vlSelf->__VdfgExtracted_h5933db0c__1 = ((~ (0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U]))) 
                                            & ((0x810U 
                                                >> 
                                                (0xfU 
                                                 & vlSelf->gearbox__DOT____Vcellout__fifo__data_o[4U])) 
                                               & (0U 
                                                  < (IData)(vlSelf->__PVT__stream_size))));
    vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo 
        = (3U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_r)
                  : (IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                             >> 4U))));
    vlSelf->__PVT__fsm_last_o = ((3U & ((IData)((vlSelf->__PVT__pump_control__DOT__nz__DOT__base_addr 
                                                 >> 4U)) 
                                        + (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__size_li))) 
                                 == (IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__cnt_lo));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__1(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__1\n"); );
    // Body
    vlSelf->__PVT__pump_control__DOT__nz__DOT__state_n 
        = (1U & ((IData)(vlSelf->__PVT__pump_control__DOT__nz__DOT__state_r)
                  ? (~ ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) 
                        & (IData)(vlSelf->__PVT__fsm_last_o)))
                  : ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li) 
                     & (~ (IData)(vlSelf->__PVT__fsm_last_o)))));
    vlSelf->gearbox__DOT____Vcellinp__fifo__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__empty_r)) 
           & ((IData)(vlSelf->__VdfgExtracted_h5933db0c__1)
               ? ((IData)(vlSelf->__PVT__fsm_last_o) 
                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li))
               : (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li)));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__2(Vtestbench_bp_me_stream_pump_in__pi70* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_me_stream_pump_in__pi70___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in__2\n"); );
    // Body
    vlSelf->__PVT__gearbox__DOT__fifo__DOT__enq_i = 
        ((~ (IData)(vlSelf->__PVT__gearbox__DOT__fifo__DOT__full_r)) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_v_li));
}
